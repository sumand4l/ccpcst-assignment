/*10. Write a C program to find length of string using pointers.*/

#include<stdio.h>
int main()
{
	char arr[100], *ptr;
	int i = 0;
	printf("Input a string: ");
	fgets(arr, sizeof(arr), stdin);
	ptr = arr;
	while(*ptr != '\0'){
		i++;	
        ptr++;
	}
	printf("\nLength of string is: %d\n", i-1);
}