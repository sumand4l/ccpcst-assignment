/*Q11. Write a C program to count frequency of each character in a string.*/

#include <stdio.h>
int main() {
    char str[100], key;
    int count = 0;
	printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
	//read the key value
	printf("Enter a character to find its frequency: ");
    scanf("%c", &key);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (key == str[i])
            ++count;
    }

    printf("No. Frequency of %c is %d\n", key, count);
    return 0;
}