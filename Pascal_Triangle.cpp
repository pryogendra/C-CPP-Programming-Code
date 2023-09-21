#include<iostream>
using namespace std;
int main()
{
	int num,i,j,r,s=1;
	cout<<"Enter a number :";
	cin>>num;
	r=num-1;
	for(i=0;i<num;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<" ";
		}
		r--;
		cout<<s<<endl;
		s*=11;
	}
}
