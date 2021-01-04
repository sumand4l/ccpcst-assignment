/*02.Write a C program to find maximum between three numbers.*/
#include<stdio.h>
main(){
    int num1,num2,num3;
    printf("Enter the Number 1: ");
    scanf("%d",&num1);
    printf("Enter the Number 2: ");
    scanf("%d",&num2);
    printf("Enter the Number 3: ");
    scanf("%d",&num3);
    if(num1>num2){  //checking the condition btwn 1st & 2nd
        if(num1>num3) //checking the condition btwn 1st & 3
            printf("%d is largest\n",num1); 
        else
            printf("%d is largest\n",num3);
    }
    else{    //if 2nd is > 1st
        if(num2>num3) //checking btwn 2nd & 3rd
            printf("%d is largest\n",num2);  
        else
            printf("%d is largest\n",num3);
    }
}

/*
//Using logical operator---->
    if(num1>num2 && num1>num3) /*if(num1>num2&&num1>num3 || num2>num1&&num2>num3 || num3>num1&&num3>num2)*/
        printf("%d is largest",num1);
    else if(num2>num1 && num2>num3)
        printf("%d is largest",num2);
    else  
        printf("%d is largest",num3);
*/

