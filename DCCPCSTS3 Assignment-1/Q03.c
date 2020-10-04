/*03.Write a C program to enter two numbers and perform all arithmetic operations*/
#include<stdio.h>
main(){
    int x,y;
    int sum,sub,mul,div;
    printf("Enter 1st number:: ");
    scanf("%d",&x);
    printf("Enter 2nd number:: ");
    scanf("%d",&y);
    sum = x+y;
    sub = x-y;
    mul = x*y;
    div = x/y;
    printf("\n*Arithmetic Operations of %d and %d are:",x,y);
    printf("\nAddition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\n",sum,sub,mul,div);
}  