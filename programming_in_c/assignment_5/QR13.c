/*5.Q13. Write a C program to display all array elements using recursion.*/

#include <stdio.h>

void disArr(int array[], int size, int j){
    if(j < size){
        printf("%d ", array[j]);
        disArr(array, size, j+1);
    }
    else
        return;
}

int main(){
    int arr[50],i,n;
    printf("Enter the no of elements to be inserted: ");
    scanf("%d", &n);
    printf("Enter the Elements in the Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter elements are: ");
    disArr(arr, n, 0);
    printf("\n");
    return 0;
}





 