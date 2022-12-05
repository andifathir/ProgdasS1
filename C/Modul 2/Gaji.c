#include <stdio.h>
#include <stdbool.h>

void menu (){
   printf("     ===========================================     \n");
   printf("=====================================================\n");
   printf("===Selamat datang di aplikasi hitung gaji karyawan===\n");
   printf("=====================================================\n");
   printf("     ===========================================     \n");
}

int main(){
//Variabel
   int gaji,no,lembur,tunjangan,uanglembur,totallembur,totalgaji;
   const char web[15] = "www.myandi.com";
   char nama[20];
   bool karyawan;
   int i = 0;
   int *x, ya=69;
    *x = ya;

   start:
   menu();

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

   for (i = 0; i <= 5; i++)
   {
      printf("Terima kasih\n");
   }
   
   return 0;
}
