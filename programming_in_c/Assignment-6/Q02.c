/*Q02. Write a C program to copy one string to another string.*/

#include <stdio.h>

int main(){
    char arr1[50], arr2[50];
    int i;
    printf("Enter a String: ");
    scanf("%[^\n]s", arr1);
    for (i = 0; arr1[i] != '\0'; i++)
        arr2[i] = arr1[i];
    printf("Copied String is: %s\n", arr2);
    return 0;
}