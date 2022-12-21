#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

struct others
{
  int i, dstock;
};

struct martabak
{
  float rayam, rsapi, sayam, ssapi, mix;
};

struct terangbulan
{
  float cokelat, keju, kacang, cokeju, cokacang;
};

struct totall
{
  int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, hargatotal, bayar;
};

struct others other;
struct martabak mrtbk;
struct terangbulan trgbln;
struct totall total;

void struk(int kembalian, const char web[30], const char telp[30], const char email[30]);
int kembaliann(int a, int b);

int kembaliann(int a, int b)
{
  int kembalian = a - b;
  return kembalian;
}

int main()
{
  int kembalian;
  const char web[30] = "www.martabakmantap.com";
  const char telp[30] = "0837465289";
  const char email[30] = "martabakmantap21@w0w.com";
  int stock[10] = {40, 30, 40, 30, 35, 30, 30, 30, 30, 30};
menu:
  printf("\t\t\t\t   Selamat Datang di Martabak Mantap\n");
  printf("\t\t\t\t\t  %s\n", web);
  printf("\t\t\t\t\t\t --Menu--\n");
  printf("=======================================================================================================\n");
  printf("|                  Martabak                     ||                    Terang Bulan                    |\n");
  printf("=======================================================================================================\n");
  printf("|No.|           Menu         |   Harga   | Stok ||No.|              Menu           |   Harga   | Stok |\n");
  printf("-------------------------------------------------------------------------------------------------------\n");
  printf("| 1.| Martabak Reguler Ayam  | Rp.18.000 |  %d  || 6.| Terang Bulan Cokelat        | Rp.20.000 |  %d  |\n", stock[0], stock[5]);
  printf("| 2.| Martabak Reguler Sapi  | Rp.22.500 |  %d  || 7.| Terang Bulan Keju           | Rp.22.000 |  %d  |\n", stock[1], stock[6]);
  printf("| 3.| Martabak Spesial Ayam  | Rp.24.000 |  %d  || 8.| Terang Bulan Kacang         | Rp.21.000 |  %d  |\n", stock[2], stock[7]);
  printf("| 4.| Martabak Spesial Sapi  | Rp.28.500 |  %d  || 9.| Terang Bulan Cokelat Keju   | Rp.25.000 |  %d  |\n", stock[3], stock[8]);
  printf("| 5.| Martabak Mix Ayam Sapi | Rp.32.000 |  %d  ||10.| Terang Bulan Cokelat Kacang | Rp.23.500 |  %d  |\n", stock[4], stock[9]);
  printf("=======================================================================================================\n");
  printf("0. Kembali ke menu \t 99. Harga Total \t 100. Exit\n");
  printf("=============================================================\n\n");

  for (other.i = 1; other.i != 0 && other.i != 99 && other.i != 100;)
  {
    printf("Pilih Menu (Masukkan Nomor):");
    scanf("%d", &other.i);

    switch (other.i)
    {
    case 1:
      if (stock[0] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Martabak Reguler Ayam\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &mrtbk.rayam);
      total.h1 = (mrtbk.rayam * 18) * 1000;
      total.hargatotal += total.h1;
      other.dstock = stock[0] - mrtbk.rayam;
      stock[0] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h1);
      break;

    case 2:
      if (stock[1] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Martabak Reguler Sapi\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &mrtbk.rsapi);
      total.h2 = (mrtbk.rsapi * 22.5) * 1000;
      total.hargatotal += total.h2;
      other.dstock = stock[1] - mrtbk.rsapi;
      stock[1] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h2);
      break;

    case 3:
      if (stock[2] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Martabak Spesial Ayam\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &mrtbk.sayam);
      total.h3 = (mrtbk.sayam * 24) * 1000;
      total.hargatotal += total.h3;
      other.dstock = stock[2] - mrtbk.sayam;
      stock[2] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h3);
      break;

    case 4:
      if (stock[3] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Martabak Spesial Sapi\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &mrtbk.ssapi);
      total.h4 = (mrtbk.ssapi * 28.5) * 1000;
      total.hargatotal += total.h4;
      other.dstock = stock[3] - mrtbk.ssapi;
      stock[3] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h4);
      break;

    case 5:
      if (stock[4] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Martabak Mix Ayam Sapi\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &mrtbk.mix);
      total.h5 = (mrtbk.mix * 32) * 1000;
      total.hargatotal += total.h5;
      other.dstock = stock[4] - mrtbk.mix;
      stock[4] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h5);
      break;

    case 6:
      if (stock[5] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Terang Bulan Cokelat\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &trgbln.cokelat);
      total.h6 = (trgbln.cokelat * 20) * 1000;
      total.hargatotal += total.h6;
      other.dstock = stock[5] - trgbln.cokelat;
      stock[5] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h6);
      break;

    case 7:
      if (stock[6] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Terang Bulan Keju\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &trgbln.keju);
      total.h7 = (trgbln.keju * 22) * 1000;
      total.hargatotal += total.h7;
      other.dstock = stock[6] - trgbln.keju;
      stock[6] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h7);
      break;

    case 8:
      if (stock[7] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Terang Bulan Kacang\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &trgbln.kacang);
      total.h8 = (trgbln.kacang * 21) * 1000;
      total.hargatotal += total.h8;
      other.dstock = stock[7] - trgbln.kacang;
      stock[7] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h8);
      break;

    case 9:
      if (stock[8] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Terang Bulan Cokelat Keju\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &trgbln.cokeju);
      total.h9 = (trgbln.cokeju * 25) * 1000;
      total.hargatotal += total.h9;
      other.dstock = stock[8] - trgbln.cokeju;
      stock[8] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h9);
      break;

    case 10:
      if (stock[9] == 0)
      {
        printf("Stok habis...");
        getch();
        system("cls");
        goto menu;
      }
      printf("Terang Bulan Cokelat Kacang\n");
      printf("Jumlah Pesanan = ");
      scanf("%f", &trgbln.cokacang);
      total.h10 = (trgbln.cokacang * 23.5) * 1000;
      total.hargatotal += total.h10;
      other.dstock = stock[9] - trgbln.cokacang;
      stock[9] = other.dstock;
      printf("Harga = Rp.%d\n\n", total.h10);
      break;

    case 0:
      goto menu;
      break;

    case 99:
      goto bayar;
      break;

    case 100:
      system("cls");
      exit(0);
    }
  }

// Pembayaran
bayar:
  printf("\nHarga Total = %d\n", total.hargatotal);
wkwk:
  printf("Nominal Pembayaran = Rp.");
  scanf("%d", &total.bayar);

  if (total.bayar >= total.hargatotal)
  {
    kembalian = kembaliann(total.bayar, total.hargatotal);
    printf("\nKembalian = Rp.%d\n", kembalian);
    system("pause");
    system("cls");
    struk(kembalian, web, telp, email);
  }
  else if (total.bayar < total.hargatotal)
  {
    printf("Uang kurang %d \nSilahkan Input ulang total nominal pembayaran\n", total.hargatotal - total.bayar);
    goto wkwk;
  }
}

void struk(int kembalian, const char web[30], const char telp[30], const char email[30])
{
  printf("\n\n------MARTABAK MANTAP-----");
  printf("\nTotal Harga Pembelian: %d", total.hargatotal);
  printf("\nTotal Pembayaran: %d", total.bayar);
  printf("\nTotal Kembalian: %d", kembalian);
  printf("\nKunjungi Website kami: %s", web);
  printf("\nNomor telepon: %s", telp);
  printf("\nEmail: %s\n", email);
  total.hargatotal = 0;
  system("pause");
  system("cls");
  main();
}