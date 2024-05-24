#include <stdio.h>

int my_print_alpha(void);

int main() {
    my_print_alpha();
    return 0;
}

int my_print_alpha(void){
    for (int i = 97; i <= 122; i++){
        printf("%c", (char)i);
    }
    return 0;
}