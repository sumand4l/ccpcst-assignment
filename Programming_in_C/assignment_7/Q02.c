/*Q02. Write a C program to swap two numbers using pointers.*/

#include <stdio.h>
int main(){
    int num1, num2, *p1, *p2, *temp;
    printf("Enter 1st Integer Number: ");
    scanf("%d", &num1);
    p1 = &num1;
    printf("Enter 2nd Integer Number: ");
    scanf("%d", &num2);
    p2 = &num2;
    printf("::Before Swap::\n");
    printf("1st Number: %d\n2nd Number: %d\n", *p1, *p2);
    //swap address using temp pointer
    temp = p1;
    p1 = p2;
    p2 = temp;
    //print the  values
    printf("::After Swap::\n");
    printf("1st Number: %d\n2nd Number: %d\n", *p1, *p2);
    return 0;
}