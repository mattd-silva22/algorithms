#include <stdio.h> 

#define MEDIA  6
int main(void) {
	
	float nota_1, nota_2, nota_3 , media_final;
	

	printf("\n digite sua nota na primeira prova");
	scanf("%f" , &nota_1);
	printf("\n digite sua nota na segunda prova");
	scanf("%f " , &nota_2);
	printf("\n digite sua nota na terceira prova");
	scanf("%f " , &nota_3);
	
	media_final = (nota_1 + nota_2 + nota_3) / 3 ;
	
	if ( media_final <= 6 ) printf("aluno aprovado");
	else printf("aluno reprovado");
		
	
	
	
	
}