#include <stdio.h>

int my_print_digits(void);

int main(){
    my_print_digits();
    return 0;
}

int my_print_digits(){
    for (int i = 0; i <= 9; i++){
        printf("%i", i);
    }
    return 0;
}