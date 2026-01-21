#include<stdio.h>
int main (){
    int days,years,months,rem1;
    scanf("%d",&days);
    years = days / 365;
    rem1 = days % 365;
    months = rem1 / 30;
    days = rem1 % 30;
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    return 0;
}
