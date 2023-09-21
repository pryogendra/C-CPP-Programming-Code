#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	cout<<endl<<"*****************PIRAMID***************"<<endl;
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	for(int i=a;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
