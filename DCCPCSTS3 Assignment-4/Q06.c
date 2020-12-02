/*4.Q06.Write a C program to count total number of negative elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50], neg = 0;
	int i, n;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the element at array[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	/*negative elements logic*/
	for (i = 0; i < n; i++){
		if (arr[i] < 0)
			neg++;
	}
	printf("Total number of negative elements is: %d\n", neg);
	return 0;
}
