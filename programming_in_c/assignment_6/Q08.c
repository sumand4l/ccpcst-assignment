/*Q08. Write a C program to find reverse of a string.*/

#include <stdio.h>

int main (){
    char str[100], str_rev[100];
    int i = 0, j, k;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0'){
        i++;
    }
    k = i-1;
    for (j = 0; j <= k; j++){
        str_rev[j] = str[k];
        k--;
    }
    printf("Reverse of a String: %s\n", str_rev);
    return 0;
}

/*Another Way*/
/*#include <stdio.h>
int main (){
    char str[100], str_rev[100];
    int i, j, k=-1;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    while (str[++k] != '\0');
    j = k-1;
    for (i = 0; i < k; i++)
        str_rev[i] = str[j--];
    printf("Reverse of the String is: %s\n", str_rev);
    return 0;
}
*/