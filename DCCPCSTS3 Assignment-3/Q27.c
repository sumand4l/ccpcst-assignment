/*Q27. Write a C program to find sum of all prime numbers between 1 to n.*/

#include <stdio.h>
int main(){
     int num, i, j, sum = 0;
    printf("Enter the Range: ");
    scanf("%d", &num);
    printf("Sum of All Prime Numbers Between 1 to %d: ", num);
    for (i = 2; i <= num; i++){
        for (j = 2; j <= i; j++){
            if(i % j == 0)
                break;
        }
        if (i == j)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}