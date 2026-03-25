#include<stdio.h>
int main () {
    while(1) {
        int n;
        scanf("%d",&n);
        if ( n == 0 ) {
            break;
        }
        int first = 0, second = 0;
        for ( int i = 0; i < n; i++ ) {
            int x,y;
            scanf("%d %d",&x,&y);
            if ( x > y ) {
                first++;
            } else if( x < y ) {
                second++;
            }
        }
        printf("%d %d\n",first,second);
    }
    return 0;
}