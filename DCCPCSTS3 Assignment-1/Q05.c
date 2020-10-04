/*05.Write a C program to enter length and breadth of a rectangle and find its area.*/
#include<stdio.h>
main(){
    int lngt,brdt,area;
    printf("Enter the length: ");
    scanf("%d",&lngt);
    printf("Enter the breadth: ");
    scanf("%d",&brdt);
    area = lngt*brdt;
    printf("Area of the rectangle is %d squnit\n",area);
}