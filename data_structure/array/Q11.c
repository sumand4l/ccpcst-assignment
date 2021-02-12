/*Q11. Write a C Program to Sort the Array in Descending Order*/

#include <stdio.h>

//fuction declaration
void insetionSort (int arr[], int n){
    int i, j, k, key;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        //printf passes
        printf("Pass %d : ", i);
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
}

int main(){
    int arr[50], i, num;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    //read elements
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    //print the elements before sort.
    printf("Array before Sort: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
    //call sort function
    insetionSort (arr, num);
    //print the sorted elements
    printf("Array after Sort Descending Order: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
    
}