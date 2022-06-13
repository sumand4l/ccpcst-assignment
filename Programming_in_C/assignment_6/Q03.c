/*Q03. Write a C program to concatenate two strings.*/

#include <stdio.h>

//finds length of a string without NULL character
int strLen (char str1[]){
    int i = 0;
    while (str1[i] != '\0'){
        i++;
    }
    return i - 1;
}

//concatenate two string into first strings
void concat (char str1[], char str2[]){
    int len1 = strLen (str1);
    int i;
    for (i = 0; str2[i] != '\0'; i++){
        str1[len1] = str2[i];
        len1++;
    }
    printf("Concatenated String is: %s", str1);
}

int main(){
    char arr1[100], arr2[100];
    printf("Enter the 1st String: ");
    fgets(arr1, sizeof(arr1), stdin);
    printf("Enter the 2nd String: ");
    fgets(arr2, sizeof(arr2), stdin);
    concat(arr1, arr2);
    return 0;
}



 