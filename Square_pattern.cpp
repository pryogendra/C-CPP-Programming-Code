#include<iostream>
using namespace std;
int main()
{
	cout<<"************ Program for Square Pattern **************"<<endl;
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	cout<<endl<<"Pattern is : "<<endl<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
