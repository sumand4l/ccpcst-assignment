/*4.Q15.Write a C program to left rotate an array by n positions.*/

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
    /*left rotation*/
    for (i = 1; i <= nPos; i++){    
    /*store the 1st value in a temporary variable*/
        temp = arr[0];
        for (j = 1; j < n; j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }
    printf("Left Roatation by %d Position: ", nPos);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}