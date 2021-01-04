/*Q31. Write a C program to check whether a number is Perfect number or not.*/

#include <stdio.h>
int main(){
    int num, sum = 0, i;
    printf("Enter an Integer Number: ");
    scanf("%d", &num);
    for (i = 1; i <= num/2; i++){
        //a number does not have any proper positive divisor greater than num/2
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
            printf("%d is Perfect Number.\n", num);
    else
            printf("%d is not Perfect No.\n", num);
    return 0;
}
