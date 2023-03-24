#include<iostream>
using namespace std;
int main()
{
	float amount;
	float value(float p,int n,float r=0.15);   //prototype
	amount=value(50000.00,5);   //default value for 3rd argument
	cout<<"Final value : "<<amount<<endl;
	amount=value(500.00,3,1.15);   //passing all arguments
	cout<<"Final value : "<<amount<<endl;
	return 0;
}
float value(float p,int n,float r)
{
	int year=1;
	float sum=p;
	while(year<=n)
	{
		sum=sum*(1+r);
		year=year+1;
	}
	return (sum);
	}

