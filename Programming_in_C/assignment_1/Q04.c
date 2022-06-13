/*04.Write a C program to enter length and breadth of a rectangle and find its perimeter.*/
#include<stdio.h>
main(){
    int lngt,brdt,peri;
    printf("Enter the length: ");
    scanf("%d",&lngt);
    printf("Enter the breadth: ");
    scanf("%d",&brdt);
    peri = 2*(lngt+brdt);
    printf("Perimeter of the rectangle is %d unit\n",peri);
}