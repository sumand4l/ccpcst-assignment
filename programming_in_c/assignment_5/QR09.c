/*5.QR9. Write a C program to find factorial of any number using recursion.*/

#include <stdio.h>

int facto (int);

int main(){
    int n;
    printf("Enter the Number to Calculate Factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, facto(n));
    return 0;
}

int facto (int num){
    if (num == 1)
        return 1;
    else 
        return num * facto(num-1);
}