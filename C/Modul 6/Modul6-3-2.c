#include <stdio.h>

void myFunction(char name[], int age)
{
  for (int i = 0; i < 3; i++)
  {
    printf("Hello %s. You are %d years old.\n", name, age);
  }
}
  int main()
  {
    myFunction("Liam", 3);
    return 0;
  }