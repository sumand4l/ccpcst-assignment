/*02.Write a C program to enter two numbers and find their sum.*/
#include<stdio.h>
main(){
    int x,y,sum;
    printf("Enter 1st number:: ");
    scanf("%d",&x);
    printf("Enter 2nd number:: ");
    scanf("%d",&y);
    sum=x+y;
    printf("Sum of %d and %d is %d\n",x,y,sum);
}
