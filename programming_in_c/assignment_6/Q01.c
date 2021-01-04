/*Q01. Write a C program to find length of a string.*/

#include <stdio.h>
 
int main (){
    char arr[50];
    int i;
    printf("Enter String: ");
    scanf("%[^\n]s", arr);
    for (i = 0; arr[i]!='\0'; i++);
    printf("Length of a String is: %d\n", i);
    return 0;
}


 