#include<stdio.h>
int main () {
    int a,b,c,majorab,majorall;
    scanf("%d %d %d",&a,&b,&c);
    majorab = (a+b+abs(a-b)) / 2;
    majorall = ( majorab + c + abs(majorab-c)) / 2;
    printf("%d eh o maior\n",majorall);
    return 0;
}