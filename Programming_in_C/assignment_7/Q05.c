/*Q05. Write a C program to swap two arrays using pointers.*/

#include <stdio.h>
int main(){
    int arr1[100], arr2[100], i, n;
    int *ptr1, *ptr2;
    //take the size of array
    printf("Enter the Size of Array: ");
    scanf("%d", &n);
    //take the elements of arrays
    printf("Enter the Elements of First Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the Elements of Second Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    //print elements before swap
    printf("\nBefore Swapping...");
    printf("\n1st Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n2nd Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    // assign the base address of arrays to pointers
    ptr1 = arr1;
    ptr2 = arr2;
    int *temp;
    //perform swap logic like swap two variables w/o using 3rd variables
    for (i = 0; i < n; i++){
        *ptr1 = *ptr1 + *ptr2;
        *ptr2 = *ptr1 - *ptr2; 
        *ptr1 = *ptr1 - *ptr2;
        ptr1++;
        ptr2++;
    }
    //print elements after swap
    printf("\nAfter Swapping...");
    printf("\n1st Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n2nd Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    return 0; 
}

