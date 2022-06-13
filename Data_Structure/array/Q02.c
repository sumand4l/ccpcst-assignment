/*Q02. Write a C Program to print an array in reverse order.*/

#include <stdio.h>

int main(){
	int arr[100], i, num;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	//read the elements into array
	printf("Enter the Elements: ");
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	//print the array befor reverse
	printf("Array before reverse: ");
	for (i = 0; i < num; i++)
		printf("%d ", arr[i]);
	printf("\n");
	//print the array in reverse
	printf("Array after reverse: ");
	for (i = num-1; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}