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
    
    int sum = 0;
    for ( int i = X+1; i <= Y-1; i++ ) {
        if ( i % 2 != 0 ) {
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}