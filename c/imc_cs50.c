#include <stdio.h>
#include <math.h>

#define LIMITE 30

int main(void) {
	float peso, h , imc ;
	
	printf("\n Qual seu peso e altura ?");
	scanf("%f %f", &peso, &h);
	
	imc = peso/pow(h,2);
	printf("\n Seu I.M.C é %1f", imc);
	if (imc <= LIMITE) printf("\n Você não está obeso");
	else   printf("\n você está obeso");
		
}