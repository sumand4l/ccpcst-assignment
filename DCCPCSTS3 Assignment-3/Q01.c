/*Q01.Write a C program to swap two numbers using bitwise operator.*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integer Numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("Before Swapping:\n");
    printf("Number 1: %d\nNumber 2: %d", num1, num2);
    
    //Using XOR operator. different value turns true.
    num1 = num1 ^ num2; 
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("\nAfter Swapping:\n");
    printf("Number 1: %d\nNumber 2: %d\n", num1, num2);
    return 0;
}