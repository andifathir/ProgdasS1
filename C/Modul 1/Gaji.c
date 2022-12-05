#include <stdio.h>

int main(){
//Variabel
   int gaji,no,lembur,tunjangan,uanglembur,totallembur,totalgaji;
   const float pi = 3.14;
   char nama[20];

   printf("     ===========================================     \n");
   printf("=====================================================\n");
   printf("===Selamat datang di aplikasi hitung gaji karyawan===\n");
   printf("=====================================================\n");
   printf("     ===========================================     \n");
   system("pause");
   system("cls");

   printf("=====================================================\n");
   printf("============Aplikasi Hitung Gaji Karyawan============\n");
   printf("=====================================================\n");
   
//Inputs
   printf("Nama karyawan\t\t:");
   scanf("%[^\n]s",nama);
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
   printf("pi itu %.2f",pi);
   return 0;
}
