#include<stdio.h>
int main () {
    float salary,money_earned,percentage;
    scanf("%f",&salary);
    if ( salary >= 0 && salary <= 400.00 ) {
        money_earned = salary * (15/100.00);
        salary = salary + money_earned;
        percentage = 15;
    } else if ( salary >= 400.01 && salary <= 800.00 ) {
        money_earned = salary * (12/100.00);
        salary = salary + money_earned;
        percentage = 12;
    } else if ( salary >= 800.01 && salary <= 1200.00 ) {
        money_earned = salary * (10/100.00);
        salary = salary + money_earned;
        percentage = 10;
    } else if ( salary >= 1200.01 && salary <= 2000.00 ) {
        money_earned = salary * (7/100.00);
        salary = salary + money_earned;
        percentage = 7;
    } else if ( salary > 2000.00 )  {
        money_earned = salary * (4/100.00);
        salary = salary + money_earned;
        percentage = 4;
    } 

    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",money_earned);
    printf("Em percentual: %.0f %%\n",percentage);
    return 0;
}