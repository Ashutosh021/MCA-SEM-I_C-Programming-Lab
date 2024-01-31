// Write C program to draw line
#include <graphics.h>
#include <stdlib.h>

void drawLine(int x1, int y1, int x2, int y2) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    line(x1,y1,x2,y2);
    delay(2000);
    closegraph();
}

void main() {
    int x1, y1, x2, y2;
    printf("Try x1 = 100  y1=100  x2 = 200 y2 = 100\n");
    printf("Enter the coordinates of the starting point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the ending point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    drawLine(x1, y1, x2, y2);

    getch();
}
