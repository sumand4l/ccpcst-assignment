/*Q24. Write a C program to find HCF (GCD) of two numbers.*/

#include <stdio.h>
int main(){
    int num1, num2, i, m;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    //storing the smallest between two no.s to m
    m = (num1 > num2) ? num2 : num1;
    for (i = m; i >= 1; i--){
        if (num1 % i == 0 && num2 % i == 0)
            break;
    }
    printf("GCD: %d\n", i);
    return 0;
}