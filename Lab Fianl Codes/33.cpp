#include<bits/stdc++.h>
using namespace std;
#include <graphics.h>

int main()
{
	initwindow(706, 806);

	float angle=0,ang;
    int x1,x2,y1,y2,x4,y4;

    printf("Input two co-ordinates : ");
    scanf("%d%d",&x1,&y1);

    printf("Input angle to rotate : ");
    scanf("%d%d",&x2,&y2);
	line(x1,y1,x2,y2);



    scanf("%f",&ang);

	angle=(ang*3.14)/180;
	printf("\nAngle in radian is %f\n\n",angle);

	setcolor(YELLOW);
	x4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
	y4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));

	printf("x3=%d   y3=%d\n",x2,y2);
	printf("x4=%d   y4=%d\n",x4,y4);
	cleardevice();
	line(x2,y2,x4,y4);

	getch();
	closegraph();
}
