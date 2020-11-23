/*Q09. Write a C program to print all odd number between 1 to 100.*/

#include <stdio.h>
int main(){
    int i;
    printf("Odd Numbers between 1 to 100 are:\n");
    for(i = 1; i <= 100; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    return 0;
}
