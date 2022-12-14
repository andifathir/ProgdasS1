#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

struct product
{
  char id[10];   // product code/no.
  char name[20]; // product name
  int quantity;  // remaining quantity of product. Subtract from the original quantity the quantity purchased
  int numSold;   // initially zero, when no purchase yet.
  float price;   // price of one piece of product
  int discount;  // discount for this product
  float sales;   // accumulated sales, total sales for this product
};

struct product prod[30]; // the maximum array elements.
int count = 0;           // this will be incremented if there is a new product and this is the
FILE *f;                 // for the file pointer

int main();
void afterReg();
void master();
void Login();
void Registration();
void Title();
void disZeroQuant();
void dispHsale();
void purchaseprod();
void deleteprod();
void addProd();
void editProd();
void displayprod();
int IDChecker(int i, int j);
int checkID(char id[]);
void inv();
int readFile();
int writefile();

void Title(void)
{
  printf("Login System\n");
  printf("==============\n\n");
}

int main()
{

  /* system("Color A"); */
  Title();
  int choose1;
  printf("1. Login\n");
  printf("2. Registration\n");
  printf("3. Close Program\n");
  printf("Enter Option: ");
  scanf("%d", &choose1);
  switch (choose1)
  {
  case 1:
    system("cls");
    Login();
  case 2:
    system("cls");
    Registration();
  case 3:
    exit(0);
  }
  return 0;
}

bool Login_system()
{
  char username1[20];
  
  char us[20];
  char password1[20];
  
  char pa[20];
  Title();
  printf("Welcome to login page!\n");
  printf("------------------------\n");
  printf("Username: ");
  fflush(stdin);
  scanf("%s", username1);
  printf("Password: ");
  fflush(stdin);
  scanf("%s", password1);

  char user1[20];
  strcpy(user1, username1);

  FILE *pfile;

  pfile = fopen(strcat(user1, ".txt"), "r");

  fscanf(pfile, "%s %s", &us, &pa);

  if (strcmp(username1, us) == 0 && strcmp(password1, pa) == 0)
  {
    if (strcmp(username1, "andi") == 0 && strcmp(password1, "andi123") == 0) //Account that can access inventory you can change it if you want
    {
      system("cls");
      inv();
    }
    return true;
  }
  else
  {
    return false;
  }
  fclose(pfile);
}

void Login()
{
  system("cls");
  bool condition = Login_system();
  if (condition == true)
  {
    system("cls");
    Title();
    printf("Login successful...\n\n");
    getch();
    master();
  }
  else
  {
    system("cls");
    Title();
    printf("Invalid Username or Password\n\n");
    printf("1. Try again\n");
    printf("2. Main menu\n");
    printf("3. Close aplication\n");
    printf("Enter option: ");
    int n2;
    scanf("%d", &n2);
    switch (n2)
    {
    case 1:
      system("cls");
      Title();
      Login();
    case 2:
      system("cls");
      Title();
      main();
    case 3:
      exit(0);
    }
  }
}

void Registration()
{
  system("cls");
  Title();
  char username[20], password[20];
  printf("Welcome To Registration Page\n");
  printf("==============================\n");
  printf("Username: ");
  fflush(stdin);
  scanf("%s", &username);
  printf("Password: ");
  fflush(stdin);
  scanf("%s", &password);
  char uuu[20];
  strcpy(uuu, username);

  FILE *pfile;
  pfile = fopen(strcat(uuu, ".txt"), "w");
  fflush(stdin);
  fprintf(pfile, "%s %s", username, password);
  fclose(pfile);

  system("cls");
  Title();
  printf("Registration sucessfull...");
  getch();
  afterReg();
}

void afterReg()
{
  system("cls");
  Title();
  int ch;
  printf("1 Login\n");
  printf("2 Main Menu\n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    system("cls");
    Login();
    break;
  case 2:
    system("cls");
    main();
    break;
  default:
    Title();
    printf("Invalide Choice!");
    printf("For choice again enter 1 or enter 0 for main menu.\n");
    printf("Enter [1/0]: ");
    int n1;
    scanf("%d", &n1);
    switch (n1)
    {
    case 1:
      system("cls");
      afterReg();
      break;
    case 0:
      system("cls");
      main();
    }
  }
}

void master()
{
  system("cls");
  int i;
  count = readFile(); // the output is how many products inside the file.
  if (count < 0)
    puts("Cannot open file!");
  printf(" \t\t\t\t *****  INVENTORY *****\n");
  printf("-----------------------------------------------------------------------------------------------------\n");
  printf("S.N.|    NAME     |  PROD ID  |  QUANTITY | PROD SOLD |       PRICE       |    DISCOUNT    |  SALES |\n");
  printf("-----------------------------------------------------------------------------------------------------\n");

  for (i = 0; i < count; i++)
  { // getting the details on each product updates.
    printf("%d     %-10s       %-8s     %-5d      %-3d       %-10.2f         %-4d%%        P%.2lf\n", i + 1, prod[i].name, prod[i].id, prod[i].quantity, prod[i].numSold, prod[i].price, prod[i].discount, prod[i].sales);
  }

  purchaseprod();
}

int writefile() // write file function
{
  int i;
  f = fopen("inventory.txt", "w"); //append; change from f = fopen("inventory.txt", "a");
  if (f == NULL)
    return -1;
  fprintf(f, "%d\n", count);
  for (i = 0; i < count; ++i) // writing all the details from all the function to the text file.
  {
    // Changed
    fputs(prod[i].id, f);
    fprintf(f, "\n");
    fputs(prod[i].name, f);
    fprintf(f, "\n");
    fprintf(f, "%d\n", prod[i].quantity);
    fprintf(f, "%d\n", prod[i].numSold);
    fprintf(f, "%f\n", prod[i].price);
    fprintf(f, "%d\n", prod[i].discount);
    fprintf(f, "%f\n", prod[i].sales);
  }
  fclose(f);
  return 0;
}

int readFile() // read file function
{
  int n = 0;
  int i;
  f = fopen("inventory.txt", "r");
  if (f == NULL)
    return -1;
  fscanf(f, "%d\n", &n);
  for (i = 0; i < n; ++i)
  {
    fgets(prod[i].id, 10, f);
    prod[i].id[strlen(prod[i].id) - 1] = 0; // remove new lines
    fgets(prod[i].name, 20, f);
    prod[i].name[strlen(prod[i].name) - 1] = 0; // remove new lines
    fscanf(f, "%d", &prod[i].quantity);
    fscanf(f, "%d", &prod[i].numSold);
    fscanf(f, "%f", &prod[i].price);
    fscanf(f, "%d", &prod[i].discount);
    fscanf(f, "%f\n", &prod[i].sales);
  }
  fclose(f);
  return n;
}

void disZeroQuant()
{ //calling all the product id with zero quantity.
  int i;

  count = readFile(); // call the read function
  printf("\nProducts with zero Quantity: ");
  for (i = 0; i < count; i++)
  {
    if (prod[i].quantity == 0)
    { // printing the highest product.
      printf("\nName of the product: %s \nProduct Id: %s \nQuantity left: %d \nNumber of product sold: %d \nPrice of the product: %.2f \nDiscount of the product: %d %% \nTotal Sales: %.2lf\n", prod[i].name, prod[i].id, prod[i].quantity, prod[i].numSold, prod[i].price, prod[i].discount, prod[i].sales);
    }
  }
  writefile();
}

void dispHsale()
{ // to display the highest sale function
  int high, i;
  high = prod[0].numSold;     // getting the first element of the array that has been sold
  printf("%d", count);
  for (i = 0; i < count; i++) // loop for the num item sold.
  {
    if (prod[i].numSold > high) // if the element containts the highest sold product.
    {
      high = prod[i].numSold;   // it will pass on the high variable.
    }
  }
  printf("High: %d", high);
  printf("\nThe Highest Product Sale \n");
  for (i = 0; i < count; i++) // loop to search the highest sold product.
  {
    if (prod[i].numSold == high) // printing the highest product.
    {
      printf("Name of the product: %s \nProduct Id: %s \nQuantity left: %d \nNumber of product sold: %d \nPrice of the product: %.2f \nDiscount of the product: %d %% \nTotal Sales: %.2lf\n", prod[i].name, prod[i].id, prod[i].quantity, prod[i].numSold, prod[i].price, prod[i].discount, prod[i].sales);
    }
  }
}

void purchaseprod()
{ // function for purchasing a product
  back:
  int i, total, pay, change, totall, quant;
  char id[10];
  char x;
  int z = 0;
  count = readFile();
  printf("\nSelect item");
  printf("\nProduct ID: ");
  getchar();
  gets(id);
  for (i = 0; i < count; i++)
  {
    if (strcmp(id, prod[i].id) == 0) // if the id that the user want to find and the data id that has been saved at file is matched.
    {
      z = 1;
      printf("\nItem found! Containing: \n"); //...then display the match
      printf("\nProduct name: %s", prod[i].name);
      printf("\nPrice: %.2lf", prod[i].price);
      printf("\nDiscount: %d%%\n\n", prod[i].discount);

      printf("Enter the quantity you want to buy  : ");
      fflush(stdin);
      scanf("%d", &quant);
      if (quant > prod[i].quantity)
      { // if the quantity is lessthan the users quant
        puts("\nInsufficient Quantity\nPlease Restock.\n ");
        break; // break and back to the choices.
      }

      total = prod[i].price * quant - (quant * (prod[i].price * (prod[i].discount / 100.0)));
      float tempSales = prod[i].sales; // will be executed if the quantity is greater than the users selected quantity.
      prod[i].numSold += quant;
      prod[i].quantity -= quant;
      prod[i].sales = quant * (prod[i].price * (prod[i].discount / 100.0));
      prod[i].sales += tempSales;
      writefile();
    }
  }

  if (z == 0)
  { // if the product id is not available.
    printf("Cant find the product id: %s.\n", id);
  }

  totall += total;
  printf("Your total is %d\n", totall);

  printf("Do you want too buy more [y/n]: ");
  scanf(" %c", &x);
  switch (x)
  {
  case 'y':
  case 'Y':
    goto back;
    break;

  case 'n':
  case 'N':  
  payment:
    printf("\n\nYour total is %d\n", totall);
    printf("Enter your total payment: ");
    scanf("%d", &pay);

    if (pay >= totall)
    {
      change = pay - totall;
      printf("\nYour change is %d", change);
      getch();
      master();
    }
    else if (pay < totall)
    {
      printf("\nYour money is not enough...");
      getch();
      system("cls");
      goto payment;
    }
    break;
  }
}

void deleteprod()
{ // function for the delete product.
  count = readFile();
  char id[10];
  int i, j;
  int z = 0;
  printf("Enter the id that you want to delete : "); // user's input for deleting.
  getchar();
  gets(id);
  /* scanf("%s", id); */

  for (i = 0; i < count; i++)
  { // loop to find the user's input
    z = 1;
    if (strcmp(prod[i].id, id) == 0)
    {                                   // if the user's input matched the data
      for (j = i; j < (count - 1); j++) // it will erase the selected data.
      {
        prod[j] = prod[j + 1];
      }
      count--;
    }
  }

  if (z == 0)
  { // will be executed if the product id is not available.
    printf("Cant find product id: %s .", id);
  }
  writefile();
}

void addProd()
{ // function to add products to the file

  printf("ENTER NEW PRODUCTS\n");
  readFile(); // reading the files .
  if (count > 0)
  {
    count = readFile();
    IDChecker(0, count); // to check if the id is already used.
  }
  else
  {
    printf("\nProduct ID Number: ");
    getchar();
    gets(prod[count].id);
    /* scanf("%s", prod[count].id); */
  }
  
  printf("Product Name: ");
  getchar();
  gets(prod[count].name);
  
  /* scanf("%s", prod[count].name); */
  printf("Quantity of the product: ");
  scanf("%d", &prod[count].quantity);
  printf("Price of the product: ");
  scanf("%f", &prod[count].price);
  printf("Item Discount: ");
  scanf("%d", &prod[count].discount);
  ++count; // increment count for the product positions and how many are they in the array.

  writefile(); // putting/saving this to the file.
}

int IDChecker(int i, int j) // checking the input id
{
  count = readFile();
  printf("Product ID: ");
  fflush(stdin);
  getchar();
  gets(prod[count].id);
  /* scanf("%s", prod[count].id); */
  if (strcmp(prod[i].id, prod[j].id) == 0)
  {
    printf("ID number is already taken!");
    return IDChecker(i++, j--);
  }
}

void editProd()
{ // Editing the product function
  char id[10];
  int test;
  int i;
  int choice;
  printf("EDIT A PRODUCT!");
  printf("\nEnter the id of the product that you want to edit: "); // users input for what data will be change
  fflush(stdin);
  getchar();
  gets(id);
  test = checkID(id);
  if (test == 1)
  {
    printf("The id num %s is not found.", id); // if the data is empty
  }
  else
  {
    readFile();
    {
      for (i = 0; i < count; i++)
      {

        if (strcmp(id, prod[i].id) != 0) // if the data is not empty
          writefile();
        else
        {
          printf("\n1. Update product ID Number?");
          printf("\n2. Update Name of the product? ");
          printf("\n3. Update Quantitiy of the product?");
          printf("\n4. Update Price of the product?");
          printf("\n5. Update Discount of the product?");
          printf("\nEnter your choice:");
          fflush(stdin);
          scanf("%d", &choice);

          switch (choice)
          {
          case 1:

            printf("Enter new ID: ");
            fflush(stdin);
            getchar();
            gets(prod[i].id);
            
            break;
          case 2:
            printf("Enter new Name: ");
            fflush(stdin);
            getchar();          
            gets(prod[i].name);
            
            break;
          case 3:
            printf("Enter Quantity: ");
            scanf("%d", &prod[i].quantity);
            break;
          case 4:
            printf("Enter the new price: ");
            scanf("%f", &prod[i].price);
            break;
          case 5:
            printf("Enter the new discount of the product: ");
            scanf("%d", &prod[i].discount);
          default:
            printf("Invalid Selection");
            break;
          }
          writefile();
        }
      }
    }
    fclose(f);
    f = fopen("Inventory.txt", "r");
    readFile();
    {
      writefile();
    }
    fclose(f);
    printf("RECORD UPDATED");
  }
}

int checkID(char id[])
{ // checking the id if available
  int i;
  count = readFile();

  readFile();
  for (i = 0; i < count; i++)
  {

    if (strcmp(id, prod[i].id) != 0)
    { // if the id and data id doesnt match.

      fclose(f);
    }
    return 1; // returning an error.
  }

  fclose(f);
  return 0; // return 0 if no error.
}

void displayprod()
{
  int i;

  count = readFile(); // the output is how many products inside the file.
  if (count < 0)
    puts("cannot open file");
  printf(" \t\t\t\t *****  INVENTORY *****\n");
  printf("-----------------------------------------------------------------------------------------------------\n");
  printf("S.N.|    NAME     |  PROD ID  |  QUANTITY | PROD SOLD |       PRICE       |    DISCOUNT    |  SALES |\n");
  printf("-----------------------------------------------------------------------------------------------------\n");

  for (i = 0; i < count; i++)
  { // getting the details on each product updates.
    printf("%d     %-10s       %-8s     %-5d      %-3d       %-10.2f         %-4d%%        P%.2lf\n", i + 1, prod[i].name, prod[i].id, prod[i].quantity, prod[i].numSold, prod[i].price, prod[i].discount, prod[i].sales);
  }
}

void inv()
{
  int choice;
  count = readFile(); // ihapa una pila imong products
  if (count < 0)      // there is no file located.
    printf("Cannot locate file\n");
  do
  {
    printf("\n");
    printf("\t\t\t  ================================\n");
    printf("\t\t\t     PRODUCT INVENTORY PROGRAM\n");
    printf("\t\t\t  ================================");

    printf("\n\nPress:");
    printf("\n 1.) Input new product record.");
    printf("\n 2.) Edit a Product.");
    printf("\n 3.) Delete a Product");
    printf("\n 4.) Display all existing product.");
    /* printf("\n 5.) Make a purchase."); */
    printf("\n 5.) Display the product record with highest sale.");
    printf("\n 6.) Display all product with zero quantity");
    printf("\n 7.) Exit the program.");
    printf("\nChoice--> ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: // add product
      addProd();
      break;
    case 2: // edit data product
      editProd();
      break;
    case 3: // delete a product
      deleteprod();
      break;
    case 4: // display the products
      displayprod();
      break;
    case 5:
      dispHsale(); // to display highest sale.
      break;
    case 6:
      disZeroQuant(); // display lowest sale.
      break;
    case 7:
      exit(0);
      break;
    default:
      printf("Your choice is wrong please try again");
      break;
    }
  } while (choice != 7); // infinite loop until the user will choose number8 .
  printf("Thankyou for using this program");
}