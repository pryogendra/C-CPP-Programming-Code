#include<iostream>

using namespace std;

void insertion_sort();
int a[]={};
int a_new[]={};
int n=5,chk=1;

int main()
{
	//cout<<"\nEnter the total number of elements in array : ";
	//cin>>n;
	cout<<"\nEnter the elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nElements are : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	insertion_sort();
	cout<<"\nAfter sorting : ";
	for(int i=0;i<n;i++)
	{
		cout<<a_new[i]<<" ";
	}
}

void insertion_sort()
{
	if(a[0]<a[1])
	{
		a_new[0]=a[0];
		a_new[1]=a[1];
	}
	else
	{
		a_new[0]=a[1];
		a_new[1]=a[0];
	}
	for(int i=2;i<n;i++)	
	{
		chk=1;
		for(int j=0;j<i-1;j++)
		{
			if(chk!=0)
			{
			if(a_new[0]>a[i])
			{
				for(int m=i;m>0;m--)
				{
					a_new[m]=a_new[m-1];
				}
				a_new[0]=a[i];
				chk=0;
			}
			else if(a_new[j]<a[i] && a_new[j+1]>a[i])
			{
				for(int m=i;m>0;m--)
				{
					a_new[m]=a_new[m-1];
				}
				a_new[j+1]=a[i];
				chk=0;
			}
			else if(j==i-1)
			{
				a_new[j+1]=a[i];
				chk=0;
			}
			}
		}
	}
}
