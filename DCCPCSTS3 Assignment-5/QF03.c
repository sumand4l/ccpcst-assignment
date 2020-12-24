/*5.QF03. Write a C program to find maximum and minimum between two numbers using functions.*/

#include <stdio.h>

void findMax();

int main(){
    findMax();
    return 0;
}

void findMax(){
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("%d is Maximum\n%d is Minimum\n", num1,num2);
    else
        printf("%d is Maximum\n%d is Minimum\n", num2, num1);

}