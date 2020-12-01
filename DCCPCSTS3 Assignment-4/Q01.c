/*4.Q01.Write a C program to read and print elements of array.*/

#include <stdio.h>
int main(){
	int arr[50];
	int i, n;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the element at array[%d]: ", i);
		scanf("%d", &arr[i]);
	} 
	printf("-----Entered Elements are-----\n");
	/*Print the elements*/
	 for (i = 0; i < n; i++)
	 	printf("%d ", arr[i]);
	 
	 printf("\n");
	 return 0;
}
