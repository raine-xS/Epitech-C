#include <stdio.h>

int my_put_number(int nb);

int main(){
    my_put_number(3204);
    return 0;
}

int my_put_number(int nb){
    int places_array[11];
    int place_value = 1;
    int a = 10; 
    int b = 0;
    int i = 0;
    while (nb >= b && i <= 11){
        (b == 0) ? (place_value = nb % a) : (place_value = (nb % a - nb % 10) / b);
        places_array[i] = place_value;
        a *= 10;
        (b == 0) ? (b = 10) : (b *= 10);
        i++;
    }

    for (int j = i - 1; j >= 0; j--){
        putchar(places_array[j] + 48);
    }

    return 0;
}