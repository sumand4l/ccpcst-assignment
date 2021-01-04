/*17.Write a C program to find all roots of a quadratic equation.*/

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d,rt1,rt2,real,imag;
	printf("Enter the Value of a: ");
	scanf("%f",&a);
	printf("Enter the Value of b: ");
	scanf("%f",&b);
	printf("Enter the Value of c: ");
	scanf("%f",&c);
	//Discriminant
    d=(b*b)-(4*a*c); 
	
    if(d==0)
	{
		printf("Roots are Real and Equal\n");
		rt1=-(b/2*a);
		rt2=rt1;
		printf("First Root is : %.2f\n",rt1);
		printf("Second Root is : %.2f\n",rt2);
	}
	else if(d>0)
	{
		printf("Roots are Real\n");
		rt1=(-b+ sqrt(d))/2*a;
		rt2=(-b- sqrt(d))/2*a;
		printf("Root one = %.2f\n",rt1);
		printf("Root two = %.2f\n",rt2);
	}
	else if(d<0)
	{
		printf("\nRoots are Imaginary\n");
		real=-b/(2*a);
		imag= sqrt(-d)/(2*a);
		printf("Root one = %.2f+i%.2f\n",real,imag);
		printf("Root two = %.2f-i%.2f\n",real,imag);
	}
	return 0; 
}
