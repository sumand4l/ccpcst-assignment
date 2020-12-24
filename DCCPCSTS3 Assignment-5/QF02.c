/*5.QF02.Write a C program to find diameter, circumference and area of circle using functions.*/

#include <stdio.h>
#define pi 3.14

void func(float);

int main(){
    float redi;
    printf("Enter the Radius of Circle: ");
    scanf("%f", &redi);
    func(redi);
    return 0;
}

void func(float r){
    printf("Diameter is: %.2f Unit\n", (2 * r));
    printf("Circumference: %.2f Unit\n", (2 * pi * r));
    printf("Area is: %.2f Sq. Unit\n", (pi * r * r));
}
