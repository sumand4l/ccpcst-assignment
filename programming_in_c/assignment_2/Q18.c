/*18.Write a C program to calculate profit or loss.*/

#include<stdio.h>

void main(){
    int buy,sell;
    printf("Enter the Buying Price: ");
    scanf("%d",&buy);
    printf("Enter your Selling Price: ");
    scanf("%d",&sell);
    if(sell-buy>0)
        printf("You made Profit :)\n");
    else if(sell-buy<0)
        printf("You made loss :(\n");
    else
        printf("Neither profit nor loss :/\n");
        
}