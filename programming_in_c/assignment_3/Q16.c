/*Q16. Write a C program to enter a number and print its reverse.*/

#include <stdio.h>
int main(){
    int num, rem, rev = 0, i;
    printf("Enter any Integer Number: ");
    scanf("%d", &num);
    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
        i++;
    }
    printf("Reversed Number: %d\n", rev);
    return 0;
}