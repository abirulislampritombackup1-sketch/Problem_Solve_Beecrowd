#include<stdio.h>
int main () {
    float total;
    int note100,rem100,note50,rem50,note20,rem20,note10,rem10,note5,rem5,note2,rem2,coin1,rem1,coin0_5,rem0_5,coin0_25,rem0_25,coin0_10,rem_10,coin0_05,rem0_05,coin0_01;
    scanf("%f",&total);
    note100 = total / 100;
    rem100 = (int)total % 100;
    printf("%d",note100);
    return 0;
}