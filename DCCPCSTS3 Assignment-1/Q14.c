/*14.Write a C program to enter base and height of a triangle and find its area.*/
#include<stdio.h>
main(){
    int base,hgt,area;
    printf("Enter the base of the triangle: ");
    scanf("%d",&base);
    printf("Enter the height of the triangle: ");
    scanf("%d",&hgt);
    area=(base*hgt)/2;
    printf("Area of the triangle is: %d\n",area);
}