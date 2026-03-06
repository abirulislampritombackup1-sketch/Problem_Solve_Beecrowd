#include<stdio.h>
int main () {
    int std,sth,stm,sts,endd,endh,endm,ends;
    scanf("Dia %d\n",&std);
    scanf("%d : %d : %d\n",&sth,&stm,&sts);
    scanf("Dia %d\n",&endd);
    scanf("%d : %d : %d\n",&endh,&endm,&ends);
    long long tss = sts + ( sth * 3600 ) + ( stm * 60 ) + (std*24*3600);
    long long tes = ends + ( endh * 3600 ) + ( endm * 60 ) + ( endd * 24 * 3600 ) ;
    long long ts = tes - tss;
    long long td = ts / (24*3600 ) ;
    long long rem1 = ts % (24*3600 ) ;
    long long th = rem1 / 3600;
    long long rem2 = rem1 % 3600;
    long long tm = rem2 / 60;
    ts = rem2 % 60;
    printf("%lld dia(s)\n",td);
    printf("%lld hora(s)\n",th);
    printf("%lld minuto(s)\n",tm);
    printf("%lld segundo(s)\n",ts);
    return 0;
}