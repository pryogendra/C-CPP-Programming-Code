#include<iostream>
using namespace std;
class temp
{
	float F,C;
	public:
		void get_temp(void);
		void display(void);
};
void temp::get_temp()
{
	cout<<"Enter temperature in Fahrenheit : ";
	cin>>F;
}
void temp::display()
{
	C=(F-32)*5/9;
	cout<<F<<" F = "<<C<<" C ";
}
int main()
{
	temp t;
	t.get_temp();
	t.display();
	return 0;
}
