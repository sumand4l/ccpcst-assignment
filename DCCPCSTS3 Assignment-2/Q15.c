/*Write a C program to input all sides of a triangle and check whether triangle is valid or not.*/

#include<stdio.h>
void main(){
    float side1,side2,side3;
    printf("Enter the three sides of triangle:\n");
    scanf("%f%f%f",&side1,&side2,&side3);
    if((side1+side2)>side3){
        if((side2+side3)>side1){
            if((side1+side3)>side2){
                printf("This Tringle is valid :)\n");
            }
            else
            {
                printf("This Triangle is not valid :(\n");
            }
        }
        else
        {
            printf("This Triangle is not valid :(\n");
        }
    }
    else
    {
        printf("This Triangle is not valid :(\n");
    }
    
}

//Alternative method 1

/*
#include<stdio.h>
void main(){
    float side1,side2,side3;
    printf("Enter the three sides of triangle:\n");
    scanf("%f%f%f",&side1,&side2,&side3);
    if((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2){
        printf("Triangle is valid");
    }
    else
        printf("Triangle is not valid");
    
     
    
}
*/




//Alternative method 2


/*
#include <stdio.h>  
  
void main()  
{  
    int side1, side2, side3; 

    //Initially assume that the triangle is not valid  
    //here valid works as flag variable
    int valid = 0; 
  
    //Input all three sides of a triangle    

    printf("Enter three sides of triangle: \n");  
    scanf("%d%d%d", &side1, &side2, &side3);  
      
    if((side1 + side2) > side3)  
    {  
        if((side2 + side3) > side1)  
        {  
            if((side1 + side3) > side2)
            {  
                
                 //* If side1 + side2 > side3 and
                 //*    side2 + side3 > side1 and
                 //*    side1 + side3 > side2 then
                 //* the triangle is valid. Hence set
                 //* valid variable to 1.
                 
                valid = 1;
            }  
        }
    }  
    
    //Check valid flag variable 
    if(valid == 1)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
     
}


*/