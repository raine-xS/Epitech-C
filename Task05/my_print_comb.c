#include <stdio.h>

int my_print_comb(void);

int main(){
    my_print_comb();
    return 0;
}

int my_print_comb(){
    int a;
    int b;
    int c;
    for (a = 0; a <= 9; a++){
        for (b = a+1; b <= 9; b++){
            for (c = b+1; c <= 9; c++){
                printf("%i%i%i, ", a, b, c);
            }
        }
    }
    
    return 0;
}