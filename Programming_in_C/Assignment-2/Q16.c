/*Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.*/

#include<stdio.h>
void main(){
    float side1,side2,side3;
    printf("Enter the three sides of triangle:\n");
    scanf("%f%f%f",&side1,&side2,&side3);
    if(side1==side2 && side2==side3){
        printf("Equilateral Triangle\n");
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
    
}