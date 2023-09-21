#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter numbers for square matrix row & column : ";
	cin>>r>>c;
	int matrix[r][c],t_matrix[r][c],i,j,pow;
	cout<<"Enter all the element of matrix : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"\nMatrix elements are : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nEnter the power number for the matrix : ";
	cin>>pow;
	cout<<"\nPower of the matrix is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t_matrix[i][j]=1;
			for(int k=0;k<pow;k++)
			{
				t_matrix[i][j]*=matrix[i][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<t_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
