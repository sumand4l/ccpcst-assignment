/*5.QR04. Write a C program to find sum of all natural numbers between 1 to n using recursion.*/

#include <stdio.h>

int sumNat (int);

int main (){
    int lim;
    printf("Enter upperlimit of Natural Numbers: ");
    scanf("%d", &lim);
    printf("Sum of all Natural numbers between 1 to %d is: %d", lim, sumNat(lim));
    printf("\n");
    return 0;
}

int sumNat (int num){
    if (num == 1) 
        return num;
    else
        return (num + sumNat(num-1));
}

