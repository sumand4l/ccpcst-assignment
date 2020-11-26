/*Q32. Write a C program to print all Perfect numbers between 1 to n.*/

#include <stdio.h>
int main(){
    int num, sum = 0, i, j;
    printf("Enter the Range: ");
    scanf("%d", &num);
    printf("Perfect Numbers are: ");
    for (i = 1; i <= num; i++){
        sum = 0;
        for (j = 1; j < i; j++){
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}


 