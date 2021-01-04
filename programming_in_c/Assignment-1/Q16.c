/*16.Write a C program to enter marks of five subjects and calculate total,average and percentage.*/
#include<stdio.h>
main(){
    int ben,eng,math,phy,coms;
    int total;
    float avg,prcn;
    printf("Enter marks of Bengali: ");
    scanf("%d",&ben);
    printf("Enter marks of English: ");
    scanf("%d",&eng);
    printf("Enter marks of Math: ");
    scanf("%d",&math);
    printf("Enter marks of Physics: ");
    scanf("%d",&phy);
    printf("Enter marks of Computer Science: ");
    scanf("%d",&coms);
    total=ben+eng+math+phy+coms;
    avg=total/5;
    prcn=total*0.2;
    printf("--------------------------------\n");
    printf("Total: %d\nAverage: %.2f\nPercentage: %.2f\n",total,avg,prcn);
}