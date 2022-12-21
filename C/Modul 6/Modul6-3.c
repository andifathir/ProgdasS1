#include <stdio.h>

void myFunction()
{
  char name[20];
  int age;
  for (int i = 0; i < 3; i++)
  {
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Entery your age: ");
    scanf("%d", &age);
    printf("Hello %s. You are %d years old.\n\n", name, age);
  }
}
  int main()
  {
    myFunction();
    return 0;
  }