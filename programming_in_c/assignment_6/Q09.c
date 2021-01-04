/*Q09. Write a C program to check whether a string is palindrome or not.*/

// Another Way 1

#include <stdio.h>
int main()
{
    char str[100];  
    int i, n, c = 0, j = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while (str[j] != '\0'){
        j++;
    }
    n = j-1;
    for(i = 0; i < n/2; i++)  
    {
    	if(str[i] == str[n-i-1])
    	c++;
    }
 	if(c == i)
 	    printf("string is palindrome.\n");
    else
        printf("string is not palindrome.\n");
    return 0;
}



//Another Way 1
/*#include <stdio.h>
int main (){
    char str[100], str_rev[100];
    int i, j, k=-1;
    int flag = 0;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    while (str[++k] != '\0');
    j = k-1;
    for (i = 0; i < k; i++)
        str_rev[i] = str[j--];
    for (j = 0; j < k-1; j++)
	{
        if (str_rev[j+1] != str[j])
            flag = 1;
    }
    if (flag == 0)
        printf("Palindrome\n");
    else 
        printf("Not palindrome\n");
    return 0;
}
*/

//Another Way 2
/*
#include <stdio.h>
int main(){
    char str[100];
    int i, j = 0, k, flag = 0;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    //finds the lengths of the string whithout null terminator
    while (str[j] != '\0'){
        j++;
    }
    for (i = 0, k = j-1; i < k; i++, k--){
        if (str[i] != str[k]){
            flag = 1;
        }
    }
    if (flag == 0)
        printf("The String is palindrome.\n");
    else
        printf("The String is NOT palindrome.\n");

}
*/