/*Q10. Write a C program to find sum of all natural numbers between 1 to n.*/

#include<stdio.h>
int main(){
    int num, i, sum = 0;
    printf("Enter the Range: ");
    scanf("%d", &num);
    for(i = 1;i <= num;i++){
        sum += i;
    }
    printf("Sum of natural no. between 1 to %d is %d\n",num,sum);
    return 0;

}