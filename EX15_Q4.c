// Write C program to move circle one location to another on pressing enter key.

#include <graphics.h>
#include <conio.h>

void drawCircle(int x, int y, int radius)
{
    setcolor(RED);
    circle(x, y, radius);
    floodfill(x, y, RED);
}
int main()
{
    int gd = DETECT, gm;
    int circleX = 100;
    int circleY = 100;
    int x = 0;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawCircle(circleX, circleY, 30);

    while (x < 5)
    {
        if (kbhit())
        {
            char key = getch();
            if (key == 13)
            {                 
                cleardevice(); 
                circleX = getmaxx() - circleX;
                circleY = getmaxy() - circleY;
                drawCircle(circleX, circleY, 30);
            }
            x++;
        }
    }
    closegraph();
    return 0;
}
