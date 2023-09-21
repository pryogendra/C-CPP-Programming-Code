#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cout<<"Enter a string : ";
	cin>>a;
	b=a;
	reverse(b.begin(), b.end());
	if(b==a)
	{
		cout<<"Palindrome.";
	}
	else
	{
		cout<<"Not Palindrome.";
	}
	return 0;	
}
