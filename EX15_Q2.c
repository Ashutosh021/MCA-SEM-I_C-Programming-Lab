// Write C program to draw circle
#include <graphics.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    int x, y, radius;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");


    printf("Try 200 200 50 \n");
    printf("Enter the center coordinates of the circle (x y): ");
    scanf("%d %d", &x, &y);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    circle(x, y, radius);

    delay(2000);
    closegraph();

    getch();
}

