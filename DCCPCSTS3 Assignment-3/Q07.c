/*07. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop.*/

#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Enter the Starting Number: ");
    scanf("%d",&num);
    i = num;
    while(i > 0){
        printf("%d ",i);
        i--;
    }
    printf("\n");
    return 0;

}
