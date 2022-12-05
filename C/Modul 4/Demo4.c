#include <stdio.h>
#include <stdlib.h>

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
    int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, hargatotal, bayar, kembalian;
};


struct others other;
struct martabak mrtbk;
struct terangbulan trgbln;
struct totall total;

int main(){
const char web [30]="www.martabakmantap.com";
int stock[10] = {40,30,40,30,35,30,30,30,30,30};

    menu:
    printf("\t\t\t\t   Selamat Datang di Martabak Mantap\n");
    printf("\t\t\t\t\t  %s\n", web);
    printf("\t\t\t\t\t\t --Menu--\n");
    printf("=======================================================================================================\n");
    printf("|                  Martabak                     ||                    Terang Bulan                    |\n");
    printf("=======================================================================================================\n");
    printf("|No.|           Menu         |   Harga   | Stok ||No.|              Menu           |   Harga   | Stok |\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("| 1.| Martabak Reguler Ayam  | Rp.18.000 |  %d  || 6.| Terang Bulan Cokelat        | Rp.20.000 |  %d  |\n",stock[0],stock[5]);
    printf("| 2.| Martabak Reguler Sapi  | Rp.22.500 |  %d  || 7.| Terang Bulan Keju           | Rp.22.000 |  %d  |\n",stock[1],stock[6]);
    printf("| 3.| Martabak Spesial Ayam  | Rp.24.000 |  %d  || 8.| Terang Bulan Kacang         | Rp.21.000 |  %d  |\n",stock[2],stock[7]);
    printf("| 4.| Martabak Spesial Sapi  | Rp.28.500 |  %d  || 9.| Terang Bulan Cokelat Keju   | Rp.25.000 |  %d  |\n",stock[3],stock[8]);
    printf("| 5.| Martabak Mix Ayam Sapi | Rp.32.000 |  %d  ||10.| Terang Bulan Cokelat Kacang | Rp.23.500 |  %d  |\n",stock[4],stock[9]);
    printf("=======================================================================================================\n");
    printf("0. Kembali ke menu \t 99. Harga Total\n");
    printf("==========================================\n\n");

    
    for (other.i = 1;other.i!=0 && other.i!=99;)
    {
        printf("Pilih Menu (Masukkan Nomor):");
        scanf("%d", &other.i);

        switch (other.i)
        {
        case 1:
            printf("Martabak Reguler Ayam\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &mrtbk.rayam);
            total.h1=(mrtbk.rayam*18)*1000;
            other.dstock=stock[0]-mrtbk.rayam;
            stock[0]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h1);
            break;
        case 2:
            printf("Martabak Reguler Sapi\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &mrtbk.rsapi);
            total.h2=(mrtbk.rsapi*22.5)*1000;
            other.dstock=stock[1]-mrtbk.rsapi;
            stock[1]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h2);
            break;
        case 3:
            printf("Martabak Spesial Ayam\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &mrtbk.sayam);
            total.h3=(mrtbk.sayam*24)*1000;
            other.dstock=stock[2]-mrtbk.sayam;
            stock[2]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h3);
            break;
        case 4:
            printf("Martabak Spesial Sapi\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &mrtbk.ssapi);
            total.h4=(mrtbk.ssapi*28.5)*1000;
            other.dstock=stock[3]-mrtbk.ssapi;
            stock[3]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h4);
            break;  
        case 5:
            printf("Martabak Mix Ayam Sapi\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &mrtbk.mix);
            total.h5=(mrtbk.mix*32)*1000;
            other.dstock=stock[4]-mrtbk.mix;
            stock[4]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h5);
            break;  
        case 6:
            printf("Terang Bulan Cokelat\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &trgbln.cokelat);
            total.h6=(trgbln.cokelat*20)*1000;
            other.dstock=stock[5]-trgbln.cokelat;
            stock[5]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h6);
            break;
        case 7:
            printf("Terang Bulan Keju\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &trgbln.keju);
            total.h7=(trgbln.keju*22)*1000;
            other.dstock=stock[6]-trgbln.keju;
            stock[6]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h7);
            break;
        case 8:
            printf("Terang Bulan Kacang\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &trgbln.kacang);
            total.h8=(trgbln.kacang*21)*1000;
            other.dstock=stock[7]-trgbln.kacang;
            stock[7]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h8);
            break;     
        case 9:
            printf("Terang Bulan Cokelat Keju\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &trgbln.cokeju);
            total.h9=(trgbln.cokeju*25)*1000;
            other.dstock=stock[8]-trgbln.cokeju;
            stock[8]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h9);
            break;
        case 10:
            printf("Terang Bulan Cokelat Kacang\n");
            printf("Jumlah Pesanan = ");
            scanf("%f", &trgbln.cokacang);
            total.h10=(trgbln.cokacang*23.5)*1000;
            other.dstock=stock[9]-trgbln.cokacang;
            stock[9]=other.dstock;
            printf("Harga = Rp.%d\n\n", total.h10);
            break;
        case 0:
            goto menu;
            break;
        case 99:
            total.hargatotal=0;
            goto bayar;
            break;
        }
    }

bayar:
total.hargatotal=total.h1+total.h2+total.h3+total.h4+total.h5+total.h6+total.h7+total.h8+total.h9+total.h10;  

printf("\nHarga Total = %d", total.hargatotal);
    wkwk:
    printf("\n\nNominal Pembayaran = Rp.");
    scanf("%d", &total.bayar);

    if (total.bayar >= total.hargatotal)
    {
        total.kembalian = total.bayar-total.hargatotal;
        printf("\nKembalian = Rp.%d\n", total.kembalian);
        system("pause");
        system("cls");
        goto menu;
    } else if (total.bayar < total.hargatotal){
        printf("Uang tidak cukup\nSilahkan Input ulang\n");
        goto wkwk;
    }
    return 0;            
}