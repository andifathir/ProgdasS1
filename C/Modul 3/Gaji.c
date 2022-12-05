#include <stdio.h>
#include <stdbool.h>


int main(){
//Variabel
   int gaji,no,lembur,tunjangan,uanglembur,totallembur,totalgaji, totalgaji2;
   int asks;
   const char web[15] = "www.myandi.com";
   char nama[20];
   bool karyawan;
   

   start:
   printf("     ===========================================     \n");
   printf("=====================================================\n");
   printf("===Selamat datang di aplikasi hitung gaji karyawan===\n");
   printf("=====================================================\n");
   printf("     ===========================================     \n");

   printf ("\nApakah anda karyawan diperusahaan ini (1=Yes, 0=No):", karyawan);
   scanf ("%d", &karyawan);
   if (karyawan == true){
      printf("\nSilahkan masukkan data-data dibawah ini");
   } else {
      printf("\nAplikasi ini hanya untuk karyawan perusahaan\n");  
      system("pause");
      system("cls");
      goto start;
   }

   
//Inputs
   printf("\n\nNama karyawan\t\t:");
   scanf("%s", nama);
   printf("Nomor karyawan\t\t:");
   scanf("%d",&no);
   printf("Gaji pokok\t\t:");
   scanf("%d",&gaji);
   printf("Jam lembur\t\t:");
   scanf("%d",&lembur);
   printf("======================================================\n");
/*Hitung-hitungan
Besar tunjangan = 15% gaji pokok
Besar tambahan lembur Per-jam = 5% gaji pokok */
   uanglembur = gaji*5/100;
   totallembur = uanglembur*lembur;
   tunjangan = gaji*15/100;
   totalgaji = gaji+tunjangan+totallembur;
//Outputs
   printf("Gaji pokok\t\t:Rp.%d\n",gaji);
   printf("Tunjangan\t\t:Rp.%d\n",tunjangan);
   printf("Tambahan lembur Per-jam\t:Rp.%d\n",uanglembur);
   printf("Total tambahan lembur\t:Rp.%d\n",totallembur);
   printf("Total gaji\t\t:Rp.%d\n",totalgaji);
   printf("======================================================\n");
   printf("%s\n\n", web);

   menuu:
   printf("Apakah anda CEO (1= iya 2=tidak): ");
   scanf("%d", &asks);

   switch (asks)
   {
   case 1:
      printf("Anda mendapatkan bonus 100.000\n");
      totalgaji2 = totalgaji + 100000;
      printf("Total gaji anda adalah: Rp.%d", totalgaji2);
      break;
   case 2:
      printf("Anda mendapatkan bonus 50.000\n");
      totalgaji2 = totalgaji + 50000;
      printf("Total gaji anda adalah: Rp.%d", totalgaji2);
      break;
   default:
   goto menuu;
   break;
   }
   return 0;
}
