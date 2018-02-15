#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void main()
{
 clrscr();
 int x1,y1,r;
 float x,y,d;
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 cout<<"enter radius";
 cin>>r;
 cout<<"enter center";
 cin>>x1>>y1;
 x=0;
 y=r;
 d=4/5-r;
 clrscr();
 while(y>=x)
 {
  putpixel(x1+x,y1+y,RED);
  putpixel(x1+y,y1+x,RED);
  putpixel(x1-x,y1+y,RED);
  putpixel(x1+y,y1-x,RED);
  putpixel(x1+x,y1-y,RED);
  putpixel(x1-y,y1+x,RED);
  putpixel(x1-y,y1-x,RED);
  putpixel(x1-x,y1-y,RED);

  if(d<0)
  {
	d+=2.0*x+3.0;
  }
  else
  {
	d+=2*(x-y) +5.0;
	y--;
  }
  x++;
  delay(10);
 }
 getch();
}


