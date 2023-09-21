#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter numbers for square matrix row & column : ";
	cin>>r>>c;
	int matrix[r][c],t_matrix[c][r],i,j;
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
	cout<<"\nTranspose of the entered matrix is : \n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t_matrix[i][j]=0;
			t_matrix[i][j]=matrix[j][i];
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<t_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
