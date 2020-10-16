/*10.Write a C program to check whether a character is uppercase or lowercase alphabet.*/

#include<stdio.h>
void main(){
    char ch;
    printf("Enter any Alphabet: ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90 || ch>=97 && ch<=122){
        if(ch>=65 && ch<=90)
            printf("The Alphabet is in Upper Case\n");
        else if(ch>=97 && ch<=122)
            printf("The Alphabet is in Lower Case\n");  
    }
    else
        printf("Not an Alphabet\n");
}