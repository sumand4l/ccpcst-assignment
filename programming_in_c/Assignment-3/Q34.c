/*Q34. Write a C program to print all Strong numbers between 1 to n.*/

#include <stdio.h>

int main()
{
    int i, j, num, lastDigit, lim;
    long long fact, sum;

    /* Input upper limit from user */
    printf("Enter the limit number: ");
    scanf("%d", &lim);

    printf("All Strong numbers between 1 to %d are:\n", lim);
    
    /* Iterate from 1 to limit */
    for(i = 1; i <= lim; i++)
    {
        /* Number to check for strong number */
        num = i;

        sum = 0;

        /* Find the sum of factorial of digits */ 
        while(num > 0)
        {
            fact = 1ll;
            lastDigit = num % 10;

            /* Find factorial of last digit of current num. */
            for( j = 1; j <= lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 
            num /= 10;
        }
        
        /* Print 'i' if it is strong number */  
        if(sum == i)
            printf("%d, ", i);
        
    }
    printf("\n");
    return 0;
}