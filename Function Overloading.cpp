#include<iostream>
using namespace std;

int area(int);
int area(int ,int);
float area(double);
int main()
{
	cout<<"Calling the area() function to computing the are of square (side=5) - "<<area(5)<<endl;
	cout<<"Calling the area() function to computing the area of rectangle (length=5 breadth=10) - "<<area(5,10)<<endl;
	cout<<"Calling the area() function to computing the are of the circle(radius =5.5) - "<<area(5.5)<<endl;
	return 0;
}
int area(int side)        //area of square
{
	return(side*side);
}
int area(int length,int breadth)       //area of rectangle
{
	return(length*breadth);
}
float area(double radius)            //area of circle
{
	return (3.14*radius*radius);
}
