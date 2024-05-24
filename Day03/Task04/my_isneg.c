#include <stdio.h>

int my_isneg(int n);

int main(){
    my_isneg(0);
    my_isneg(1);
    my_isneg(9321);
    my_isneg(-1);
    my_isneg(-3287);
    return 0;
}

int my_isneg(int n){
    if (n < 0){
        printf("N");
    } else {
        printf("P");
    }
    return 0;
}