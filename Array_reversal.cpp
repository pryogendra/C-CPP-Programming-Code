#include<iostream>
using namespace std;
int main()
{
	int l;
	cout<<" Enter the length of the array : ";
	cin>>l;
	int ar[l],rev_ar[l],i;
	cout<<" Enter the elements of the array :\n ";
	for(i=0;i<l;i++)
	{
		cin>>ar[i];
	}
	cout<<endl<<" Elements in the array : \n";
	for(i=0;i<l;i++)
	{
		cout<<ar[i]<<" ";
		rev_ar[i]=ar[l-i-1];
	}
	cout<<"\n Reverse of the array is : "<<endl;
	for(i=0;i<l;i++)
	{
		cout<<rev_ar[i]<<" ";
	}
	return 0;
}
