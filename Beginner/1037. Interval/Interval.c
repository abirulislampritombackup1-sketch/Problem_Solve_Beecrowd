#include<stdio.h>
int main () {
    float n;
    scanf("%f",&n);
    if ( n < (float)0 || n > (float)100 ) {
        printf("Fora de intervalo\n");
    } else if ( n >= 0 && n <= (float)25 ) {
        printf("Intervalo [0,25]\n");
    } else if ( n > (float)25 && n <= (float)50 ) {
        printf("Intervalo (25,50]\n");
    } else if ( n > (float)75 && n <= (float)100) {
        printf("Intervalo (75,100]\n");
    }
    return 0;
}