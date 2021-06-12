/*5.QR07.Write a C program to check whether a number is palindrome or not using recursion.*/

#include <stdio.h>

int calRev(int, int);

int main(){
    int n;
    printf("Enter any Integer Number: ");
    scanf("%d", &n);
    if (calRev(n,0) == n)
        printf("It is a Palindrome Number:)\n");
    else
        printf("It is not a Palindrome Number:(\n");
    return 0;
}

int calRev (int num, int rev){
    if (num != 0){
        int rem = num % 10;
        int sum = rev * 10 + rem;
        int div = num / 10;
        return calRev (div, sum);
    }
    else    
        return rev;
}