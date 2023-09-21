#include<iostream>
using namespace std;
int main()
{
	cout<<"****** Program to find the Perfect Number **********"<<endl;
	int num,sum=0;
	cout<<"Enter a number :";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	cout<<"Perfect Number is : "<<sum;
	return 0;
}
