/*5.QR15. Write a C program to find maximum and minimum elements in array using recursion.*/

#include <stdio.h>
 
int maximum(int array[], int size, int i);
int minimum(int array[], int size, int i);


int main()
{
    int array[50], n, max, min, i;
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    max = maximum(array, n, 0);
    min = minimum(array, n, 0);

    printf("Minimum element in the array = %d\n", min);
    printf("Maximum element in the array = %d\n", max);

    return 0;
}


/**
 * Recursive function to find maximum element in the given array.
 */
int maximum(int array[], int size, int i)
{
    int max;

    /*
     * Only last and second last element are left
     */
    if(i >= size-2)
    {
        if(array[i] > array[i + 1])
            return array[i];
        else
            return array[i + 1];
    }


    /*
     * Recursively call maximum to find maximum element in
     * right side of the array from current i.
     */
    max = maximum(array, size, i+1);

    /*
     * Compare the current array element with maximum 
     * element on its right side
     */
    if(array[i] > max)
        return array[i];
    else
        return max;
}


/**
 * Recursive function to find minimum element in the array.
 */
int minimum(int array[], int size, int i)
{
    int min;

    if(i >= size-2)
    {
        if(array[i] < array[i + 1])
            return array[i];
        else
            return array[i + 1];
    }

    min = minimum(array, size, i+1);

    if(array[i] < min)
        return array[i];
    else
        return min;
}