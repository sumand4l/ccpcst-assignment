/*06.Write a C program to enter radius of a circle and find its diameter, circumference and area.*/
#include<stdio.h>
main(){
    int radi,dia;
    float pi=3.14,circ,area;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radi);
    dia= 2*radi;
    circ= pi*dia;
    area= pi*radi*radi;
    printf("The Circle's--\nDiameter: %d\nCircumference: %0.2f\nArea: %0.2f\n",dia,circ,area);
}