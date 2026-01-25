#include<stdio.h>
int main () {
    int n= 39;
    for ( int i=0; i<7; i++ ) {
        if ( i==0 || i==6 ) {
            for ( int j=0; j<39; j++ ) {
                printf("-");
            } 
        } else {
            for ( int j=0; j<1; j++ ) {
                printf("|");
            } 
            for ( int j=0; j<37; j++ ) {
                printf(" ");
            } 
            for ( int j=0; j<1; j++ ) {
                printf("|");
            }
        }
        printf("\n");
        
    }
    return 0;
}