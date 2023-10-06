#include<iostream>
#include<math.h>
using namespace std;
void heap();
int i,j,tmp,a[50],n;
int main()
{
	cout<<"\n              MINIMUM HEAP PROGRAM SOURCE CODE \n";
	cout<<"\nEnter the total number of elements : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the elements : ";
		cin>>a[i];
		cout<<"\nElements are : \n";
		for(j=0;j<=i;j++)
		{
			cout<<a[j]<<" ";
		}
	}
	heap();
}
void heap()
{
	int l=0; //l indicates level of the tree 
	if(n<1)
	{
		l=0;
	}
	else if (n<4)
	{
		l=1;
	}
	else if (n<8)
	{
		l=2;
	}
	else if(n<16)
	{
		l=3;
	}
	else if(n<32)
	{
		l=4;
	}
	int ele=(pow(2,l+2)-1);
	int temp[100]={NULL};
	for(int x=0;x<n;x++)
	{
		temp[x]=a[x];
	}
	for(int k=0;k<n;k++)
	{
	for(i=n;i>=0;i--)
	{
		int n1=i*2+1;
		int n2=i*2+2;
		if(temp[i]<temp[n1] && temp[i]<temp[n2])
		{
			continue;
		}
		if(temp[i]>temp[n1] || temp[i]>temp[n2])
		{
			if(temp[n1]<temp[n2])
			{
				tmp=temp[n1];
				temp[n1]=temp[i];
				temp[i]=tmp;
			}
			if(temp[n1]>temp[n2])
			{
				tmp=temp[n2];
				temp[n2]=temp[i];
				temp[i]=tmp;
			}
		}
	}
	}
	cout<<"\nMin Heap elements are :\n";
	for(i=1;i<=n;i++)
	{
		cout<<temp[i]<<" ";
	}
}