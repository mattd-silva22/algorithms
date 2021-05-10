#include <stdio.h>

// cvv = resto da divisao da  soma dos digitos do numero da conta.
int main(void) {
    unsigned numeroConta , cvv , digito , num;

    printf("\n digite o numero da conta: ");
    scanf("%u", &numeroConta);

    num = numeroConta;
    cvv = 0;
    while( num != 0) {
        digito = num%10;
        num  /= 10;
        cvv = cvv + digito;

        // printf("\n  digito: %u", digito);
        // printf("\n cvv: %u", cvv);
    }

    cvv = cvv % 10;
    printf("\n numero da conta %u - %u", numeroConta , cvv);
}