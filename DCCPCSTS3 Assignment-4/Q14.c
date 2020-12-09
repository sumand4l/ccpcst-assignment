/*4.Q14.Write a C program to sort array elements in ascending or descending order.*/

#include <stdio.h>
int main(){
    int arr[50], size, i, j, temp;
    printf("Enter the No. of Elements: ");
    scanf("%d", &size);
    /*Read array elements from user*/
    printf("Enter the Elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    /*printf unsorted array*/
    printf("Before Sort: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    /*Bubble Sort code*/
    for (i = 0; i < size; i++){
        for (j = 0; j < size-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array in Asending Oder: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}