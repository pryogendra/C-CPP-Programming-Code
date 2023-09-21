#include<iostream>
using namespace std;
int main()
{
	cout<<"*************** Program to find the power **************"<<endl;
	int base,exp,pow=1;
	cout<<"Enter base number : ";
	cin>>base;
	cout<<"Enter the exponential power : ";
	cin>>exp;
	for(int i=0;i<exp;i++)
	{
		pow*=base;
	}
	cout<<"Value of "<<base<<"^"<<exp<<" is :"<<pow;
}
