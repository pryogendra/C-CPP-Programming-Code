#include<iostream>

using namespace std;
void selection_sort();
int n=6,temp;
int arr[]={};
int main()
{
	cout<<"Enter the 6 element of array : ";
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	selection_sort();
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void selection_sort()
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
