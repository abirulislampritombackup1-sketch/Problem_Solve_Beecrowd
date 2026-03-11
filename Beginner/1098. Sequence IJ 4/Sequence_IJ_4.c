#include<stdio.h>
int main () {
    for ( float i = 0.00; i <= 2.00; i+=0.2 ) {
        if ( i == 0.00 || i == 1.00  || i == 2.00 ) {
            int k = (int)i;
            int value = k+1;
            for( int j = 1; j <= 3; j++ ) {
                printf("I=%d J=%d\n",k,value);
                value+=1;
            
            }
        } else {
            float value = i+1.00;
            for ( int j = 1; j <= 3; j++ ){
                printf("I=%.1f J=%.1f\n",i,value);
                value +=1.00;
            }
           
        }
    }
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");
    return 0;
 }