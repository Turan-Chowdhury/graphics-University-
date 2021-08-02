#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, YELLOW); delay(5);
    putpixel(xc-x, yc+y, WHITE); delay(5);
    putpixel(xc+x, yc-y, WHITE); delay(5);
    putpixel(xc-x, yc-y, YELLOW); delay(5);
    putpixel(xc+y, yc+x, WHITE); delay(5);
    putpixel(xc-y, yc+x, YELLOW); delay(5);
    putpixel(xc+y, yc-x, YELLOW); delay(5);
    putpixel(xc-y, yc-x, WHITE); delay(5);
}

int main()
{
    initwindow(706, 806);

    int xc=350, yc=350, r=130;
    int x=0, y=r;

    int d = 3 - 2*r;

    drawCircle(xc, yc, x, y);

    while (x<=y)
    {
        x++;

        if (d>0) {
            y--;
            d = d + 4*(x-y) + 10;
        }
        else
            d = d + 4*x + 6;

        drawCircle(xc, yc, x, y);
    }

    cin.get();
}
