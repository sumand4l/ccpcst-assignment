/*17.Write a C program to enter P,T,R and calculate simple interest.*/
#include<stdio.h>
main(){
    int prin,time;
    float rate,si;
    printf("Enter your Principal Balance: ");
    scanf("%d",&prin);
    printf("Enter time in year: ");
    scanf("%d",&time);
    printf("Enter Rate of Interest: ");
    scanf("%f",&rate);
    si=(prin*time*rate)/100.0;
    printf("Simple Interest is: %.2f\n",si);
}