/*12.Write a C program to input month number and print number of days in that month.*/

#include<stdio.h>
void main(){
    int month;
    printf("Enter Month Number: ");
    scanf("%d",&month);
    switch(month){
        case 1:
            printf("January has 31 days\n");
            break;
        case 2:
            printf("February has 28 days\n");
            break;
        case 3:
            printf("March has 31 days\n");
            break;
        case 4:
            printf("April has 30 days\n");
            break;
        case 5:
            printf("May has 31 days\n");
            break;
        case 6:
            printf("June has 30 days\n");
            break;
        case 7:
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:
            printf("September has 30 days\n");
            break;
        case 10:
            printf("October has 31 days\n");
            break;
        case 11:
            printf("January has 30 days\n");
            break;
        case 12:
            printf("January has 31 days\n");
            break;
        default: 
            printf("Invalid Month Number\n");
    }
}