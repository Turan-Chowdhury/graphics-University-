#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int x,y,x2,y2,x3,y3,a,b;

void draw();
void rotate();

int main(void)
{
    initwindow(706, 806);

    cout<<"Enter first co-ordinate value for triangle : ";
    cin>>x>>y;
    cout<<"Enter second co-ordinate value for triangle : ";
    cin>>x2>>y2;
    cout<<"Enter third co-ordinate value for triangle : ";
    cin>>x3>>y3;

    draw();
    getch();

    rotate();
    getch();

    return 0;
}

void draw()
{
      line(x,y,x2,y2);
      line(x2,y2,x3,y3);
      line(x3,y3,x,y);
}

void rotate()
{
        int a1,a2,a3,b1,b2,b3;
        float angle;

        cout<<"Enter the rotation angle co-ordinates : ";
        cin>>angle;

        cleardevice();
        angle=(angle*3.14)/180;

        a1=a+(x-a)*cos(angle)-(y-b)*sin(angle);
        b1=b+(x-a)*sin(angle)+(y2-b)*cos(angle);
        a2=a+(x2-a)*cos(angle)-(y-b)*sin(angle);
        b2=b+(x2-a)*sin(angle)+(y2-b)*cos(angle);
        a3=a+(x3-a)*cos(angle)-(y-b)*sin(angle);
        b3=b+(x3-a)*sin(angle)+(y2-b)*cos(angle);

        cout<<"ROTATION";
        cout<<"\n Changed coordinates\n";
        cout<<a1<<" "<<b1<<endl<<a2<<" "<<b2<<endl<<a3<<" "<<b3<<endl;

        line(a1,b1,a2,b2);
        line(a2,b2,a3,b3);
        line(a3,b3,a1,b1);
}



//#include<stdio.h>
//#include<graphics.h>
//#include<math.h>
//main()
//{
//    int x1,y1,x2,y2,x3,y3;
//    double s,c, angle;
//    initwindow(1024, 720);
//    setcolor(RED);
//    printf("Enter coordinates of triangle: ");
//    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);
//    setbkcolor(WHITE);
//    cleardevice();
//    line(x1,y1,x2,y2);
//    line(x2,y2, x3,y3);
//    line(x3, y3, x1, y1);
//    getch();
//    setbkcolor(BLACK);
//    printf("Enter rotation angle: ");
//    scanf("%lf", &angle);
//    setbkcolor(WHITE);
//    c = cos(angle *M_PI/180);
//    s = sin(angle *M_PI/180);
//    x1 = floor(x1 * c + y1 * s);
//    y1 = floor(-x1 * s + y1 * c);
//    x2 = floor(x2 * c + y2 * s);
//    y2 = floor(-x2 * s + y2 * c);
//    x3 = floor(x3 * c + y3 * s);
//    y3 = floor(-x3 * s + y3 * c);
//
//    line(x1, y1 ,x2, y2);
//    line(x2,y2, x3,y3);
//    line(x3, y3, x1, y1);
//    getch();
//    closegraph();
//    return 0;
//}



