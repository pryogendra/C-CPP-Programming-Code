#include<iostream>
#include<graphics.h>
#include<dos.h>

using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	outtextxy(100,150,"1");
	line(0,100,0,200);
	line(300,100,0,100);
	line(0,200,300,200);
	line(300,200,300,300);
	line(300,100,300,0);
	line(300,0,450,150);
	line(300,300,450,150);
	getch();
}
