/*Q06. Write a C program to find total number of alphabets, digits or special character in a string.*/

#include <stdio.h>

//finds length of a string without NULL character
int strLen (char len[]){
    int i = 0;
    while (len[i] != '\0'){
        i++;
    }
    return i - 1;
} 

void counter (char str[]){
    int strlen = strLen (str);
    int digi = 0, alpha = 0, charac = 0;
    for (int i = 0; i <= strlen; i++){
        if (str[i] >= 48 && str[i] <= 57)
            digi++;
        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 )
            alpha++;
        else
            charac++;
    }
    printf("Total Number of:\n");
    printf("Alphabets: %d\nDigits: %d\nSpecial Character: %d\n", alpha, digi, charac);
}

int main (){
    char str[100];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    counter (str);
    return 0;
}