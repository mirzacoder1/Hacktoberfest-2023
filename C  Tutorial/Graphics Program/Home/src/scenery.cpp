#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define x 500
int main()
{
    /* request auto detection */
    int gdriver = DETECT, gmode, errorcode;
    int xmax, ymax, i;
    int poly[100];

    /* initialize graphics and local variables */
    char task[]="C:\\MINGW\\lib\\libbgi.a";
    initgraph(&gdriver, &gmode, task);

    /* read result of initialization */
    errorcode = graphresult();
    /* an error occurred */
    if (errorcode != grOk)
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);
    }
    /*************************/
    /* draw a diagonal line */
    // delay(x);
    line(10, 10, 600, 10);
    // delay(x);
    line(600, 10, 600, 450);
    // delay(x);
    line(600, 450, 10, 450);
    // delay(x);
    line(10, 450, 10, 10);
    /*mountain 1*/
    // delay(x);
    line(10, 250, 180, 50);
    // delay(x);
    line(180, 50, 380, 270);
    // delay(x);
    line(360, 250, 600, 250);
    // delay(x);
    line(450, 250, 600, 150);
    /*mountain1 co*/
    poly[0] = 10;
    poly[1] = 250;
    poly[2] = 180;
    poly[3] = 50;
    poly[4] = 380;
    poly[5] = 270;
    poly[6] = 10;
    poly[7] = 280;
    // delay(x);

    setfillstyle(1, 6);
    // delay(x);
    fillpoly(4, poly);

    /*mountein 2 */
    // delay(x);
    line(315, 200, 400, 100);
    // delay(x);
    line(400, 100, 520, 200);
    // delay(x);
    line(10, 280, 380, 270);
    /*mountain2*/
    poly[0] = 315;
    poly[1] = 200;
    poly[2] = 400;
    poly[3] = 100;
    poly[4] = 520;
    poly[5] = 200;
    poly[6] = 450;
    poly[7] = 250;
    poly[8] = 360;
    poly[9] = 250;
    setfillstyle(1, 6);
    // delay(x);
    fillpoly(5, poly);
    /*3rd mountain*/
    poly[0] = 450;
    poly[1] = 250;
    poly[2] = 600;
    poly[3] = 250;
    poly[4] = 600;
    poly[5] = 150;
    setfillstyle(1, 6);
    // delay(x);
    fillpoly(3, poly);
    /*river*/
    line(420, 250, 500, 300);
    // delay(x);
    line(500, 300, 400, 370);
    // delay(x);
    line(400, 370, 500, 370);
    // delay(x);
    line(500, 370, 290, 450);
    /*3d view*/
    // delay(x);
    line(500, 300, 500, 325);
    // delay(x);
    line(500, 325, 440, 340);
    // delay(x);
    line(500, 370, 500, 400);
    // delay(x);
    line(500, 400, 390, 410);
    /*river colour*/
    poly[0] = 420;
    poly[1] = 250;
    poly[2] = 600;
    poly[3] = 250;
    poly[4] = 600;
    poly[5] = 450;
    poly[6] = 290;
    poly[7] = 450;
    poly[8] = 390;
    poly[9] = 410;
    poly[10] = 500;
    poly[11] = 400;
    poly[12] = 500;
    poly[13] = 370;
    poly[14] = 400;
    poly[15] = 370;
    poly[16] = 440;
    poly[17] = 340;
    poly[18] = 500;
    poly[19] = 325;
    poly[20] = 500;
    poly[21] = 300;
    poly[22] = 420;
    poly[23] = 250;

    setfillstyle(1, 1);
    // delay(x);
    fillpoly(12, poly);
    /*land fill*/
    poly[0] = 10;
    poly[1] = 280;
    poly[2] = 380;
    poly[3] = 270;
    poly[4] = 360;
    poly[5] = 250;
    poly[6] = 420;
    poly[7] = 250;
    poly[8] = 500;
    poly[9] = 300;
    poly[10] = 400;
    poly[11] = 370;
    poly[12] = 500;
    poly[13] = 370;
    poly[14] = 290;
    poly[15] = 450;
    poly[16] = 10;
    poly[17] = 450;

    setfillstyle(9, 2);
    // delay(x);
    fillpoly(9, poly);
    // Water     //
    arc(550, 430, 30, 160, 15);
    arc(450, 450, 30, 160, 20);
    arc(585, 375, 30, 160, 10);
    arc(500, 350, 30, 160, 10);
    arc(560, 300, 30, 160, 10);
    arc(525, 305, 30, 160, 5);
    arc(545, 375, 30, 160, 15);
    /* sky fill*/
    poly[0] = 10;
    poly[1] = 10;
    poly[2] = 10;
    poly[3] = 250;
    poly[4] = 180;
    poly[5] = 50;
    poly[6] = 315;
    poly[7] = 200;
    poly[8] = 400;
    poly[9] = 100;
    poly[10] = 520;
    poly[11] = 200;
    poly[12] = 600;
    poly[13] = 150;
    poly[14] = 600;
    poly[15] = 10;
    setfillstyle(1, 9);
    // delay(x);
    fillpoly(8, poly);

    /*hut*/
    // delay(x);
    line(310, 370, 350, 370);
    // delay(x);
    line(350, 370, 400, 340);
    // delay(x);
    line(350, 370, 350, 320);
    // delay(x);
    line(310, 370, 310, 320);
    // delay(x);
    line(305, 325, 330, 300);
    // delay(x);
    line(330, 300, 355, 325);
    // delay(x);
    line(355, 325, 405, 310);
    // delay(x);
    line(400, 340, 400, 310);
    // delay(x);
    line(330, 300, 388, 290);
    // delay(x);
    line(388, 290, 405, 310);
    poly[0] = 320;
    poly[1] = 370;
    poly[2] = 320;
    poly[3] = 330;
    poly[4] = 335;
    poly[5] = 330;
    poly[6] = 335;
    poly[7] = 370;
    drawpoly(4, poly);

    setfillstyle(1, 11);
    // Change RED to WHITE.
    // delay(x);
    floodfill(322, 365, WHITE);
    /*front wall*/
    setfillstyle(10, 6);
    // Change RED to WHITE.
    // delay(x);
    floodfill(312, 365, WHITE);
    /*front wall*/
    setfillstyle(8, 6);
    // Change RED to WHITE.
    // delay(x);
    floodfill(390, 294, WHITE);
    setfillstyle(5, 4);
    // Change RED to WHITE.
    // delay(x);
    floodfill(355, 327, WHITE);
    /* clean up */
    /* sun*/

    arc(315, 195, 40, 140, 30);
    setfillstyle(1, 14);
    // Change RED to WHITE.
    // delay(x);
    // floodfill(314, 190, WHITE);
    // delay(x);
    line(285, 160, 265, 120);
    line(295, 155, 285, 130);
    line(300, 150, 290, 110);
    line(308, 150, 305, 115);
    line(315, 150, 320, 110);
    line(320, 150, 328, 105);
    line(330, 150, 340, 110);
    line(340, 155, 360, 110);
    /*maker*/
    // delay(x);
    moveto(15, 435);
    /* output text starting at the C.P. */
    outtext("Mirza ");
    outtext("Zabbar  // mail // ");
    outtext("2021021045@mmmut.ac.in ");
    /*close*/
    getch();
    closegraph();
    return 0;
}