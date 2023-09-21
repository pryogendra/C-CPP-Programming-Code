#include<iostream>
using namespace std;
int main()
{
	int rc;
	cout<<"Enter numbers for square matrix row & column : ";
	cin>>rc;
	int matrix[rc][rc],trace=0,i,j;
	cout<<"Enter all the element of matrix : \n";
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"\nMatrix elements are : \n";
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nTrace of the entered matrix is : \n";
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			if(i==j)
			{
				trace+=matrix[i][j];
			}
		}
	}
	cout<<trace<<endl;
}
