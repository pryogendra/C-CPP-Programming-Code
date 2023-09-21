#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter the length of the array : ";
	cin>>len;
	int arr[len],i,j,place=0;
	cout<<" Enter the elements of array : \n";
	for(i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n In which place you want to visit in array : ";
	cin>>place;
	if(place<len&&place>=0)
	{
		cout<<"You found : "<<arr[place];
	}
	else
	{
		cout<<" You are oversmart.";
	}
	return 0;
}
