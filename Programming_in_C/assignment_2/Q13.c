/*13.Write a C program to count total number of notes in given amount.*/

#include<stdio.h>
main(){
    int amount;
    int n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    printf("Enter Total Amount: ");
    scanf("%d",&amount);
    
    //check the amounts and calculate with its respective denominations
    if(amount>=2000){
        
        n2000=amount/2000;
        amount=amount%2000;
    }
    if(amount>=500){
         
        n500=amount/500;
        amount=amount%500;
    }
    if(amount>=200){
         
        n200=amount/200;
        amount=amount%200;
    }
    if(amount>=100){
        
        n100=amount/100;
         amount=amount%100;
    }
    if(amount>=50){
         
        n50=amount/50;
        amount=amount%50;
    }
    if (amount>=20){
         
        n20=amount/20;
        amount=amount%20;
    }
    if(amount>=10){
        
        n10=amount/10;
         amount=amount%10;
    }
    if(amount>=5){
        
        n5=amount/5;
        amount=amount%5;
    }
    if(amount>=2){
        
        n2=amount/2;
         amount=amount%2;
    }
    if(amount>=1){
         n1=amount;
    }

    //print the required notes
    printf("Number of Notes::\n");
    printf("Rs.2000 x %d\n",n2000);
    printf("Rs.500 x %d\n",n500);
    printf("Rs.200 x %d\n",n200);
    printf("Rs.100 x %d\n",n100);
    printf("Rs.50 x %d\n",n50);
    printf("Rs.20 x %d\n",n20);
    printf("Rs.10 x %d\n",n10);
    printf("Rs.5 x %d\n",n5);
    printf("Rs.2 x %d\n",n2);
    printf("Rs.1 x %d\n",n1);
    
     
}










 