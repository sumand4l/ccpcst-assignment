/*Q23. Write a C program to calculate factorial of a number.*/

#include <stdio.h>
int main(){
    int num, fact = 1;
    int i;
    printf("Enter any Number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        fact *= i;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}