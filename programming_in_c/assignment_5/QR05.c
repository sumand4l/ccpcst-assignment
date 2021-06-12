/*5.QR05. Write a C program to find sum of all even or odd numbers in given range using recursion.*/

#include <stdio.h>

int sumEven (int);
int sumOdd (int);

int main(){
    int evenLim, oddLim;
    printf("Enter upperlimit for Even Number: ");
    scanf("%d", &evenLim);
    printf("Enter upperlimit for Odd Number: ");
    scanf("%d", &oddLim);
    printf("Sum of all Even numbers between 1 to %d: %d", evenLim, sumEven(evenLim));
    printf("\n");
    printf("Sum of all Odd numbers between 1 to %d: %d", oddLim, sumOdd(oddLim));
    printf("\n");
    return 0;
}
 
int sumEven(int num){
     if (num > 1)
        return num + sumEven(num-2);
    else 
        return 0;
}

int sumOdd(int num){
    if (num > -1)
        return num + sumOdd(num-2);
    else    
        return 0;
}