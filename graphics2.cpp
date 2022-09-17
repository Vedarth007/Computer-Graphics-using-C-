#include<iostream>
#include<graphics.h>

int main()
{
int gd=DETECT;
int gm;
initgraph(&gd,&gm,NULL);
circle(320,240,100);
circle(320,240,50);
line(320,140,233.4,290);
line(320,140,406.6,290);
line(233.4,290,406.6,290);
                      
delay(500000);
closegraph();
return 0;
}
