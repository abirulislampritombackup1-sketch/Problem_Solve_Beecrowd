#include<stdio.h>
int main () {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int first, second, third;
    if ( a < b && a < c) {
        first = a;
        if ( b < c ) {
            second = b;
            third = c;
        } else if ( c < b) {
            second = c;
            third = b;
        }
    } else if ( b < a && b < c ) {
        first = b;
        if ( a < c ) {
            second = a;
            third = c;
        } else if ( c < a ) {
            second = c;
            third = a;
        }
    } else if ( c < a && c < b ) {
        first = c;
        if ( a < b ) {
            second = a;
            third = b;
        } else if ( b < a ) {
            second = b;
            third = a;
        }
    } 
    printf("%d\n",first);
    printf("%d\n",second);
    printf("%d\n",third);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);   
    return 0;
}