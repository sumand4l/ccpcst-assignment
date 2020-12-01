/*4.Q02.Write a C program to print all negative elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50];
	int i, n;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the element at position [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("-----All Entered Negative Elements are-----\n");
	/*Print negative elements*/
	for (i = 0; i < n; i++){
		if (arr[i] < 0)
				printf("%d, ", arr[i]);
	}
	printf("\n");
	return 0;
}