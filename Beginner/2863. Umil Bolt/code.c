#include<stdio.h>
int main () {
    while (1) {
        int n;
        scanf("%d",&n);
        if ( n < 2 || n > 99 ) {
            break;
        }
        float arr[n];
        float max = 0;
        for ( int i = 0; i < n; i++ ) {
            scanf("%f",&arr[i]);
            if ( arr[i] > max ) {
                max = arr[i];
            }
        }
        printf("%.2f\n",max);
    }
    return 0;
}