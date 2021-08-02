#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int a=706, b=806;
    initwindow(a,b);

    settextstyle(BOLD_FONT, HORIZ_DIR, 10);  // A  B
    outtextxy(70,60,"A  B");

    line(100,250,400,250);
    line(280,250,280,470);
    line(280,250,120,360);   // KA
    line(120,360,280,470);
    arc(250, 345, 350, 73, 100);
    circle(329,360,20);

    line(a-130,550,a-130,770);
    line(a-130,570,a-100,570);
    line(a-290,660,a-130,770);   // KHA
    line(a-290,660,a-195,575);
    arc(a-240, 540, 227, 295, 60);
    circle(a-268,567,20);

    cin.get();
}
