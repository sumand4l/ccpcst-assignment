/*09.Write a C Program to enter temperature in fahrenheit and convert to celsius.*/
#include<stdio.h>
main(){
    float cel,farh;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&farh);
    cel =(5*farh-160)/9;
    printf("Temperature in celsius: %.2f°c\n",cel);
} 
