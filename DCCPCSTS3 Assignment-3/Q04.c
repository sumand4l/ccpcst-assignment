/*Q04. Write a C program to check whether a number is positive, negative or zero using switch case.*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    switch(num > 0)
    {
        case 1: 
            printf("Positive.\n");
            break;
        case 0: 
            printf("Negative.\n");
            break;
        default:
        	printf("Zero.\n");
        	break;
    }
    return 0; 
}