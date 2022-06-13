/*4.Q03.Write a C program to find sum of all array elements.*/

#include <stdio.h>
int main(){
	int arr[50], sum = 0, n, i;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the element at position [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	/*sum of array elements*/
	for (i = 0; i < n; i++)
		sum += arr[i];
	printf("Sum of Array elements is: %d\n", sum);
	return 0;
}