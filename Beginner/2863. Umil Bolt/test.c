#include<stdio.h>
int main () {
    
        
        int n;
        scanf("%d",&n);
        float arr[n];
        float attemt;
        for ( int i = 0; i < n; i++ ) {
            scanf("%f",&arr[i]);
            if ( i == 0 ) {
                attemt = arr[i];
            }
            if ( arr[i] < attemt ) {
                attemt = arr[i];
            }
        }
        printf("%.2f\n",attemt);
       

        
        int n1;
        scanf("%d",&n1);
        float arr1[n1];
        float attemt1;
        for ( int i = 0; i < n1; i++ ) {
            scanf("%f",&arr1[i]);
            if ( i == 0 ) {
                attemt1 = arr1[i];
            }
            if ( arr1[i] < attemt1 ) {
                attemt1 = arr1[i];
            }
        }
        printf("%.2f\n",attemt1);
    return 0;
}