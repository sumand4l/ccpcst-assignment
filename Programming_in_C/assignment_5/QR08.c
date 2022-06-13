/*5.QR08. Write a C program to find sum of digits of a given number using recursion.*/

#include <stdio.h>

int sumDigi (int);

int main (){
    int n;
    printf("Enter any Integer Number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d\n", n, sumDigi(n));
    return 0;
}

int sumDigi (int num){
    if (num == 0)
        return 0;
    else 
        return (num % 10)+sumDigi(num/10);
}
