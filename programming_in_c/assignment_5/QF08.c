/*5.QF08. Write a C program to find all prime numbers between given interval using functions.*/

#include <stdio.h>

int checkPrime(int);

int main(){
    int i, start, end, flag;
    printf("Enter Starting Number: ");
    scanf("%d", &start);
    printf("Enter Ending Number: ");
    scanf("%d", &end);
    printf("All Prime Numbers between %d and %d are: ", start, end);
    for (i = start; i < end; i++){
        flag = checkPrime(i);
        if (flag == 0)
            printf("%d, ", i);
    }
    printf("\n");
    return 0;
}

int checkPrime(int num){
    int i, flag = 0;
    for (i = 2; i < num; i++){
        if (num % i == 0){
            flag = 1;
            break;
        }
    }
    return flag;   
}