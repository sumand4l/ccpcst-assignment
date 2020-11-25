/*Q14. Write a C program to find first and last digit of a number.*/

#include<stdio.h>
int main(){
    int i = 1, num, firstDigit, lastDigit;
    printf("Enter any Number: ");
    scanf("%d", &num);
    firstDigit = num;
    while(firstDigit >= 10){
        lastDigit = num % 10;
        firstDigit /= 10;
        i++; 
    }
    printf("First Digit: %d\nLast Digit: %d\n",firstDigit,lastDigit);
    return 0;
}