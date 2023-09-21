#include<iostream>
using namespace std;
int main()
{
	int start,end,a;
	cout<<"Enter the range to get the prime numbers Strat & End : "<<endl;
	cin>>start>>end;
	cout<<"*************** PRIME NUMBERS ARE ***************"<<endl;
	for(int i=start;i<=end;i++)
	{
		for(int j=2;j<i;j++)
		{
			a=1;
			if(i%j==0)
			{
				break;
			}
			else
			{
				a=0;
			}
		}
		if(a==0)
		{
			cout<<i<<" ";
		}
	}
}
