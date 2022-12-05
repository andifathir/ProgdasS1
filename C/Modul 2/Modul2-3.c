#include <stdio.h>

int main(){
    char namapanggilan[20];
    char asalkota[20];

    printf("Masukkan Nama Panggilan Anda:");
    scanf("%s", namapanggilan);

    printf("Masukkan Asal Kota Anda: ");
    scanf("%s", asalkota);

    printf("\nHalo %s \n", namapanggilan);
    printf("Anda berasal dari kota/kabupaten %s",asalkota);

    return 0;

}