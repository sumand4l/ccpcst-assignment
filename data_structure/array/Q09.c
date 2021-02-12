/*Q09. Write a C Program to Read an Array and Search for an Element*/

#include <stdio.h>

int main(){
    int arr[50];
    int i, key, num, flag = 0;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Number you want to search: ");
    scanf("%d", &key);
    for (i = 0; i < num; i++){
        if (arr[i] == key){
            flag = 1;
            break;
        }  
    }
    if (flag == 1)
        printf("%d is Found at Position %d :)\n", key, i+1);
    else 
        printf("%d is NOT Found :(\n", key);
    return 0;
}

