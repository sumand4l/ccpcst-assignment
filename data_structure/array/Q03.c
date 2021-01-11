/*3. Write a C Program to find the largest and smallest element of an array.*/

#include <stdio.h>

//function declaration 
int largest (int a[], int n);
int smallest (int a[], int n);

//main 
int main(){
	int num, i;
	int arr[50];
	printf("Enter the number of Elements: ");
	scanf("%d", &num);
	printf("Enter the Elements into the array: ");
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	printf("Largest Element in the array: %d\n", largest(arr, num));
	printf("Smallest Element in the array: %d\n", smallest(arr, num));
	return 0;
}

//searching for largest
int largest (int a[], int n){
	int lar, i;
	lar = a[0];
	for (i = 1; i < n; i++){
		if (a[i] > lar)
			lar = a[i];
	}
	return lar;
}

// searching for smallest
int smallest (int a[], int n){
	int smal, i;
	smal = a[0];
	for (i = 1; i < n; i++){
		if (smal > a[i])
			smal =  a[i];
	}
	return smal;
}