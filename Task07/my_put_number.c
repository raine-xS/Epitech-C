#include <stdio.h>

int my_put_number(int nb);

int main(){
    my_put_number(4324);
    return 0;
}

int my_put_number(int nb){
    printf("%i", nb);
    return 0;
}