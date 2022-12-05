#include <stdio.h>

int main(){
    char grade = 'D';

switch(grade){
    case 'A' :
        printf("Sangan baik\n");
        break;
    case 'B' :
        printf("Rata-rata\n");
        break;
    case 'C':
        printf("Rata-rata\n");
    case 'D':
        printf("Rendah\n");
        break;
    default:
        printf("Nilai anda adalah $c", grade);
  }
  printf("Nilai anda adalah %c", grade);
  return 0;
}
