/*07.Write a C program to enter length in centimeter and convert it into meter and kilometer.*/
#include<stdio.h>
main(){
    float cemi,meter,kilo;
    printf("Enter length in centimeter: ");
    scanf("%f",&cemi);
    meter = (float)cemi/100;
    kilo = (float)cemi/100000;
    printf("length in meter: %.4f meter\n",meter);
    printf("length in kilometer: %.4f kilometer\n",kilo);
}