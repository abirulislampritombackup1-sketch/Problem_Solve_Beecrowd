#include<stdio.h>
int main () {
    long long sum = 0;
    long long  st, end;
    scanf("%lld %lld",&st,&end);
    sum = ( st + end ) * ( end - st + 1 ) / 2;
    printf("%lld\n",sum);
    return 0;
}