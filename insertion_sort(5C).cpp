#include<iostream>
using namespace std;
int a[10],i,temp,val,curr,n;
void insertion_sort();
void insertion_sort()
{
	for(i=1;i<10;i++)
	{
		val=a[i];
		curr=i;
		while(a[curr-1]>val && curr !=0)
		{
			a[curr]=a[curr-1];
			curr=curr-1;
		}
		a[curr]=val;
	}
}
int main()
{
	cout<<"\nEnter the 10 elements : ";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nElements are in array : ";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	insertion_sort();
	cout<<"\nElements after insertion sort : ";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}




