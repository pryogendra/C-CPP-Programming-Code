#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	int x1,x2,y1,y2,tx,ty;
	cout<<"\nEnter the 2 line end points : ";
	cin>>x1>>y1>>x2>>y2;
	cout<<"\nNow enter the translation coordinates : ";
	cin>>tx>>ty;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	outtextxy(x1,y1,"Line before translation");
	line(x1,y1,x2,y2);
	x1+=tx;
	y1+=ty;
	x2+=tx;
	y2+=ty;
	//cout<<"Line after translation ";
	outtextxy(x1,y1,"Line after translation");
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}
