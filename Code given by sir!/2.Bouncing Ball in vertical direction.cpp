#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main(){

    initwindow(706, 806);

    int x, y, flag=0;
    x = getmaxx()/2;
    y = 30;

    while (!kbhit()){

        if(y >= getmaxy()-30 || y <= 30)
            flag = !flag;

        setcolor(14);
        setfillstyle(SOLID_FILL, 14);
        circle(x, y, 30);
        floodfill(x, y, 14);

        delay(40);
        cleardevice();

        if(flag)  y = y + 5;
        else  y = y - 5;
    }

    cin.get();
    return 0;
}
