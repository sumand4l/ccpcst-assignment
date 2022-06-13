/*5.QR14. Write a C program to find sum of elements of array using recursion.*/

#include <stdio.h>

int sumArr (int array[], int size, int j){
    if (j >= size)
        return 0;
    else    
        return (array[j]+sumArr(array,size,j+1));
}

int main(){
    int arr[50],i,n;
    printf("Enter Number of Elements to be Inserted: ");
    scanf("%d", &n);
    printf("Enter the Elements in the Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sum of Elements of Array is: %d\n", sumArr(arr,n,0));
    return 0;
}