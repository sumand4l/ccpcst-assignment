/*Q21. Write a C program to find power of a number using for loop.*/

#include <stdio.h>
int main(){
    int pdt = 1, pow, base;
    int i;
    printf("Enter the Base: ");
    scanf("%d", &base);
    printf("Enter the Power: ");
    scanf("%d", &pow);
    for (i = 1; i <= pow; i++){
        pdt *= base;
    }
    printf("%d to the power %d is %d\n", base, pow, pdt);
    return 0;
}