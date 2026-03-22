#include<stdio.h>
int main () {
    int arr[100];
    for ( int i = 0; i < 100; i++ ) {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int position = 0;
    for ( int i = 1; i < 100; i++ ) {
        if ( arr[i] > max ) {
            max = arr[i];
            position = i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",position);
    return 0;
}