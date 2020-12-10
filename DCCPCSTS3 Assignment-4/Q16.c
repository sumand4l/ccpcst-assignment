/*Write a C program to right rotate an array by n postions.*/

#include <stdio.h>
int main(){
    int arr[50], i, j, n, temp, nPos;
    printf("Enter the Number the elements: ");
    scanf("%d", &n);
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the No. of Position to rotate: ");
    scanf("%d", &nPos);
    /*right rotation*/
    for (i = 1; i <= nPos; i++){    
    /*store the last value in a temporary variable*/
        temp = arr[n-1];
        for (j = n-2; j >= 0; j--){
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
    }
    printf("Right Roatation by %d Position: ", nPos);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}