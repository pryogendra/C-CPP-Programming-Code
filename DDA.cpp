#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,i;
	int gd=DETECT,gm;
	float x,y,dx,dy,length;
	cout<<"Enter the points of the line : ";
	cin>>x1>>y1>>x2>>y2;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	if(abs(x2-x1)>abs(y2-y1))
	{
		length=abs(x2-x1);
	}
	else
	{
		length=abs(y2-y1);
	}
	dx=(x2-x1)/length;
	dy=(y2-y1)/length;
	x=x1;
	y=y1;
	i=0;
	putpixel(x,y,15);
	while(i<=length)
	{
		x=x+dx;
		y=y+dy;
		putpixel(x,y,15);
		i++;
	}
	getch();
	closegraph();
}

