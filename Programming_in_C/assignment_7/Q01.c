/*Q01. Write a C program to add two numbers using pointers.*/

#include <stdio.h>
int main(){
    int num1, num2, *p1,*p2;
    printf("Enter 1st Integer Number: ");
    scanf("%d", &num1);
    p1 = &num1;
    printf("Enter 2nd Integer Number: ");
    scanf("%d", &num2);
    p2 = &num2;
    //sum the values using value at address
    printf("Sum of Two Numbers: %d\n", *p1 + *p2);
    return 0;
}