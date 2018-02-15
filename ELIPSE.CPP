#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void main()
{
 clrscr();
 int x1,y1,a,b;
 float x,y,d;
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 cout<<"enter a";
 cin>>a;
 cout<<"enter b";
 cin>>b;
 cout<<"enter center";
 cin>>x1>>y1;
 x=0;
 y=b;
 clrscr();
 d=(b*b)-(a*a*b)+(0.25*a*a);
 while(a*a*(y-0.5)>=b*b*(x+1))
 {
  putpixel(x1+x,y1+y,RED);
  putpixel(x1-x,y1+y,RED);
  putpixel(x1+x,y1-y,RED);
  putpixel(x1-x,y1-y,RED);
  delay(10);
  if(d<0)
  { d+=b*b*(2*x+3);}
  else
  {
   d+=(b*b*(2*x+3))+(a*a*(-2*y+2));
   y--;
  }
  x++;
 }
 d=b*b*(x+0.25)+a*a*(-2*y+1);
 while(y>=0)
 {
  putpixel(x1+x,y1+y,RED);
  putpixel(x1-x,y1+y,RED);
  putpixel(x1+x,y1-y,RED);
  putpixel(x1-x,y1-y,RED);
  delay(10);
  if(d<0)
  {
   d+=(b*b*(2*x+2))+(a*a*(-2*y+3));
   x++;
  }
  else
  { d+=a*a*(-2*y+3);}
  y--;
 }
 getch();
}