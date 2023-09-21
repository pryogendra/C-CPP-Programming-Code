#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter the length of the array : ";
	cin>>len;
	int arr[len],i,j,search=0,x=0;
	cout<<" Enter the elements of array : \n";
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n Enter the element you want to search : ";
	cin>>search;
	for(j=0;j<len;j++)
	{
		if(arr[j]==search)
		{
			cout<<" Searching sucessful at the index "<<j<<".";
			x=1;
			break;
		}
	}
	if(x==0)
	{
		cout<<" Searching not sucessful.";
	}
	return 0;
}
