/*4.Q09.Write a C program to delete an element from an array at specified position.*/

#include <stdio.h>
int main(){
    int arr[50];
	int i, n, key, pos;
	printf("Enter the No. of elements: ");
	scanf("%d", &n);

	printf("Enter the %d element(s) in 1st Array: ", n);
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
    printf("Enter the Position you want to delete the element: ");
    scanf("%d", &pos);
    /*check if the position valid or not*/
    if (pos > 0 && pos <= n){
		for (i = pos; i < n; i++){
			arr[i-1] = arr[i];
		}
	printf("New Array List: ");
	for(i = 0; i < n-1; i++)
		printf("%d ", arr[i]);
	printf("\n");
    }
	else 
		printf("Invalid Position\n");
	return 0;
}
