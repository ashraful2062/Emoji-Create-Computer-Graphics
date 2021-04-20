#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main ()
{
    int gd=DETECT,gm;

    initgraph (&gd, &gm, "");

    // Emoji Color
    setcolor(YELLOW);
    circle(200, 200, 80);
    setfillstyle(1, YELLOW);
    floodfill(210, 210, YELLOW);
    // Background Color
    setcolor(BLACK);
    setfillstyle(1, BLACK);
    //Emoji Eye Create
    fillellipse(170, 190, 5, 8);
    fillellipse(230, 190, 5, 8);
    // Emoji Face Create
    ellipse(200,220,170,370,40,40);
    ellipse(200,220,170,370,40,41);
    ellipse(200,220,170,370,40,42);





    getch();

    closegraph ();
    return 0;
}
