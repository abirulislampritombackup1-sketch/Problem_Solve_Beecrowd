#include<stdio.h>
int main () {
    int speed_x=60,speed_y=90,com_speed_y,distance;
    float com_speed_y_pm,time_perkm;
    com_speed_y= speed_y- speed_x;
    com_speed_y_pm = com_speed_y/ 60.0;
    time_perkm = 1.0/com_speed_y_pm;
    scanf("%d",&distance);
    float ans = distance*time_perkm;
    int result = (int)ans;
    printf("%d minutos\n",result);
    return 0;
}