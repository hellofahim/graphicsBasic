#include <iostream>
#include<graphics.h>
using namespace std;

void drawEmoji();
void drawMovingBoats();
void drawFish();
void drawHome();

int main()
{
    int c;
    cout << "= = = = = = = = = = = = = = = = = = =\n";
    cout << "=  1. Emoji                         =\n";
    cout << "=  2. Moving Boats                  =\n";
    cout << "=  3. Fish                          =\n";
    cout << "=  4. Home                          =\n";
    cout << "=  0. Exit the program              =\n";
    cout << "= = = = = = = = = = = = = = = = = = =\n";

    //while(1)
    {
        cout << "Enter your choice: ";
        cin >> c;
        switch(c)
        {
        case 1:
        {
            drawEmoji();
            break;
        }
        case 2:
        {
            drawMovingBoats();
            break;
        }
        case 3:
        {
            drawFish();
            break;
        }
        case 4:
            {
                drawHome();
                break;
            }
        case 0:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again!" << endl;
        }
        }
    }
}

void drawEmoji()
{
    int gd = DETECT, gm;
initgraph (&gd, &gm, " ");
setcolor (RED);
circle (300, 200, 100);
setfillstyle(1, RED);
floodfill (300, 200, RED);
setcolor (BLUE);
setfillstyle (1, BLUE);
circle (330, 160, 15);
setfillstyle (1, BLUE);
floodfill (330, 160, BLUE);
circle (265, 160, 15);
setfillstyle (1, BLUE);
floodfill (265, 160, BLUE);
ellipse (300, 220, 205, 335, 50, 25);
ellipse (300, 220, 205, 335, 50, 26);
ellipse (300, 220, 205, 335, 50, 27);
ellipse (300, 220, 205, 335, 50, 28);
ellipse (300, 220, 205, 335, 50, 29);
ellipse (300, 220, 205, 335, 50, 30);

setfillstyle (1, BLUE);
line (290, 203, 306, 203);

line (290, 203, 298, 216);
line(306, 203, 298, 216);

floodfill (300, 205, BLUE);

getch ();

closegraph();
}
void drawMovingBoats()
{
    int gd=DETECT,gm;
       initgraph(&gd,&gm,"");
       initwindow(1000,800,"line");

       for(int i=0; i<=1000; i=i + 10)
       {
             setcolor(WHITE);
             line(0, 500, 1000, 500);

             line(50+i, 310, 10+i, 400);
             line(50+i, 310, 90+i, 400);
             line(10+i, 400, 90+i, 400);

             setfillstyle(1, RED);
             floodfill(51+i, 320, WHITE);

             line(0+i,400,0+i,490);
             line(0+i,400,100+i,400);
             line(0+i,490,100+i,490);
             line(100+i,400,100+i,490);

             setfillstyle(3, GREEN);
             floodfill(11+i, 410, WHITE);

             delay(100);
             cleardevice();


       }
}
void drawFish()
{
   int gd  = DETECT, gm;
    initgraph(&gd,&gm,"");
    initwindow(1024,1024,"line");


    setcolor(WHITE);
    ellipse(697,284,280,280,6,8);
    ellipse(662,280,280,280,12,17);
    ellipse(681,253,280,280,8,11);
    ellipse(686,310,280,280,10,14);

    setcolor(YELLOW);
    ellipse(450,300,280,280,190,70);
    setfillstyle(1,LIGHTBLUE);
    floodfill(450,300,YELLOW);


    circle(533,300,30);
    line(565,243,515,275);
    line(510,321,565,357);
    setfillstyle(1,YELLOW);
    floodfill(533,300,YELLOW);
    floodfill(600,300,YELLOW);

     setcolor(WHITE);
    line(280,272,180,230);
    line(280,328,180,370);
    line(180,370,210,300);
    line(210,300,180,230);
    ellipse(450,300,280,280,190,70);
    setfillstyle(1,RED);
    floodfill(220,310,WHITE);


    setcolor(RED);
    line(490,232,370,150);
    line(370,150,435,230);
    line(435,230,490,232);
    setfillstyle(1,RED);
    floodfill(440,210,RED);

    line(490,367,370,440);
    line(370,440,440,370);
    line(440,370,490,367);
    setfillstyle(1,RED);
    floodfill(450,371,RED);

    setcolor(RED);
    ellipse(590,290,280,280,13,17);
    setfillstyle(1,RED);
    floodfill(590,290,RED);



     getch();
    closegraph();
}
void drawHome()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	setcolor(BROWN);
	int arr[10]={200,200,350,200,410,300,260,300,200,200};
	int ar[8]={135,300,135,380,265,380,265,300};
	int a[6]={265,380,400,350,400,300};
	drawpoly(5,arr);
	drawpoly(3,a);
	drawpoly(4,ar);
	rectangle(175,380,215,320);
	line(200,200,130,305);
	line(202,202,135,303);
	line(0,340,135,340);
	line(400,340,700,340);
	circle(500,100,40);


	setfillstyle(1,BROWN);
	floodfill(200,201,6);
	setfillstyle(6,BROWN);
	floodfill(300,250,6);
	setfillstyle(1,14);
	floodfill(200,210,6);
	setfillstyle(1,14);
	floodfill(300,310,6);
	setfillstyle(9,12);
	floodfill(200,330,6);
	setfillstyle(1,GREEN);
	floodfill(200,400,6);
	setfillstyle(1,RED);
	floodfill(100,100,6);
	setfillstyle(1,14);
	floodfill(500,100,6);

	getch();
	closegraph();

}
