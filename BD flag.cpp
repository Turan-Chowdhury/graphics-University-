#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    initwindow(706, 806);

    setcolor(COLOR(0, 106, 78));
    rectangle(100, 225, 600, 535 );
    setfillstyle(SOLID_FILL, COLOR(0, 106, 78));
    floodfill(350, 380, COLOR(0, 106, 78));

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(350, 380, 100);
    floodfill(350, 380, RED);

    cin.get();
}
