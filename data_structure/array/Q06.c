/*Q06. Write a C Program to divide one array into two arrays*/

#include <stdio.h>
int main(){
    int arr1[50], arr2[50], i, num;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr1[i]);
    //if no of elements even no
    if (num%2 == 0){
        printf("1st Array after Division: ");
        for (i = 0; i < num/2; i++)
            printf("%d ", arr1[i]);
        printf("\n");
        printf("2nd Array after Division: ");
        for (i = num/2; i < num; i++)
            printf("%d ", arr1[i]);
        printf("\n");
    }
    //else no of elements odd no
    else{
        printf("1st Array after Division: ");
        for (i = 0; i <= num/2; i++)
            printf("%d ", arr1[i]);
        printf("\n");
        printf("2nd Array after Division: ");
        for (i = num/2+1; i < num; i++)
            printf("%d ", arr1[i]);
        printf("\n");
    }
    return 0;
}