#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int a=706, b=806;
    initwindow(a,b);

    line(0,b-100,b-0,b-100); // ground

    line(a/2,100,a/2-30,b-100);
    line(a/2-5,180,a/2-80,b-100);
    line(a/2-17,260,a/2-130,b-100);
    line(a/2-38,340,a/2-180,b-100);  // mid to left lines
    line(a/2-70,420,a/2-230,b-100);
    line(a/2-115,500,a/2-280,b-100);
    line(a/2-180,580,a/2-330,b-100);

    line(a/2,100,a/2+30,b-100);
    line(a/2+5,180,a/2+80,b-100);
    line(a/2+17,260,a/2+130,b-100);
    line(a/2+38,340,a/2+180,b-100);  // mid to right lines
    line(a/2+70,420,a/2+230,b-100);
    line(a/2+115,500,a/2+280,b-100);
    line(a/2+180,580,a/2+330,b-100);

    cin.get();
}
