#include <stdio.h>

int main(){
    int n;
    printf("Masukkan Nilai anda: ");
    scanf("%d", &n);
    if(n >= 60){
        printf("Anda lulus dengan nilai %d", n);
    } else if (n < 60){
        printf("Anda mengikuti remedial");
    } else {
        printf("Anda mengulang di semester depan");
    }
    return 0;
}