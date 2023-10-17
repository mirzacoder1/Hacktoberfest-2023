#include <graphics.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    char task[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, task);

    for (int i = 0; i < 200; i = i + 50)
    {
        if (i < 100)
        {
            circle(320 + i, 200, 100);
            circle(320, 200 + i, 100);
            circle(320 + i, 200 + i, 100);
            line(30 + i, 5, 320, 200);
            line(30, 5 + i, 320, 200);
            line(30, 5, 320 + i, 200);
            line(30, 5, 320, 200 + i);
            delay(100);
        }
    }
    getch();
    closegraph();
    return 0;
}
