/*Q17. Write a C program to check whether a number is palindrome or not.*/

#include <stdio.h>
int main(){
    int num, rem, rev = 0, i, f;
    printf("Enter any Integer Number: ");
    scanf("%d", &num);
    f = num;
    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
        i++;
    }
    if (f == rev)
        printf("It's a Palindrome Number.\n");
    else
        printf("It's Not a Palindrome Number.\n");
    return 0;
} 