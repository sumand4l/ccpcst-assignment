/*Q13. Write a C program to count number of digits in a number.*/

#include <stdio.h>
int main(){
    int num, count = 0, temp;
    printf("Enter any number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0){
        num /= 10;
        count++;
    }
    printf("%d has %d digits.\n",temp,count);
    return 0;
}
