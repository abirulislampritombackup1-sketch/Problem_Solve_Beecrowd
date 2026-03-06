#include<stdio.h>
int main () {
    float value;
    scanf("%f",&value);
    int note100,note50,note20,note10,note5,note2,coin1,coin0_5,coin0_25,coin0_10,coin0_05,coin0_01;
    int ivalue = (int) (value *100 + 0.5);
    int reminder;

    note100 = ivalue/10000;
    reminder = ivalue %10000;
    note50 = reminder / 5000;
    reminder = reminder %5000;
    note20 = reminder / 2000;
    reminder = reminder % 2000;
    note10 = reminder / 1000;
    reminder = reminder % 1000;
    note5 = reminder / 500;
    reminder = reminder % 500;
    note2 = reminder / 200;
    reminder = reminder % 200;
    coin1 = reminder / 100;
    reminder = reminder % 100;
    
    coin0_5 = reminder / 50;
    reminder = reminder % 50;
    coin0_25 = reminder / 25;
    reminder = reminder % 25;
    coin0_10 = reminder / 10;
    reminder = reminder % 10;
    coin0_05 = reminder / 5;
    reminder = reminder % 5;
    coin0_01 = reminder / 1;
    reminder = reminder % 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",note100);
    printf("%d nota(s) de R$ 50.00\n",note50);
    printf("%d nota(s) de R$ 20.00\n",note20);
    printf("%d nota(s) de R$ 10.00\n",note10);
    printf("%d nota(s) de R$ 5.00\n",note5);
    printf("%d nota(s) de R$ 2.00\n",note2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",coin1);
    printf("%d moeda(s) de R$ 0.50\n",coin0_5);
    printf("%d moeda(s) de R$ 0.25\n",coin0_25);
    printf("%d moeda(s) de R$ 0.10\n",coin0_10);
    printf("%d moeda(s) de R$ 0.05\n",coin0_05);
    printf("%d moeda(s) de R$ 0.01\n",coin0_01);

    return 0;
}