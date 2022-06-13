/*Q15. Write a C Program to multiply of two 3x3 Matrices*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[3][3], b[3][3], c[3][3];
  int i, j, k;
  printf(" Enter elements of first matrix\n ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" \n Enter a[%d] [%d] element: ", i, j);
      scanf(" %d ", &a[i][j]);
    }
  }
  printf(" Enter elements of second matrix\n ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" \n Enter b[%d] [%d] element: ", i, j);
      scanf(" %d ", &b[i][j]);
    }
  }
  printf(" \n\n First matrix is\n\n ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf(" %2d ", a[i][j]);
    printf(" \n ");
  }

  printf(" \n\nSecond matrix is\n ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf(" %2d ", b[i][j]);
    printf(" \n ");
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < 3; k++)
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
    }
  }
  printf(" \n\n Multiplication of two matrices is\n ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf(" %2d ", c[i][j]);
    printf(" \n ");
  }
  return 0;
}