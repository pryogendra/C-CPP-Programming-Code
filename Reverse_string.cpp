#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cout<<"Enter a string : ";
	cin>>a;
	reverse(a.begin(),a.end());
	cout<<"Reverse of the string is : "<<endl;
	cout<<a;
	return 0;
}
