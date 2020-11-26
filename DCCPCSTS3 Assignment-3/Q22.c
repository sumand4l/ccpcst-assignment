/*22. Write a C program to find all factors of a number.*/

#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Enter any Number: ");
    scanf("%d", &num);
    printf("Factors are: ");
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}