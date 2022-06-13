/*5.QR10. Write a C program to generate nth Fibonacci term using recursion.*/

#include <stdio.h>

int fibo(int);

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%dth term of fibonacci seried is: %d\n", n, fibo(n));
    return 0;
}

int fibo (int num){
    if(num == 0)       
        return 0;
    else if(num == 1)  
        return 1;
    else 
        return fibo(num-1) + fibo(num-2);
}