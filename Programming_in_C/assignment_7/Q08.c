/*8. Write a C program to access two dimensional array using pointers.*/
#include <stdio.h>
int main()
{
	int arr[100][100];
	int row,col,i,j;
	printf("Enter Number of Rows: ");
	scanf("%d",&row);
	printf("Enter Number of Columns: ");
	scanf("%d",&col);
	if(row != col)
		printf("\nRows and Columns must be same.\n");
	else
	{
		printf("\nEnter elements of the Array one by one %dx%d order:\n",row,col);
		for(i=0;i<row;i++){
			for(j=0;j<col;j++)
				scanf("%d",(*(arr+i)+j));
		}
		printf("\n2-Dimensional Array is:\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d  ",*(*(arr+i)+j));
			}
			printf("\n");
		}
	}
}