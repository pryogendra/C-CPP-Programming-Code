#include<iostream>
using namespace std;
int main()
{
	int l,m,n;
	cout<<"Enter the length or 1st array & 2nd array : ";
	cin>>l>>m;
	n=l+m;
	int a[l],b[m],i,j;
	cout<<" Enter the element of the 1st array :\n ";
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cout<<" Enter the element of the 2nd array :\n ";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int ab[n],k=0;
	i=0;j=0;
        do
        {
        	if(a[i]<b[j])
        	{
        		ab[k]=a[i];
        		i++;
        		k++;
			}
			else
			{
				ab[k]=b[j];
				j++;
				k++;
			}
		}
		while(k<=n);
	cout<<"Marge elements are : ";
	for(i=0;i<n;i++)
	{
		cout<<ab[i]<<" ";
	}
}
