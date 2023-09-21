#include<iostream>
using namespace std;
int main()
{
	int l;
	cout<<" Enter the length of the array : ";
	cin>>l;
	int ar[l],sorted_ar[l],i,j;
	cout<<" Enter the elements of the array :\n ";
	for(i=0;i<l;i++)
	{
		cin>>ar[i];
	}
	cout<<endl<<" Elements in the array : \n";
	for(i=0;i<l;i++)
	{
		sorted_ar[i]=0;
		cout<<ar[i]<<" ";
		for(j=i;j<l;j++)
		{
			if(ar[i]>ar[j])
			{
				sorted_ar[i]=ar[i];
			}
			else
			{
				sorted_ar[i]=ar[j];
			}
		}
	}
	cout<<"\n Sorted array is : "<<endl;
	for(i=0;i<l;i++)
	{
		cout<<sorted_ar[i]<<" ";
	}
	return 0;
}
