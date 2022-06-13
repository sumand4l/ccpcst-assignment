/*5.QR06.Write a C program to find reverse of any number using recursion.*/

 #include <stdio.h>

int calRev(int, int);

int main()
{
    int n;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    printf("Reversed Number is : %d\n", calRev(n, 0));
    return 0;
}

int calRev(int num, int rev)
{
    if (num != 0)
    {
        int rem = num % 10;
        int result = (rev * 10) + rem;
        int c = num / 10;
        // printf("Result: %d\n", result);
        // printf("C: %d\n", c);
        return calRev(c, result);
    }
    else
        return rev;
}




 