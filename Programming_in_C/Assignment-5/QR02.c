/*5.QR02. Write a C program to print all natural numbers between 1 to n using recursion.*/

#include <stdio.h>
 
void natural (int);

int main(){
    int lim;
    printf("Enter the limit number: ");
    scanf("%d", &lim);
    printf("All Natural Numbers between 1 to %d are: ", lim);
    natural (lim);
    printf("\n");
    return 0;
}

void natural (int limit){
    if (limit != 0)
        natural (limit-1);
    else    
        return;
    printf("%d, ", limit);
}