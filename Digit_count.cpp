#include<iostream>
using namespace std;
int main()
{
	int num,a,sum;
	cout<<"Enter a number : ";
	cin>>num;
	while(num>0)
	{
		a=num%10;
		sum+=a;
		num/=10;
	}
	cout<<"Sum of the digits is : "<<sum;
	return 0;
}
