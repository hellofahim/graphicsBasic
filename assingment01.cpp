#include<iostream>
#include<graphics.h>
int main()
{
      int gd=DETECT,gm;
      initgraph(&gd,&gm,"");
      line(50,50,50,100);
      line(50,75,70,75);
      line(50,50,70,50);

      line(90,50,80,100);
      line(90,50,110,100);
      line(85,75,100,75);

      line(130,50,130,100);
      line(150,50,150,100);
      line(130,75,150,75);
      line(180,50,180,100);
      line(200,50,200,100);
      line(220,50,220,100);
      line(200,50,210,75);
      line(210,75,220,50);
      getch();
      closegraph();
}
