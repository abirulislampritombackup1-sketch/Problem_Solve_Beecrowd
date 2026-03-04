#include<stdio.h>
int main () {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if ( A == 0 ) {
        printf("Impossivel calcular\n");
        return 0;
    } 
    double x1,x2,m,k;
    m = ( (B*B) - 4*A*C);
    if ( m < 0 ) {
        printf("Impossivel calcular\n");
        return 0;
    }
    k = sqrt(m);
    x1 = (-B+k) / (2*A);
    x2 = (-B-k) / (2*A);
    printf("R1 = %.5lf\n",x1);
    printf("R2 = %.5lf\n",x2);
    return 0;
}