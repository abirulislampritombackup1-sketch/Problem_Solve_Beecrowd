#include<stdio.h>
int main () {
    char first,second,third;
    scanf("%c %c %c",&first,&second,&third);
    printf("A = %c, B = %c, C = %c\n",first,second,third);
    printf("A = %c, B = %c, C = %c\n",second,third,first);
    printf("A = %c, B = %c, C = %c\n",third,first,second);
    return 0;
}