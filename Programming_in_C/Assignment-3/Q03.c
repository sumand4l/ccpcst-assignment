/*Q03. Write a C program to check whether a number is even or odd using switch case.*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0: 
            printf("%d is Even.\n", num);
            break;
        case 1: 
            printf("%d is Odd\n", num);
            break;
    }
    return 0;
}
