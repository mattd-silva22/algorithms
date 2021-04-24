#include <stdio.h>


int main(void) {

    int t1 , t2, t3, n ;

    t1 = 0;
    t2 = 1;

    printf("\n %d", t1);
    printf("\n %d", t2);

    for ( n = 1; n < 25; n++ ) {

        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

       printf("\n %d", t3);

    }



}
