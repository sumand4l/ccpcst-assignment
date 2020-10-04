/*13.Write a C program to enter two angles of a triangle and find the third angle.*/
#include<stdio.h>
main(){
    float ang1,ang2,ang3;
    printf("Enter 1st angle of the triangle: ");
    scanf("%f",&ang1);
    printf("Enter 2nd angle of the triangle: ");
    scanf("%f",&ang2);
    ang3=180-(ang1+ang2);
    printf("Third angle of the triangle is %.2f degree\n",ang3);
}