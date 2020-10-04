/*18.Write a C program to enter P,T,R,n and calculate compound interest.*/
#include<stdio.h>
#include<math.h>
main(){
    int prin,time;
    float rate,fa,ci;
    printf("Enter your Principal Balance: ");
    scanf("%d",&prin);
    printf("Enter time in year: ");
    scanf("%d",&time);
    printf("Enter Rate of Interest: ");
    scanf("%f",&rate);
    fa=(float)(prin*pow((1+rate/100),time));
    ci=(float)fa-prin;
    printf("So,Annual Compound Interest: %.2f\nFinal Amount: %.2f\n",ci,fa);
}
    /*For no of times interest applied--------
        int n;
        printf("Press the suitable options for no of times interest would be applied per time---\n");
        printf("Press 1 for Anually\n");
        printf("Press 2 for Half-Yearly\n");
        printf("Press 3 for Quaterly\n");
        printf("Press 4 for Monthly\n");
        scanf("%d",&n);
        fa=(float)(prin*pow((1+rate/(n*100)),(n*time)));
        fa=(float)fa-prin;
    */ 