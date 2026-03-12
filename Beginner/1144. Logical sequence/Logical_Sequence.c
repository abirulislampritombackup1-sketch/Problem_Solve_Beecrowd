#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = i*i; j <= i*i+1; j++ ) {
            for ( int k = i*i*i; k <= i*i*i+1; k++ ) {
                if ( (i*i == j && i*i*i == k) || ( i*i+1 == j && i*i*i+1 == k ) ) {
                    printf("%d %d %d\n",i,j,k);
                }
                
            }
        }
    }
    return 0;
}