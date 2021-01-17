/*Q04. Write a C Program to find the second largest & second smallest elements in an array.*/

/*Using Normal Method*/
#include <stdio.h>
#include <limits.h>

//function declaration 
int secLargest (int a[], int n);
int secSmallest (int a[], int n);

//main function 
int main(){
	int num, i;
	int arr[50];
	printf("Enter the number of Elements: ");
	scanf("%d", &num);
	printf("Enter the Elements into the array: ");
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	printf("Second Largest Element in the array: %d\n", secLargest(arr, num));
	printf("Second Smallest Element in the array: %d\n", secSmallest(arr, num));
	return 0;
}

//searching for largest then second largest
int secLargest (int a[], int n){
	int i; 
	/*INT_MIN defines the minimum value for an int*/
	int secLarg = INT_MIN, larg = INT_MIN;
	for (i = 0; i < n; i++){
		if (larg < a[i])
			larg = a[i];
	}
	for (i = 0; i < n; i++){
		if (secLarg < a[i] && larg != a[i])
			secLarg = a[i];
	}
	return secLarg;
}
//searching for smallest then second smallest
int secSmallest (int a[], int n){
	int i;
	/*INT_MAX defines the maximum value for an int*/
	int secSmal = INT_MAX, smal = INT_MAX;
	for (i = 0; i < n; i++){
		if (smal > a[i])
			smal = a[i];
	}
	for (i = 0; i < n; i++){
		if (secSmal > a[i] && smal != a[i])
			secSmal = a[i];
	}
	return secSmal;
}