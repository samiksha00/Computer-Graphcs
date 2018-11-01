#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int gdriver=DETECT;
int gmode;
 int X1,X2,X3,Y1,Y2,Y3;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
float x,y;
x=getmaxx();
y=getmaxy();
int midx,midy;
midx=x/2;
midy=y/2;
int x1=100+midx;
int y1=midy-50;
int x2=100+midx;
int y2=midy-150;
int x3=200+midx;
int y3=midy-110;
line(0,y/2,x,y/2);
line(x/2,0,x/2,y);
setcolor(RED);
line(x1,y1,x2,y2);
setcolor(RED);
line(x2,y2,x3,y3);
setcolor(RED);
line(x3,y3,x1,y1);
outtextxy(x3,y3,"Original Object");
int m=midx+150;
int n=midy-50;
outtextxy(midx+150,midy-50,"(x,y)");
int ch;
while(1)
{
cout<<"1.Reflection"<<endl;
cout<<"2.Rotation"<<endl;
cout<<"3.Exit"<<endl;
cin>>ch;
if(ch==1){
X1=x1;
X2=x2;
X3=x3;
Y1=-y1+2*n;
Y2=-y2+2*n;
Y3=-y3+2*n;
setcolor(RED);
line(X1,Y1,X2,Y2);
setcolor(RED);
line(X2,Y2,X3,Y3);
setcolor(RED);
line(X3,Y3,X1,Y1);
outtextxy(X3,Y3,"Reflected Object");
}
if(ch==2){
float a;
cout<<"Enter the angle:";
cin>>a;
a=a*3.14/180;
float var1=-m*cos(a)-n*sin(a)+m;
float var2=m*sin(a)-n*cos(a)+n;
X1=x1*cos(a)+y1*sin(a)+var1;
X2=x2*cos(a)+y2*sin(a)+var1;
X3=x3*cos(a)+y3*sin(a)+var1;
Y1=-x1*sin(a)+y1*cos(a)+var2;
Y2=-x2*sin(a)+y2*cos(a)+var2;
Y3=-x3*sin(a)+y3*cos(a)+var2;
setcolor(RED);
line(X1,Y1,X2,Y2);
setcolor(RED);
line(X2,Y2,X3,Y3);
setcolor(RED);
line(X3,Y3,X1,Y1);
outtextxy(X3,Y3,"Rotated Object");}
if(ch==3){
break;}}
getch();}


