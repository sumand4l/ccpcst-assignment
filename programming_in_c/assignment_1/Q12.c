/*12.Write a C program to enter any number and calculate its square root.*/
#include<stdio.h>
#include<math.h>
main(){
    int num,squrt;
    printf("Enter number you want to calculate square root: ");
    scanf("%d",&num);
    squrt=sqrt(num);
    printf("So,Square Root of %d is %d\n",num,squrt);
}