#include<iostream>
using namespace std;

	inline float add(float a,float b)
	{
		return (a+b);
	}
	inline float sub(float a,float b)
	{
		return (a-b);
	}
	
int main()
{
	float a=12.345;
	float b=4.34;
	cout<<add(a,b)<<endl;
	cout<<sub(a,b)<<endl;
	return 0;
}
