#include <stdio.h>

int main(){
    int n;
    printf("Masukkan Nilai anda: ");
    scanf("%d", &n);
    if(n >= 60){
        printf("Anda lulus dengan nilai %d", n);
    } else {
        printf("Maaf anda tidak lulus");
    }
    return 0;
}