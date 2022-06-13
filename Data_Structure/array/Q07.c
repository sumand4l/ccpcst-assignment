/*Q07. Write a C to concatenate two arrays*/

#include <stdio.h>
int main(){
    int arr1[50], arr2[50];
    int i, num1, num2;
    printf("Enter the Number of Elements in 1st Array: ");
    scanf("%d", &num1);
    printf("Enter the elements in 1st Array: ");
    for (i = 0; i < num1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the Number of Elements in 2nd Array: ");
    scanf("%d", &num2);
    printf("Enter the elements in 2nd Array: ");
    for (i = 0; i < num2; i++)
        scanf("%d", &arr2[i]);
    int j = 0;
    for (i = num1; i < num1+num2; i++){
        arr1[i] = arr2[j];
        ++j;
    }
    printf("After merging two Arrays: ");
    for (i = 0; i < num1+num2; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    return 0;
}