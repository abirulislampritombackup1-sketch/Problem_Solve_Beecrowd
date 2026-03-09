#include<stdio.h>
int main () {
    while(1) {
        int M,N;
        scanf("%d %d",&M,&N);
        if ( M == 0 || N == 0 ) {
            break;
        }
        if ( M > N ) {
            int temp = N;
            N = M;
            M = temp;
        }
        int sum = 0;
        int count = 0;
        for ( int i = M; i <= N; i++ ) {
            if ( i == 0 ) {
                count++;
            }
        }
        if ( count != 0 ) {
            break;
        }
         for ( int i = M; i <= N; i++ ) {
            printf("%d ",i);
            sum += i;
        }
        printf("Sum=%d\n",sum);

    }
    return 0;
}