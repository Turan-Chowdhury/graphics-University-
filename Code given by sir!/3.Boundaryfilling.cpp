#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void boundaryfill(int x,int y,int fill_color,int boundary_color)
{
    if(getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color)
    {
        putpixel(x,y,fill_color);
        //delay(2);
        boundaryfill(x+1, y, fill_color, boundary_color);
        boundaryfill(x, y+1, fill_color, boundary_color);
        boundaryfill(x-1, y, fill_color, boundary_color);
        boundaryfill(x, y-1, fill_color, boundary_color);
    }
}

int main()
{
    int x=370, y=370;

    initwindow(1024, 720);

    setlinestyle(0, 0, 2);
    circle(350, 350, 80);
    boundaryfill(x,y,5,15);

    cin.get();
}
