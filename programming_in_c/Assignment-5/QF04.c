/*5.QF04. Write a C program to check whether a number is even or odd using functions.*/

#include <stdio.h>

int evenOdd(int);
int main(){
    int num;
    printf("Enter a integer Number: ");
    scanf("%d", &num);
    evenOdd(num);
    return 0;
}

int evenOdd(int n){
    if (n % 2 == 0)
        return printf("%d is Even Number\n", n);
    else
        return printf("%d is Odd Number\n", n);

}