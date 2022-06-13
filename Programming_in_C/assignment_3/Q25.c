/*Q25. Write a C program to check whether a number is Prime number or not.*/

#include <stdio.h>
int main(){
    int num, i;
    printf("Enter any Positive Number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++){
        if(num % i == 0)
            break;
    }
    if(num == 1)
        printf("1 is neither Prime nor Composite.\n");
    else{
        if(num == i)
            printf("%d is a Prime Number.\n", num);
        else
            printf("%d is Not a Prime Number.\n", num);
    }
    return 0;
}

 