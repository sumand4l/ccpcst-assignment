/*4.Q05.Write a C program to count total number of even and odd elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50], n, i;
	int odd = 0, even = 0;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the element at position [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n-----Total Number of Odd and Even numbers-----");
	/*odd & even calculate logic*/
	for (i = 0; i < n; i++){
		if (arr[i] % 2 == 0)
			even++;
		else  
			odd++;
	}
	printf("\nOdd Number: %d\nEven Number: %d\n", odd, even);
	return 0;
}