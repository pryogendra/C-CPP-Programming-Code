#include<iostream>
using namespace std;
int main()
{
	int num,a=1;
	cout<<"Enter a number to check prime or not : ";
	cin>>num;
	if(num==1)
	{
		cout<<"Number "<<num<<" is neither be prime nor composite.";
	}
	else if(num==2)
	{
		cout<<"Number "<<num<<" is a prime number.";
	}
	else
	{
		for(int i=2;i<num;i++)
		{
			a=1;
			if(num%i==0)
			{
				cout<<"Number "<<num<<" is a composite number.";
				break;
			}
			else
			{
				a=0;
			}
		}
	}
	if(a==0)
	{
		cout<<"Number "<<num<<" is prime number.";
	}
}
