#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter row Number: ");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		for (j=1;j<=i;j++){
			printf("%d ",1 + j-1);
		}
		printf("\n");
	}
}