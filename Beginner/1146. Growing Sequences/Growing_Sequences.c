#include<stdio.h>
int main () {
    
    while ( 1 ) {
        int x;
        scanf("%d",&x);
        if ( x == 0 ) {
            break;
        }
        for ( int i = 1; i <= x; i++ ) {
            if ( i == x ) {
                printf("%d\n",i);
            } else {
                printf("%d ",i);
            }
        }
    }
    return 0;
}