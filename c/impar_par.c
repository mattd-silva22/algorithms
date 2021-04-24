#include <stdio.h>

int main(void) {
    int x, resto;

    printf("\n digite um numero");
    scanf("%d" , &x );

    resto = x % 2 ;

    if ( resto == 1 ) printf("o numero %d e impar", x);
    else printf("o numero %d e par", x);
}