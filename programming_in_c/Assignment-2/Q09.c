/*09.Write a C program to input any character and check whether it is alphabet, digit or special character.*/

#include<stdio.h>
void main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        printf("It's an Alphabet\n");
    else if(ch>=48 && ch<=57)
        printf("It's a digit\n");
    else 
        printf("It's a Special Character\n");
}