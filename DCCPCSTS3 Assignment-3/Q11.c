/*Q11. Write a C program to find sum of all even numbers between 1 to n.*/

#include<stdio.h>
int main(){
    int num, sum = 0, i;
    printf("Enter the Range: ");
    scanf("%d", &num);
    for(i = 1;i <= num;i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("Sum of all even no. between 1 to %d is %d\n",num,sum);
    return 0;
}