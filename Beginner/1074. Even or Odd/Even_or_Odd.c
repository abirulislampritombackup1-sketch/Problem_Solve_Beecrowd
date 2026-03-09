#include<stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    for ( int i = 0; i < N; i++ ) {
        int X;
        scanf("%d",&X);
        if ( X == 0 ) {
            printf("NULL\n");
        } else if ( X % 2 == 0 ) {
            printf("EVEN ");
            if ( X > 0 ) {
                printf("POSITIVE\n");
            } else if ( X < 0 ) {
                printf("NEGATIVE\n");
            }
        } else if ( X % 2 != 0 ) {
            printf("ODD ");
            if ( X > 0 ) {
                printf("POSITIVE\n");
            } else if ( X < 0 ) {
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}