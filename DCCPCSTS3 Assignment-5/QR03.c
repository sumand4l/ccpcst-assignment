/*5.QR03. Write a C program to print all even or odd numbers in given range using recursion.*/

#include <stdio.h>

void printEven (int);
void printOdd (int);

int main(){
    int evenLim, oddLim;
    printf("Enter the upperlimit Number to print Even numbers: ");
    scanf("%d", &evenLim);
    printf("Enter the upperlimit Number to print Odd numbers: ");
    scanf("%d", &oddLim);
    printf("All Even Number between 1 to %d are: ", evenLim);
    printEven (evenLim);
    printf("\n");
    printf("All Odd Number between 1 to %d are: ", oddLim);
    printOdd (oddLim);
    printf("\n");
    return 0;
}

void printEven (int limit){
    if (limit > 1)
        printEven (limit-2);
    else
        return;
    printf("%d, ", limit);
}

void printOdd (int limit){
    if (limit > -1)
        printOdd (limit-2);
    else
        return;
    printf("%d, ", limit);
}



//Efficient Way
/*
#include<stdio.h>
int Print(int i,int num)
{
	if(i > num)
		return 0;
	else
	{
		printf("%d ",i);
		return Print(i+2,num);
	}
}
int main()
{
	int num,i;
	printf("Enter Starting Value: ");
	scanf("%d",&i);
	printf("Enter Ending Value: ");
	scanf("%d",&num);
	if(i%2==0)
	{
		printf("\nAll Even Numbers: \n:- ");
		Print(i,num);
		printf("\nAll Odd Numbers: \n:- ");
		Print(i+1,num);
	}
	else if(i%2==1)
	{
		printf("\nAll Odd Numbers: \n:- ");
		Print(i,num);
		printf("\nAll Even Numbers: \n:- ");
		Print(i+1,num);
	}
}

*/