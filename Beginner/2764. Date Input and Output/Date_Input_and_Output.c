#include<stdio.h>
int main () {
    int dd,mm,yy,op1,op2;
    scanf("%d%c%d%c%d",&dd,&op1,&mm,&op2,&yy);
    printf("%02d%c%02d%c%02d\n",mm,op1,dd,op2,yy);
    printf("%02d%c%02d%c%02d\n",yy,op1,mm,op2,dd);
    printf("%02d-%02d-%02d\n",dd,mm,yy);
    return 0;
}