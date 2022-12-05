#include <stdio.h>

int main(){
    int tinggi_badan[10]={175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
    float sum;
    for (int i = 0; i < 10; i++)
    {
        sum+=tinggi_badan[i]; 
    }
    printf("Rata-rata tinggi badan: %.1f", sum/10);
}