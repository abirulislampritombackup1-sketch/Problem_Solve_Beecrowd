#include<stdio.h>
int main () {
    while (1) {
       
        int n;
        scanf("%d",&n);
        if ( n < 2 || n > 99 ) {
            break;
        }
        float arr[n];
        float attemt;
        for ( int i = 0; i < n; i++ ) {
            scanf("%f",&arr[i]);
            if ( arr[i] < 9 || arr[i] > 11 ) {
                break;
            }
            if ( i == 0 ) {
                attemt = arr[i];
            }
            if ( arr[i] < attemt ) {
                attemt = arr[i];
            }
        }
        printf("%.2f\n",attemt);
        
    }
    return 0;
}