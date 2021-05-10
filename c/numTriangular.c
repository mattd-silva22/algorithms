#include <stdio.h>

int main(void) {

    int x , y , z , n;

    //printf("\n digite um numero: ");
    //scanf(" %d", &x);
    for (n = 1; n < 10; n++) {

        y = n * (n + 1) / 2;
        printf("\n %dº n triangular : %d" , n , y);

    }
}