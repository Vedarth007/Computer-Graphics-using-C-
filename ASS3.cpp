#include<iostream>
#include<graphics.h>

int main()
{
int gd=DETECT;
int gm;
initgraph(&gd,&gm,NULL);
circle(300,366,33);
circle(300,322,22);
line(300,200,200,400);
line(300,200,400,400);
line(200,400,400,400);
//rectangle(270,190,370,290);                      
circle(300,322,22);





delay(500000);
closegraph();
return 0;
}
