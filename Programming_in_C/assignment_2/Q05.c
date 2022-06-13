/*05.Write a C program to check whether a number is even or odd.*/
#include<stdio.h>
main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is an even number\n",num);
    else
        printf("%d is an odd number\n",num);
}

