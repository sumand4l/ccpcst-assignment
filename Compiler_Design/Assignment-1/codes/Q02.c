//Implement Binary Search using C language

#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };

    printf ("Array is: ");
    for (int i = 0; i < 5; i++) 
        printf ("%d ", arr[i]);
    printf ("\n");
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;

    printf ("Element to be searched: 10\n");
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at position %d", result+1);
    printf ("\n");
	return 0;
}
