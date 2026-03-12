#include<stdio.h>
int main () {
    int x,y;
    scanf("%d %d",&x,&y);
    int value = 1; 
    for ( int i = 1; i <= (y/x); i++ ) {
        for ( int j = 1; j <= x; j++ ) {
            if ( j == x ) {
                printf("%d\n",value);
            } else {
                printf("%d ",value);
            }
            
            value++;
        }
        
    }
    return 0;
}