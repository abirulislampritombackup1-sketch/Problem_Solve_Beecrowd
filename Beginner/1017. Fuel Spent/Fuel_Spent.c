#include<stdio.h>
int main () {
    int time,avg_speed,total_distance,fuel_perkm = 12;
    scanf("%d %d",&time,&avg_speed);
    total_distance = time * avg_speed;
    float required_fuel = total_distance / (float)fuel_perkm;
    printf("%.3f\n",required_fuel);  
    return 0;
}