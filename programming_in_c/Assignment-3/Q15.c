/*Q15. Write a C program to calculate sum of digits of a number.*/

#include<stdio.h>
int main(){
    int i, num, sum = 0, rem;
    printf("Enter any Integer Number: ");
    scanf("%d", &num);
    while(num > 0){
        rem = num % 10;
        sum += rem;
        num /= 10;
        i++;
    }
    printf("Sum of Digit is: %d\n",sum);
    return 0;
}