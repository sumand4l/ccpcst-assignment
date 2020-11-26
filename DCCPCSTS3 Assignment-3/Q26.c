/*Q26. Write a C program to print all Prime numbers between 1 to n.*/

#include <stdio.h>
int main(){
     int num, i, j;
    printf("Enter the Range: ");
    scanf("%d", &num);
    printf("All Prime Numbers Between 1 to %d: ", num);
    for (i = 2; i <= num; i++){
        for (j = 2; j < i; j++){
            if(i % j == 0)
                break;
        }
        if (i == j)
            printf("%d, ", i);
    }
    printf("\n");
    return 0;
}