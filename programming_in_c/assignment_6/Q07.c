/*Q07. Write a C program to count total number of words in a string.*/

#include <stdio.h>
//finds length of a string without NULL character
int strLen (char len[]){
    int i = 0;
    while (len[i] != '\0'){
        i++;
    }
    return i - 1;
} 

void wordCount (char arr[]){
    int strlen = strLen (arr);
    int c = 0;
    for (int i = 0; i <= strlen; i++){
        if (arr[i] == ' ' || arr[i] == '\t')
            c++;
    }
    printf("Total Number of Words: %d\n", c+1);
}

int main(){
    char str[100];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    wordCount(str);
    return 0;
}