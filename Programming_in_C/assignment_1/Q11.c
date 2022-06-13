/*11.Write a C program to find power of any number x^y.*/
#include<stdio.h>
#include<math.h>
main(){
    int x,y,power;
    printf("Enter the base value you want to calculate: ");
    scanf("%d",&x);
    printf("Enter the power value you want to calculate: ");
    scanf("%d",&y);
    power=pow(x,y);
    printf("So,%d to the power %d is %d\n",x,y,power);

}