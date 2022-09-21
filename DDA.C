#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i=1, gd=DETECT, gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter the value of x1 and y1");
scanf("%f%f",&x1,&y1);
printf("enter the value of x2 and y2");
scanf("%f%f",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy)
{
step=dx;
}
else
{
step=dy;
}
dx=dx/step;
dy=dy/step;
x=x1;
y=y1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i++;
delay(100);
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to exit....");
getch();
closegraph();
}