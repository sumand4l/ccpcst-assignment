/*Q01. Write a C Program to calculate sum and average of an array.*/

#include <stdio.h>

int main(){
	int arr[100];
	int i, num, sum = 0;
	float avg = 0.0;
	printf("Enter Number of Elements: ");
	scanf("%d", &num);
	printf("Enter the Elements: ");
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < num; i++)
		sum += arr[i];
	avg = (float)(sum/num);
	printf("Sum of the Array is: %d\n", sum);
	printf("Average of the Array is: %.2f\n", avg);
	return 0;
}