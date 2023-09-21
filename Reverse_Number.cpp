#include<iostream>
using namespace std;
int main()
{
	int num,reverse_num=0,a;
	cout<<"Enter a number for reverse : ";
	cin>>num;
	while(num>0)
	{
		reverse_num*=10;
		a=num%10;
		reverse_num+=a;
		num/=10;
	}
	cout<<"Reverse is :"<<reverse_num<<endl;
}
