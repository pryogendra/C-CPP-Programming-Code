#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter numbers for square matrix row & column : ";
	cin>>r>>c;
	int mat1[r][c],mat2[r][c],i,j;
	cout<<"Enter all the element of matrix1 : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter all the element of matrix2 : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	int n_matrix[r][c];
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			n_matrix[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
	cout<<"\nAfter substraction the matrix is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<n_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
