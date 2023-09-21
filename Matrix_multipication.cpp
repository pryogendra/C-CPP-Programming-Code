#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter numbers for square matrix row & column : ";
	cin>>r>>c;
	int mat1[r][c],mat2[c][r],i,j,k;
	cout<<"Enter all the element of matrix1 : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter all the element of matrix2 : \n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"\nMatrix1 elements are : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nMatrix2 elements are : \n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	int n_matrix[r][r];
		for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			n_matrix[i][j]=0;
			for(k=0;k<c;k++)
			{
				n_matrix[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	cout<<"\nAfter multipication the matrix is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<n_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
