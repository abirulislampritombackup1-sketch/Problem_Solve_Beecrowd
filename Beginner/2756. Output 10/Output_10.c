#include<stdio.h>
int main () {
    char ch1='A', ch2='B', ch3='C', ch4='D', ch5='E';
    printf("%8c\n",ch1);
    printf("%7c%2c\n",ch2,ch2);
    printf("%6c%4c\n",ch3,ch3);
    printf("%5c%6c\n",ch4,ch4);
    printf("%4c%8c\n",ch5,ch5);
    printf("%5c%6c\n",ch4,ch4);
    printf("%6c%4c\n",ch3,ch3);
    printf("%7c%2c\n",ch2,ch2);
    printf("%8c\n",ch1);
    return 0;
}