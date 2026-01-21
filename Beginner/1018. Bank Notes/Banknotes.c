#include<stdio.h>
int main () {
    int amount,required100,rem100,required50,rem50,required20,rem20,required10,rem10,required5,rem5,required2,rem2,required1,rem1;
    
    scanf("%d",&amount);
    required100 = amount / 100;
    rem100 = amount % 100;
    required50 = rem100 / 50;
    rem50 = rem100 % 50;
    required20 = rem50 / 20;
    rem20 = rem50 % 20;
    required10 = rem20 / 10;
    rem10 = rem20 % 10;
    required5 = rem10 / 5;
    rem5 = rem10 % 5;
    required2 = rem5 / 2;
    rem2 = rem5 % 2;
    required1 = rem2 / 1;
    printf("%d\n",amount);
    printf("%d nota(s) de R$ 100,00\n",required100);
    printf("%d nota(s) de R$ 50,00\n",required50);
    printf("%d nota(s) de R$ 20,00\n",required20);
    printf("%d nota(s) de R$ 10,00\n",required10);
    printf("%d nota(s) de R$ 5,00\n",required5);
    printf("%d nota(s) de R$ 2,00\n",required2);
    printf("%d nota(s) de R$ 1,00\n",required1);
    return 0;
}