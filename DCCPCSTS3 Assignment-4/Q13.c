/*4.Q13.Write a C program to search an element in an array.*/

#include <stdio.h>
int main(){
    int arr[50], size, key, i;
    printf("Enter the Number of Elements: ");
    scanf("%d", &size);
    /*Read elements*/
    printf("Enter the Elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    /*input searching element*/
    printf("Enter the Element you want to search: ");
    scanf("%d", &key);
    /*Linear Search code*/
    for (i = 0; i < size; i++){
        if (arr[i] == key)
            break;
    }
    /*if iterator does not find key then at the end of loop it equals array size*/
    if (i == size)
        printf("%d Not Found:(\n", key);
    else
        printf("%d Found:) at Position %d\n", key,i+1);
    return 0;
}