/*10.Write a C program to convert days into years, weeks and days.*/
#include<stdio.h>
main(){
    int day;
    int year,week;
    int tem;
    printf("Enter days you want to calculate: ");
    scanf("%d",&day);
    tem=day;
    year=day/365;
    day=day%365;
    week=day/7;
    day=day%7;
    printf("**%d days means--\n",tem);
    printf("Year(s): %d\nWeek(s): %d\nDay(s): %d\n",year,week,day); 
}