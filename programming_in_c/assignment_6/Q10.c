/*Q10. Write a C program to find first occurrence of a character in a given string.*/

#include <stdio.h>
int main(){
    char str[100], key;
    int i;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the Character to find first Occurrence: ");
    scanf("%c", &key);
    for(i = 0; str[i] != '\0'; i++){
        if (key == str[i])
            break;
    }
    printf("%c first found at postion %d\n", key, i+1);
    return 0;
}