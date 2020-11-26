/*Q33. Write a C program to check whether a number is Strong number or not.*/

#include <stdio.h>

int main()
{
    int i, temp, num, lastDigit, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    temp = num;
    sum = 0;
    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get last digit of num */
        lastDigit = num % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i = 1; i <= lastDigit; i++)
        {
            fact *= i;
        }

        /* Add factorial to sum */
        sum += fact;
        num /= 10;
    }

    /* Check Strong number condition */
    if(sum == temp)
        printf("%d is STRONG NUMBER\n", temp);
    else
        printf("%d is NOT STRONG NUMBER\n", temp);
    return 0;
}