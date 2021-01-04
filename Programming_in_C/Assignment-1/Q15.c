/*15.Write a C program to calculate area of an equilateral triangle.*/
#include<stdio.h>
main(){
    int side;
    float area;
    printf("Enter the side of the triangle: ");
    scanf("%d",&side);
    area=0.433*(side*side); //square root(3)/4=0.433
    printf("Area is %.2f\n",area);
}