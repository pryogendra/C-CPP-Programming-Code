#include<iostream>
using namespace std;
int main()
{
	int ln;
	cout<<"Enter the length of array : ";
	cin>>ln;
	int ar[ln],i,j;
	cout<<"Enter all the elements of array : "<<endl;
	for(i=0;i<ln;i++)
	{
		cin>>ar[i];
	}
	int big=ar[0];
	for(j=1;j<ln;j++)
	{
		if(big>ar[j])
		{
			continue;
		}
		else
		{
			big=ar[j];
		}
	}
	cout<<"Largest number is : "<<big;
	return 0;
}
