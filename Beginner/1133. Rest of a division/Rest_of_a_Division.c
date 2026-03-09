#include<stdio.h>
int main () {
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    if ( X > Y ) {
        int temp = Y;
        Y = X;
        X = temp;
    }
    for ( int i = X+1; i <= Y-1 ; i++ ) {
        if ( i % 5 == 2 || i % 5 == 3 ) {
            printf("%d\n",i);
        }
    }
    return 0;
}