/*Q04. Write a C program to compare two strings.*/

#include <stdio.h>

int compare (char a1[], char a2[]){
    int i = 0, flag = 0;
    while (a1[i] != '\0' && a2[i] != '\0'){
        /*Even if they differ by a single character, 
            don't iterate further */
        if (a1[i] != a2[i]){
            flag = 1;
            break;
        }
        i++;
    }
    /*If all the characters are sequentially same as well as 
        both strings have ended */
    if (flag == 0 && a1[i] == '\0' && a2[i] == '\0')  
        return 1;
    else
        return 0;
}

int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (compare (str1, str2) == 1)
        printf("Strings are Same\n");
    else    
        printf("Strings are Different\n");
    
    return 0;
}