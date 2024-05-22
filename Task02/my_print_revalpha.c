#include <stdio.h>

int my_print_revalpha(void);

int main() {
    my_print_revalpha();
    return 0;
}

int my_print_revalpha(void){
    for (int i = 122; i >= 97; i--){
        printf("%c", (char)i);
    }
    return 0;
}