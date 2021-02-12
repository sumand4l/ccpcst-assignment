/*Q13. Write a C Program to Sum of two One-Dimensional Arrays.*/

#include <stdio.h>

int main(){
	int arr1[50], arr2[50], sum[50];
	int i, n;
	printf("Enter the Number of Elements for both Arrays: ");
	scanf("%d", &n);
	printf("Enter the Elements in 1st Array: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	printf("Enter the Elements in 2nd Array: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	//for addition
	for (i = 0; i < n; i++)
		sum[i] = arr1[i] + arr2[i];
	printf("Sum of Two One-Dimensional Arrays is: ");
	for (i = 0; i < n; i++)
		printf("%d ", sum[i]);
	printf("\n");
	return 0;
}