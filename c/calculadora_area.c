#include <stdio.h>
#include <math.h>



int main(void) {

    int n, x , y , z;
    float a;
    printf("\n @ caluladora de area @");
    printf("\n ---------------------");
    printf("\n - 1- area quadrado  -");
    printf("\n - 2- area triangulo -");
    printf("\n - 3- area retangulo -");
    printf("\n ---------------------\n");
    printf("\nselecione:");
    scanf("%d", &n  );

    switch(n) {

        case 1:
            printf("\ninformeo lado do quadrado:");
            scanf("%d", &x);
            a= pow(x, 2);
            printf("\n area do quadrado = %2f", a);
            break;



        case 2:
            printf("\ninforme a base do triangulo:");
            scanf("%d", &x);
            printf("\ninforme a altura do triangulo:");
            scanf("%d", &y);
            a = ( x * y) / 2;
            printf("\narea do triangulo = %2f" , a);
            break;




        case 3:
            printf("informe a base do retangulo:");
            scanf("%d", &x);
            printf("\ninforme a altura do retangulo:");
            scanf("%d", &y);
            a = x * y;
            printf("\narea do retangulo = %2f" , a);
            break;


    }






}