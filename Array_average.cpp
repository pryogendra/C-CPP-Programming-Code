#include<iostream>
using namespace std;
int main()
{
	int l;
	cout<<"Enter the length of array : ";
	cin>>l;
	int ar[l],i,j,sum=0;
	cout<<"Enter all the elements of array : "<<endl;
	for(i=0;i<l;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	cout<<"Sum of all the element is : "<<sum/l;
	return 0;
}
