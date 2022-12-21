#include <stdio.h>

float kali(int a, int b)
{
  float hasil = (float)a * (float)b;
  return hasil;
}

float pembagian(int a , int b)
{
  float hasil = (float)a / (float)b;
  return hasil;
}

float pengurangan(int a , int b)
{
  float hasil = (float)a - (float)b;
  return hasil;
}

float pertambahan(int a , int b)
{
  float hasil = (float)a + (float)b;
  return hasil;
}

void main()
{
  printf("Hasil kali 5x2: %.2f\n", kali(5,2));
  printf("Hasil pembagian 10/2: %.2f\n", pembagian(10,2));
  printf("Hasil pengurangan 8-2: %.2f\n", pengurangan(8,2));
  printf("Hasil pertamabahan 8+2: %.2f\n", pertambahan(8,2));
}