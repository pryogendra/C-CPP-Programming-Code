#include<iostream>
using namespace std;
int main()
{
	int num,i,j,rev;
	cout<<"Enter a number : ";
	cin>>num;
	rev=num-1;
	for(i=1;i<num;i++)
	{
		for(j=1;j<rev;j++)
		{
			cout<<"  ";
		}
		rev-=1;
		for(j=1;j<=(2*i-1);j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
