/*08.Write a C program to enter temperature in celsius and convert it into Fahrenheit.*/
#include<stdio.h>
main(){
    float cel,farh;
    printf("Enter temperature in celsius: ");
    scanf("%f",&cel);
    farh =(9*cel+160)/5;
    printf("Temperature in fahrenheit: %.2f°F\n",farh);
}