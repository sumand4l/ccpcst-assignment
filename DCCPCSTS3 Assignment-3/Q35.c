/*Q35. Write a C program to print Fibonacci series up to n terms.*/

#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1;
    int temp, lim, i;
    printf("Enter the No of Terms in Fibonacci Series: ");
    scanf("%d", &lim);
    printf("Fibonacci Series:\n");
    printf("%d %d ", num1, num2);
    for (i = 0; i <= lim; i++)
    {
        //swap the numbers and move forward
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        printf("%d ", temp);
    }
    printf("\n");
    return 0;
}