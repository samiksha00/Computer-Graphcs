#include<constrea.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void DDAAlgorithm(int x1,int x2,int y1,int y2,int color)
{
	int dx,dy;
	float length,xi,yi,x,y;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
		length=dx;
	else
		length=dy;
	xi=(x2-x1)/length;
	yi=(y2-y1)/length;
	x=x1;
	y=y1;
       for(int i=1;i<length;i++)
	{
		putpixel(x,y,color);
		x=x+xi;
		y=y+yi;
		delay(50);
	}
}
void main()
{
	clrscr();
	int gd=DETECT,gm,x1,x2,y1,y2;
	cout<<"enter x1:";
	cin>>x1;
	cout<<"enter y1:";
	cin>>y1;
	cout<<"enter x2:";
	cin>>x2;
	cout<<"enter y2:";
	cin>>y2;
	initgraph(&gd,&gm,"C:\\BGI");
	DDAAlgorithm(x1,x2,y1,y2,4);
	getch();


}
