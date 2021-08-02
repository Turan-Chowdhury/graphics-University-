#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    initwindow(706, 806);

    circle(350, 380, 250); // face

    circle(238, 290, 20); // left eye
    circle(462, 290, 20); // right eye

    rectangle(340, 300, 360, 410); // nose

    arc(350, 380, 202, 335, 170); // smile

    cin.get();
}
