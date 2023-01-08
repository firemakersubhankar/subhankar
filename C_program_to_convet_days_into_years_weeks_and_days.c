#include<stdio.h>
int main(){
float days,year,week;
printf("enter the days:");
scanf("%f",&days);

week=days/7;
year=days/365;
printf("week=%f\n year=%f,",week,year);

return 0;
}