/*07. Write a C program to check whether a character is alphabet or not.*/
#include<stdio.h>
main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        printf("Yes:) This is an alphabet\n");
    else
        printf("No:( This is not an alphabet\n");
    
}