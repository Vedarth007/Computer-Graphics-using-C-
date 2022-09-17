#include<iostream>
#include<graphics.h>

int main()
{
int gd=DETECT;
int gm;
initgraph(&gd,&gm,NULL);
circle(320,240,35);
line(270,240,320,190);
line(320,190,370,240);
line(370,240,320,290);
line(270,240,320,290);
rectangle(270,190,370,290);                      






delay(500000);
closegraph();
return 0;
}
