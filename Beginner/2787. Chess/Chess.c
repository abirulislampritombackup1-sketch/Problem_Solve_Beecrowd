#include<stdio.h>
int main () {
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    if ( c % 2 == 0 ) {
        int tempC = c-1;
        if ( (r*tempC) % 2 == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    } else if (c % 2 != 0 ) {
        if ( (r*c) % 2 == 0 ) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    
    return 0;
}