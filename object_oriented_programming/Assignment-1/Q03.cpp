// Q03. Addition, Subtract and Multiplication of two matrices of size 3X3

#include<iostream>
using namespace std;

int main()
{
	int mat1[3][3],  mat2[3][3], sum[3][3], mul[3][3], sub[3][3];
	int i, j, e;
	cout << "Enter 1st Matrix elements\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			cin >> mat1[i][j];
	}
	cout << "\nEnter 2nd Matrix elements\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			cin >>  mat2[i][j];
	}
	cout<<"Sum of the matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum[i][j] = mat1[i][j] +  mat2[i][j];
			cout << sum[i][j] << "\t";
		}
		cout << "\n";
	}
	cout<<"Subtraction of the matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sub[i][j] = mat1[i][j] - mat2[i][j];
			cout<< sub[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\nMultiplication of the Matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			mul[i][j] = 0;
			for(e = 0; e < 3; e++)
				mul[i][j] += mat1[i][e] * mat2[e][j];
		}
	}
	for(i = 0; i < 3 ; i++)
	{
		for(j = 0; j < 3; j++)
			cout << mul[i][j] <<"\t";
		cout<< "\n";
	}
    return 0;
}