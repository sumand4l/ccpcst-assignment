/*Q05. Write a C Program to Find the Largest Two Numbers in a given Array*/

/*Using Normal Method*/
#include <stdio.h>
#include <limits.h>

//function declaration 
void secLargest (int a[], int n);

//main function 
int main(){
	int num, i;
	int arr[50];
	printf("Enter the number of Elements: ");
	scanf("%d", &num);
	printf("Enter the Elements into the array: ");
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
    secLargest (arr, num);
	return 0;
}

//searching for largest then second largest
void secLargest (int a[], int n){
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
    printf("Largest Element: %d\n", larg);
    printf("2nd Largest Element: %d\n", secLarg);
}