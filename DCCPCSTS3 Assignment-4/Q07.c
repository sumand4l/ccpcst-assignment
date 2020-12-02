/*4.Q07.Write a C program to copy all elements from an array to another array.*/

#include <stdio.h>
int main(){
	int arr1[50], arr2[50];
	int i, n;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	printf("Enter the %d element(s) in 1st Array: ", n);
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	printf("Elements in 2nd Array that copied from 1st Array are:\n");
	/*copy the elements of arr1 to arr2 one by one*/
	for (i = 0; i < n; i++){
		arr2[i] = arr1[i];
		printf("%d, ", arr2[i]);
	}
	printf("\n");
	return 0;
}