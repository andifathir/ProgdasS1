#include <stdio.h>

int main(){
    char string[2][4]=
                    {
                        {'A','B','C','D',},
                        {'E','F','G','H',}
                    };

        printf("%c", string[1][3]);
}