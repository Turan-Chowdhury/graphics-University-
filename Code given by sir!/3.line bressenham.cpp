#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

 int main()
 {
     initwindow(706, 806);

     int x1, y1, x2, y2, dx, dy, ds, dt, d, x, y;

     x1=100, y1=100, x2=600, y2=400;

     x=x1;
     y=y1;

     dx=x2-x1;
     dy=y2-y1;

     dt=2*(dy-dx);
     ds=2*dy;

     d=2*dy-dx;

     cout<<"\nUsing Bresenham's Line Algorithm";

     putpixel(x, y, YELLOW);// 5= color value

     while(x<=x2) {

        x++;

        if(d<0)
            d=d+ds;
        else {
            y++;
            d=d+dt;
        }

        putpixel(x, y, YELLOW);
    }

   getch();
   closegraph();
}

