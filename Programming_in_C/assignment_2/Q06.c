/*06.Write a C program to check whether a year is leap year or not.*/
#include<stdio.h>
main(){
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    //if divisible by 100 and 400
    if(year%100==0){
        if(year%400==0){
            printf("%d is a century and leap year.\n",year);
        }
        else
            printf("%d is not a leap year.\n",year);
    }
    //only divisible by 4 or not
    else if(year%4==0){
        printf("%d is a leap year.\n",year);
    }
    else
        printf("%d is not a leap year.\n",year);
    
}