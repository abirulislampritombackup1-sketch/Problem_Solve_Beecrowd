#include<stdio.h>
int main () {
    int second,rem1,min,hour;
    scanf("%d",&second);
    hour = second / 3600;
    rem1 = second % 3600;
    min = rem1 / 60;
    second = rem1 % 60;
    printf("%d:%d:%d",hour,min,second);
    return 0;
}