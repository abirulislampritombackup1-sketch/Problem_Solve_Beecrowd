#include<stdio.h>
int main () {
    long long A,B,sum=0;
    scanf("%lld %lld",&A,&B);
    for ( int i=A; i<=B; i++ ) {
        sum = sum + i;
    }
    printf("%lld\n",sum);
    return 0;
}