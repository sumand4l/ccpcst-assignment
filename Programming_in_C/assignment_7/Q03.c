/*Q03. Write a C program to input and print array elements using pointer.*/

#include <stdio.h>
int main(){
    int arr[100], num, i, *p;
    p = arr;
    printf("Enter the Number of elements: ");
    scanf("%d", &num);
    printf("Enter the elements: ");
    //put the values through pointer address
    for (i = 0; i < num; i++){
        scanf("%d", p);
        p++;
    }
    p = arr;
    //print the values 
    printf("The array is: \n");
    for (i = 0; i < num; i++){
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;

}