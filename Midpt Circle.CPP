#include<stdio.h>
#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void pixel(int xc,int yc,int x,int y);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int r,xc,yc,x,y,p;
cout<<"input radius";
cin>>r;
cout<<"enter the centers";
cin>>xc>>yc;
p=1-r;
x=0;
y=r;
pixel(xc,yc,x,y);
while(x<=y)
{
  if(p<0)
  { x=x+1;
    p=p+(2*x)+1;
   }
   else
   {
   x=x+1;
   y=y-1;
   p=p+(2*x)-(2*y)+1;
   }

   pixel(xc,yc,x,y);
}outtextxy(x,y,"0,0");
getch();
  closegraph();
  }
   void pixel(int xc,int yc,int x,int y)
{
 putpixel(xc+x,yc+y,WHITE);
     putpixel(xc-x,yc-y,WHITE);
     putpixel(xc-x,yc+y,WHITE);
     putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    }



