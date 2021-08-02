
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int a=706, b=806;
    initwindow(a,b);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(a/2,390,95);   // red circle
    floodfill(a/2,390, RED);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    rectangle(0,b-200,b-0,b-185); // ground
    floodfill(50, b-190, WHITE);

    line(a/2-80,b-200,a/2-80,370);
    line(a/2-70,b-200,a/2-70,370);
    line(a/2-95,250,a/2-80,370);
    line(a/2-85,260,a/2-70,370);
    line(a/2+80,b-200,a/2+80,370);
    line(a/2+70,b-200,a/2+70,370);
    line(a/2+95,250,a/2+80,370);
    line(a/2+85,260,a/2+70,370);
    line(a/2-95,250,a/2+95,250);
    line(a/2-85,260,a/2+85,260);
    floodfill(a/2-75,b-210, WHITE);

    rectangle(a/2-200,370,a/2-120,b-200);
    rectangle(a/2-190,380,a/2-130,b-200);
    floodfill(a/2-195,375, WHITE);

    rectangle(a/2-320,450,a/2-240,b-200);
    rectangle(a/2-310,460,a/2-250,b-200);
    floodfill(a/2-315,455, WHITE);

    rectangle(a/2+120,370,a/2+200,b-200);
    rectangle(a/2+130,380,a/2+190,b-200);
    floodfill(a/2+125,375, WHITE);

    rectangle(a/2+240,450,a/2+320,b-200);
    rectangle(a/2+250,460,a/2+310,b-200);
    floodfill(a/2+255,455, WHITE);

    cin.get();
}
