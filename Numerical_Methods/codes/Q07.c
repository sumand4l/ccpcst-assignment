/*
Write a C Program to find the root of the equation X^3 - x -3 = 0 using Newton Raphson Mehtod.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define  f(x)  pow(x,3) - x - 3
#define  g(x)   3*pow(x,2) - 1

int main()
{
	 float x0, x1, f0, f1, g0, e;
	 int step = 1, N;

	 printf("\nEnter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);
	 /* Implementing Newton Raphson Method */
	 printf("\nStep\t\tx0\t\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }

		
		  x1 = x0 - f0/g0;

		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>e);
	
	 printf("\nRoot is: %f", x1);
  printf ("\n");
  return 0;
}