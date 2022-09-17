#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
float i,x,y,x1,y1,x2,y2,length,Dx,Dy;
cout<<"enter the x1 coordinate: ";
cin>>x1;
cout<<"enter the y1 coordinate: ";
cin>>y1;
cout<<"enter the x2 coordinate: ";
cin>>x2;
cout<<"enter the y2 coordinate: ";
cin>>y2;

int gd = DETECT;
int gm;
initgraph(&gd,&gm,NULL);

if (abs(x2-x1)>=abs(y2-y1))
{
length=abs(x2-x1);
}
else
{
length=abs(y2-y1);
}
Dx=(x2-x1)/length;
Dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
i=1;
while(i<=length)
{
putpixel(int(x),int(y),15);
x=x+Dx;
y=y+Dy;
i=i+1;
}

delay(50000);
closegraph();
return 0;
}
