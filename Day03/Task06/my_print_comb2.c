#include <stdio.h>

int my_print_comb2(void);

int main(){
    my_print_comb2();
    return 0;
}

int my_print_comb2(){
    int a;
    int b;
    for (a = 0; a <= 99; a++){
        for (b = a+1; b <= 99; b++){
            printf("%02i %02i, ", a, b);
        }
    }
    
    return 0;
}