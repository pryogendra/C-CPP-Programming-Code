#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:
		void getdata(int a, float b);
		void putdata(void)       //Function define inside the class
		{
			cout<<"Number : "<<number<<endl;
			cout<<"Cost : "<<cost<<endl;
		}
};
void item::getdata(int a, float b)      //use membership lebel
{
	number=a;
	cost=b;
}
int main()
{
	item x;          //create object
	cout<<"\n object x "<<endl;
	x.getdata(100,299.95);      //call member function
	x.putdata();               //call member function
	item y;     //for another object
	y.getdata(200,175.50);
	y.putdata();
	return 0;
}
