/*7. Write a C program to search an element in array using pointers.*/

#include <stdio.h>
int main(){
    int arr[100], n, *ptr;
    int key, i, flag = 0;
    printf("Enter No. of Elements: ");
    scanf("%d", &n);
    
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the Elements to be searched: ");
    scanf("%d", &key);
    ptr = arr;
    for (i = 0; i < n; i++){
        if ( *ptr == key){
            flag = 1;
            break;
        }
        ptr++;
    }
    if (flag == 1)
        printf("%d is FOUND at Position %d\n", key, i+1);
    else    
        printf("%d NOT FOUND\n", key);
    return 0;
}