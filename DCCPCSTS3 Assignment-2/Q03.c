/*03.Write a C program to check whether a number is negative, positive or zero.*/
#include<stdio.h>
main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num<0)
        printf("***The number you entered is Negative***\n");
    else if(num==0)
        printf("***The number you entered is ZERO***\n");
    else 
        printf("***The number you entered is Positive***\n");
}
