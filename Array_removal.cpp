#include<iostream>
using namespace std;
int main()
{
	int l;
	cout<<"Enter the length of the array : ";
	cin>>l;
	int arr[l],i,j,el;
	cout<<"Enter the elements : ";
	for(i=0;i<l;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nElements in the array : ";
	for(i=0;i<l;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter the element for remove from array : ";
	cin>>el;
	for(i=0;i<l;i++)
	{
		if(arr[i]==el)
		{
			for(j=i;j<l-1;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	cout<<"\nAfter the removal of the element form the array : ";
	for(j=0;j<l-1;j++)
	{
		cout<<arr[j];
	}
}
