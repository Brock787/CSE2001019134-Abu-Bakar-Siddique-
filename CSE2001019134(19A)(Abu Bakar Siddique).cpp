#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawTriangle()

{
initwindow(500,500);
line(200,80,100,230);
line(200,80,280,230);
line(280,230,100,230);
getch();

}

void drawCircle() {
initwindow(1000,1000);
setcolor(RED);
circle(250,105,77);
setfillstyle(SOLID_FILL,RED);
floodfill(251,106,RED);
getch();
closegraph();

}




void drawRectangle() {
initwindow(800,600);
setcolor(YELLOW);
rectangle(220,30,70,90);
getch();
closegraph();
}


void drawCube() {
initwindow(1000,1000);
rectangle(50,50,200,150);
rectangle(100,100,250,200);
line(50,50,100,100);
line(200,50,250,100);
line(50,150,100,200);
line(200,150,250,200);
getch();
closegraph();

}

void drawTree() {
initwindow(1000,1000);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
line(100,200,150,50);
line(100,200,200,200);
line(150,50,200,200);
floodfill(150,150,GREEN);
setcolor(MAGENTA);
setfillstyle(SOLID_FILL,MAGENTA);
rectangle(140,200,160,300);
floodfill(141,201,MAGENTA);
getch();
closegraph();
}


void drawStar()   {
    initwindow(1000,1000);
			line(100,85,80,140);
			line(100,85,120,140);
			line(20,140,80,140);
			line(120,140,180,140);
			line(60,175,20,140);
			line(60,175,45,230);
			line(45,230,100,190);
			line(155,230,100,190);
			line(155,230,140,175);
			line(140,175,180,140);
        getch();
	closegraph();
}

void drawTableFan()


{

int gd=DETECT,gm,i,m;

initgraph(&gd,&gm,"C:\\TC\\BGI");

setbkcolor(RED);

while(kbhit()==0)

{

for(i=80; i>=0;i-=20)

{

setcolor(BLUE);

circle(320,240,65);

circle(320,240,67);

setfillstyle(SOLID_FILL,BLUE);

bar(310,307,330,360);

bar(290,360,350,375);

setcolor(WHITE);

setfillstyle(SOLID_FILL,WHITE);

pieslice(320,240,i,i+40,60);

pieslice(320,240,i+120,i+160,60);

pieslice(320,240,i+240,i+280,60);

setcolor(BLUE);

circle(320,240,10);

setfillstyle(SOLID_FILL,BLUE);

floodfill(320,240,BLUE);

delay(100);

setcolor(0);

setfillstyle(SOLID_FILL,0);

pieslice(320,240,i,i+40,60);

pieslice(320,240,i+120,i+160,60);

pieslice(320,240,i+240,i+280,60);

setcolor(BLUE);

circle(320,240,10);

setfillstyle(SOLID_FILL,BLACK);

floodfill(320,240,BLUE);

}

}

closegraph();

}













int main() {

    int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Set font and color
   settextstyle(BOLD_FONT, HORIZ_DIR, 3);
   setcolor(YELLOW);

   // Display student name
   char name[] = "ABU BAKAR SIDDIQUE";
   outtextxy(100, 100, "Name: ");
   outtextxy(200, 100, name);

   // Display student ID
   char id[] = "CSE2001019134";
   outtextxy(100, 150, "ID: ");
   outtextxy(200, 150, id);

    initgraph(&gd, &gm, "");




    int choice;
    cout << "Click The Number Which Design You Want to See!  (1-4)\n 1 = Triangle:\n 2 = Circle:\n 3 = Rectangle:\n 4 = Cube  \n 5 = Tree \n 6 = Star \n 7 = Table Fan \n  ";
    cin >> choice;
    switch (choice) {
        case 1:
            drawTriangle();
            break;
        case 2:
            drawCircle();
            break;
        case 3:
            drawRectangle();
            break;
        case 4:
            drawCube();
            break;
            case 5:
            drawTree();
            break;
            case 6:
            drawStar();
            break;
            case 7:
                drawTableFan();
                break;
        default:
            cout << "Invalid choice!";
            break;
    }
    return 0;
}

