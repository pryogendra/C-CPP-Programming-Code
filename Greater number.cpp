#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;
	if(num1>num2)
	{
		cout<<"Larger number is "<<num1;
	}
	else
	{
		cout<<"Larger number is "<<num2;
	}
	return 0;
}
