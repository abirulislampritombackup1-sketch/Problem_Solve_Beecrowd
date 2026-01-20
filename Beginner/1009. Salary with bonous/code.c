#include <stdio.h>
 
int main() {
 
    char name[50];
    double salary,bonous;
    fgets(name,sizeof(name),stdin);
    scanf("%lf %lf",&salary,&bonous);
    printf("TOTAL = R$ %.2lf",salary+(bonous*.15);
 
    return 0;
}