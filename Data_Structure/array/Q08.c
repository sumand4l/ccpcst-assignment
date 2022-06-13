/*Q08. Write a C Program to Put Even & Odd Elements of an Array in 2 Separate Arrays*/

#include <stdio.h>
int main(){
    int arr[50], even_arr[50], odd_arr[50];
    int i, j = 0, k = 0, num;
    printf("Enter the Number of Elements: ");
    scanf("%d", &num);
    printf("Enter the Elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    //check and assign the elements into corresponding array
    for (i = 0; i < num; i++){
        if (arr[i] % 2 == 0){
            even_arr[j] =  arr[i];
            j++;
        }
        else{
            odd_arr[k] = arr[i];
            k++;
        }
    }
    printf("Even Elements are: ");
    j = 0;
    while (even_arr[j] > 0){
        printf("%d ", even_arr[j]);
        j++;
    }
    printf("\n");
    k = 0;
    printf("Odd Elements are: ");
    while (odd_arr[k] > 0){
        printf("%d ", odd_arr[k]);
        k++;
    }
    printf("\n");
    return 0;
}