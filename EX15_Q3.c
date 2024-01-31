// Write C program to draw rectangle.

#include <graphics.h>
#include <stdlib.h>

void main() {
    int gd = DETECT, gm;
    int left, top, right, bottom;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    printf("Try 150,150 and 450 450 \n");
    printf("Enter the coordinates of the top-left corner of the rectangle (left top): ");
    scanf("%d %d", &left, &top);

    printf("Enter the coordinates of the bottom-right corner of the rectangle (right bottom): ");
    scanf("%d %d", &right, &bottom);

    rectangle(left, top, right, bottom);

    delay(5000);
    closegraph();

    getch();
}
