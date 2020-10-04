/*01.Write a C program to perform input/output of all basic data types*/
#include<stdio.h>
main(){
    int x;
    float y;
    char z;
    printf("Enter any integer no.:: ");
    scanf("%d",&x);
    printf("Enter any fractional no.:: ");
    scanf("%f",&y);
    printf("Enter any character:: ");
    scanf(" %c",&z); //Space for clearing buffer or u can use while(getchar() != '\n' before scanf)
    printf("\n***You Entered***\n");
    printf("Interger: %d\nFloat: %0.2f\nCharacter:%c\n",x,y,z);
     
}
