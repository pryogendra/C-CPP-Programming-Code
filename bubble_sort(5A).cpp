#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter the length of array : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter elements :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
					int a=arr[i];
					arr[i]=arr[j];
					arr[j]=a;
				}
			}
		}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
