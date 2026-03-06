#include<stdio.h>
int main () {
    int startDay,startHour,startMinute,startSecond,endDay,endHour,endMinute,endSecond;
    scanf("Dia %d\n",&startDay);
    scanf("%d : %d : %d \n",&startHour,&startMinute,&startSecond);
    scanf("Dia %d\n",&endDay);
    scanf("%d : %d : %d \n",&endHour,&endMinute,&endSecond);

    long long   total_starting_second = startSecond + (startMinute*60) + (startHour*60*60) + (startDay*24*60*60);
    long long   total_ending_second = endSecond + (endMinute*60) + (endHour*60*60) + (endDay*24*60*60);
    long long   total_second = total_ending_second - total_starting_second;
    long long   total_day = total_second / (24*60*60);
    long long   rem1 = ( total_second % (24*60*60));
    long long   total_hour = rem1 / (60*60);
    long long   rem2 = rem1 % (60*60);
    long long   total_minute = rem2 / 60;
    total_second = rem2 % 60;
    printf("%lld dia(s)\n",total_day);
    printf("%lld hora(s)\n",total_hour);
    printf("%lld minuto(s)\n",total_minute);
    printf("%lld segundo(s)\n",total_second);
    return 0;
}