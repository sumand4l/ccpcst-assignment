/*Q12. Write a C program to print multiplication table of any number.*/

#include<stdio.h>
int main(){
    int i, num;
    printf("Enter the table number you want to print: ");
    scanf("%d", &num);
    for(i = 1;i <= 10; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}