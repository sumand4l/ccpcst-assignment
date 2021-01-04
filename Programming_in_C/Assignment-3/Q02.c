/*Q02. Write a C program to check whether a number is even or odd using bitwise operator.*/


#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    //Odd numbers LSB will be always 1
    //checking numbers LSB whether 1 or not, using AND 
    (num & 1) 
        ? printf("%d is odd.\n", num) 
        : printf("%d is even.\n", num);

    return 0;
}