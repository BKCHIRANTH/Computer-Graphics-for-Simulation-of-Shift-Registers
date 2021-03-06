#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
#include<cstdio>

using namespace std;

int refreshmills = 30;
static int wind;
static int value = 0;
static int ret;

float tx = 0.1;
float ty = 0.1;
float tz = 0.1;

float ry1 = 0.1;
float ry2 = 0.1;
float ry3 = 0.1;

float tx1 = 0.1;
float ty1 = 0.1;
float tz1 = 0.1;

int y = 0, z = 0;

float tt1 = 1, tt2 = 1, tt3 = 1, ttx = 0, tty = 0, tsx = 0, tsy = 0, ts1 = 1, ts2 = 1, ts3 = 1;
float kl1 = 1, kl2 = 1, kl3 = 1, lsx = 0, lsy = 0;
float  ml1 = 1, ml2 = 1, ml3 = 1, msx = 0, msy = 0;
float pox1 = 0, pox2 = 0, pox3 = 0, pox4 = 0, poy1 = 0, poy2 = 0, poy3 = 0, poy4 = 0;
float coll1 = 1, coll2 = 1, coll3 = 1;
float coo1 = 1, coo2 = 1, coo3 = 1, coo4 = 0, lx1 = 0, lx2 = 0, lx3 = 0, lx4 = 0, ly1 = 0, ly2 = 0, ly3 = 0, ly4 = 0;
float popx1 = 0, popx2 = 0, popx3 = 0, popx4 = 0, popy1 = 0, popy2 = 0, popy3 = 0, popy4 = 0, col1 = 1, col2 = 1, col3 = 1;
float co1 = 0, co2 = 0, co3 = 0, co4 = 0;
float cx1 = 0, cx2 = 0, cx3 = 0, cx4 = 0, cy1 = 0, cy2 = 0, cy3 = 0, cy4 = 0;
float c1 = 0, c2 = 0, c3 = 0, c4 = 0.0, c5 = 0.0, c6 = 0.0, c7 = 0.0, c8 = 0.0, c9 = 0.0, c10 = 0.0, c11 = 0.0, c12 = 0.0, c13 = 0, c14 = 0;
float d1 = 0.0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0, d11 = 0, d12 = 0, d13 = 0, d14 = 0, d15 = 0, d16 = 0;
float tx2 = 0.1, ty2 = 0.1, tx3 = 0.1, ty3 = 0.1;
float px = 0.1, py = 0.1, px1 = 0.1, py1 = 0.1, px2 = 0.1, py2 = 0.1, px3 = 0.1, py3 = 0.1, px4 = 0.1, py4 = 0.1;
float sox1 = 0.0, soy1 = 0.0, sox2 = 0.0, soy2 = 0.0, sox3 = 0.0, soy3 = 0.0, sox4 = 0.0, soy4 = 0.0;

void timer(int);
void render(int);

void reshape(int, int);
void reshape(int w, int h) {
	glViewport(2, 4, w, h);
	gluOrtho2D(0.0, 1150, 0.0, 1150);

}
void drawBitmapText(char *string, float x, float y, float z) {
	char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}
void drawBitmapText1(char *string, float x, float y, float z) {
	char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *c);
	}
}

void inputstring() {

	drawBitmapText("1", 870, 800, 0);
	drawBitmapText("0", 900, 800, 0);
	drawBitmapText("1", 930, 800, 0);
	drawBitmapText("0", 960, 800, 0);

}

void inout();
void inout() {

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(860, 780);
	glVertex2i(860, 850);
	glVertex2i(980, 850);
	glVertex2i(980, 780);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(860, 780);
	glVertex2i(860, 850);
	glVertex2i(860, 850);
	glVertex2i(980, 850);
	glVertex2i(980, 850);
	glVertex2i(980, 780);
	glVertex2i(980, 780);
	glVertex2i(860, 780);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("INPUT", 780, 805, 0);
	drawBitmapText("OUTPUT", 760, 690, 0);

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(860, 670);
	glVertex2i(860, 740);
	glVertex2i(980, 740);
	glVertex2i(980, 670);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(860, 670);
	glVertex2i(860, 740);
	glVertex2i(860, 740);
	glVertex2i(980, 740);
	glVertex2i(980, 740);
	glVertex2i(980, 670);
	glVertex2i(980, 670);
	glVertex2i(860, 670);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(890, 780);
	glVertex2i(890, 850);
	glVertex2i(920, 781);
	glVertex2i(920, 851);
	glVertex2i(950, 781);
	glVertex2i(950, 850);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(890, 670);
	glVertex2i(890, 740);
	glVertex2i(920, 671);
	glVertex2i(920, 741);
	glVertex2i(950, 670);
	glVertex2i(950, 740);
	glEnd();

}

void inout1();
void inout1() {
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2i(875, 780);
	glVertex2i(875, 850);
	glVertex2i(875, 850);
	glVertex2i(999, 850);
	glVertex2i(999, 850);
	glVertex2i(999, 780);
	glVertex2i(999, 780);
	glVertex2i(875, 780);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	drawBitmapText("INPUT", 800, 805, 0);
	drawBitmapText("OUTPUT", 780, 690, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2i(875, 660);
	glVertex2i(875, 730);
	glVertex2i(875, 730);
	glVertex2i(998, 730);
	glVertex2i(998, 730);
	glVertex2i(998, 660);
	glVertex2i(998, 660);
	glVertex2i(875, 660);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(905, 780);
	glVertex2i(905, 850);
	glVertex2i(935, 780);
	glVertex2i(935, 850);
	glVertex2i(965, 780);
	glVertex2i(965, 850);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(905, 660);
	glVertex2i(905, 730);
	glVertex2i(935, 660);
	glVertex2i(935, 730);
	glVertex2i(965, 660);
	glVertex2i(965, 730);
	glEnd();

}

void siso();
void siso() {

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	drawBitmapText("SERIAL IN SERIAL OUT", 430, 980, 0);
	drawBitmapText1("____________________________________________________", 430, 970, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("(SERIAL DATA INPUT)", 30, 430, 0);
	drawBitmapText1("Din", 70, 470, 0);
	drawBitmapText1("(SERIAL DATA OUTPUT)", 880, 430, 0);
	drawBitmapText1("Dout", 955, 470, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 35, 260, 0);
	glColor3f(1.0, 0.0, 0.0);
	drawBitmapText("Q0 -> FLIPFLOP 0", 920, 340, 0);
	drawBitmapText("Q1 -> FLIPFLOP 1", 920, 290, 0);
	drawBitmapText("Q2 -> FLIPFLOP 2", 920, 240, 0);
	drawBitmapText("Q3 -> FLIPFLOP 3", 920, 190, 0);

	//955,470
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(260, 300);
	glVertex2i(260, 500);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D3", 170, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q3", 238, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(460, 300);
	glVertex2i(460, 500);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D2", 370, 465, 0);
	drawBitmapText1("Q2", 440, 466, 0);

	inout();


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(660, 300);
	glVertex2i(660, 500);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D1", 570, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q1", 640, 465, 0);


	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(860, 300);
	glVertex2i(860, 500);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D0", 770, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q0", 840, 465, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(380, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(360, 410);
	glVertex2i(360, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(580, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(560, 410);
	glVertex2i(560, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(780, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(760, 410);
	glVertex2i(760, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(180, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(160, 410);
	glVertex2i(160, 390);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(460, 470);
	glVertex2i(560, 470);
	glVertex2i(160, 470);
	glVertex2i(90, 470);
	glVertex2i(260, 470);
	glVertex2i(360, 470);
	glVertex2i(660, 470);
	glVertex2i(760, 470);
	glVertex2i(860, 470);
	glVertex2i(950, 470);
	glVertex2i(310, 250);
	glVertex2i(310, 400);
	glVertex2i(310, 400);
	glVertex2i(360, 400);
	glVertex2i(310, 250);
	glVertex2i(710, 250);
	glVertex2i(310, 250);
	glVertex2i(30, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 400);
	glVertex2i(510, 400);
	glVertex2i(560, 400);
	glVertex2i(710, 250);
	glVertex2i(710, 400);
	glVertex2i(710, 400);
	glVertex2i(760, 400);
	glVertex2i(110, 250);
	glVertex2i(110, 400);
	glVertex2i(110, 400);
	glVertex2i(160, 400);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(110, 800);
	glVertex2i(110, 850);
	glVertex2i(110, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 800);
	glVertex2i(510, 800);            //progress bar
	glVertex2i(110, 800);
	glVertex2i(115, 805);
	glVertex2i(115, 845);
	glVertex2i(115, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 805);
	glVertex2i(505, 805);
	glVertex2i(115, 805);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(160, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 300);
	glVertex2i(260, 300);
	glVertex2i(160, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(360, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 300);
	glVertex2i(460, 300);
	glVertex2i(360, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(560, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 300);
	glVertex2i(660, 300);
	glVertex2i(560, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(760, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 300);
	glVertex2i(860, 300);
	glVertex2i(760, 300);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 110, 880, 0);

	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("3", 205, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("2", 405, 390, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("1", 605, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("0", 805, 390, 0);

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2f(310, 250);
	glVertex2f(510, 250);
	glVertex2f(710, 250);
	glVertex2f(110, 250);
	glEnd();
	inputstring();

}

void sipo();
void sipo() {

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	drawBitmapText("SERIAL IN PARALLEL OUT", 430, 980, 0);
	drawBitmapText1("____________________________________________________________", 430, 970, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("(SERIAL DATA INPUT)", 30, 430, 0);
	drawBitmapText1("Din", 70, 470, 0);
	drawBitmapText1("(PARALLEL DATA OUTPUT)", 800, 210, 0);
	drawBitmapText1("Dout", 955, 470, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 35, 260, 0);

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q3", 280, 160, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q2", 480, 160, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q1", 680, 160, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q0", 925, 160, 0);
	inout();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(260, 300);
	glVertex2i(260, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D3", 170, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q3", 238, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(460, 300);
	glVertex2i(460, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D2", 370, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q2", 440, 466, 0);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(660, 300);
	glVertex2i(660, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D1", 570, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q1", 640, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(860, 300);
	glVertex2i(860, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D0", 770, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q0", 840, 465, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(380, 400);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(360, 410);
	glVertex2i(360, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(580, 400);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(560, 410);
	glVertex2i(560, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(780, 400);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(760, 410);
	glVertex2i(760, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(180, 400);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(160, 410);
	glVertex2i(160, 390);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(460, 470);
	glVertex2i(560, 470);
	glVertex2i(160, 470);
	glVertex2i(90, 470);
	glVertex2i(260, 470);
	glVertex2i(360, 470);
	glVertex2i(660, 470);
	glVertex2i(760, 470);
	glVertex2i(860, 470);
	glVertex2i(930, 470);


	glVertex2i(310, 250);
	glVertex2i(310, 400);
	glVertex2i(310, 400);
	glVertex2i(360, 400);
	glVertex2i(310, 250);
	glVertex2i(710, 250);
	glVertex2i(310, 250);
	glVertex2i(30, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 400);
	glVertex2i(510, 400);
	glVertex2i(560, 400);
	glVertex2i(710, 250);
	glVertex2i(710, 400);
	glVertex2i(710, 400);
	glVertex2i(760, 400);
	glVertex2i(110, 250);
	glVertex2i(110, 400);
	glVertex2i(110, 400);
	glVertex2i(160, 400);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(285, 470);
	glVertex2i(285, 180);
	glVertex2i(485, 470);          //parallel output
	glVertex2i(485, 180);
	glVertex2i(685, 470);
	glVertex2i(685, 180);
	glVertex2i(930, 470);
	glVertex2i(930, 180);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(110, 800);
	glVertex2i(110, 850);
	glVertex2i(110, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 800);
	glVertex2i(510, 800);
	glVertex2i(110, 800);
	glVertex2i(115, 805);
	glVertex2i(115, 845);
	glVertex2i(115, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 805);
	glVertex2i(505, 805);
	glVertex2i(115, 805);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(160, 500);              //
	glVertex2i(160, 300);
	glVertex2i(160, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 300);
	glVertex2i(260, 300);
	glVertex2i(160, 300);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(360, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 300);
	glVertex2i(460, 300);
	glVertex2i(360, 300);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(560, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 300);
	glVertex2i(660, 300);
	glVertex2i(560, 300);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(760, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 300);
	glVertex2i(860, 300);
	glVertex2i(760, 300);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 110, 880, 0);

	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("3", 205, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("2", 405, 390, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("1", 605, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("0", 805, 390, 0);

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2f(310, 250);
	glVertex2f(510, 250);
	glVertex2f(110, 250);
	glVertex2i(285, 470);
	glVertex2i(485, 470);
	glVertex2i(685, 470);
	glEnd();
	inputstring();

}
void pipo();
void pipo() {
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(1.0,0.0,0.0,0.0);
	glColor3f(1.0, 1.7, 0.9);
	drawBitmapText("PARALLEL IN PARALLEL OUT", 430, 980, 0);
	drawBitmapText1("___________________________________________________________________", 430, 970, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("(PARALLEL DATA INPUT)", 30, 430, 0);
	drawBitmapText1("Din", 70, 560, 0);
	drawBitmapText1("(PARALLEL DATA OUTPUT)", 800, 210, 0);
	drawBitmapText1("Dout", 955, 470, 0);
	drawBitmapText1("CLOCK PULSE", 35, 260, 0);
	drawBitmapText1("Q3", 280, 160, 0);
	drawBitmapText1("Q2", 480, 160, 0);
	drawBitmapText1("Q1", 680, 160, 0);
	drawBitmapText1("Q0", 925, 160, 0);
	drawBitmapText1("A3", 108, 640, 0);
	drawBitmapText1("A2", 307, 640, 0);
	drawBitmapText1("A1", 507, 640, 0);
	drawBitmapText1("A0", 707, 640, 0);
	inout();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(260, 300);
	glVertex2i(260, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D3", 170, 465, 0);
	drawBitmapText1("Q3", 238, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(460, 300);
	glVertex2i(460, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D2", 370, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q2", 440, 466, 0);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(660, 300);
	glVertex2i(660, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D1", 570, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q1", 640, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(860, 300);
	glVertex2i(860, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D0", 770, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q0", 840, 465, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(380, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(360, 410);
	glVertex2i(360, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(580, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(560, 410);
	glVertex2i(560, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(780, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(760, 410);
	glVertex2i(760, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(180, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(160, 410);
	glVertex2i(160, 390);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(260, 470);
	glVertex2i(284, 470);
	glVertex2i(310, 470);                       //parallel in
	glVertex2i(360, 470);
	glVertex2i(310, 470);
	glVertex2i(310, 630);
	glVertex2i(460, 470);
	glVertex2i(485, 470);
	glVertex2i(510, 470);
	glVertex2i(510, 630);
	glVertex2i(510, 470);
	glVertex2i(560, 470);
	glVertex2i(660, 470);
	glVertex2i(685, 470);
	glVertex2i(710, 470);
	glVertex2i(760, 470);
	glVertex2i(710, 470);
	glVertex2i(710, 630);
	glVertex2i(860, 470);
	glVertex2i(930, 470);
	glVertex2i(160, 470);
	glVertex2i(110, 470);
	glVertex2i(110, 470);
	glVertex2i(110, 630);

	glVertex2i(310, 250);
	glVertex2i(310, 400);
	glVertex2i(310, 400);
	glVertex2i(360, 400);
	glVertex2i(310, 250);
	glVertex2i(710, 250);
	glVertex2i(310, 250);
	glVertex2i(30, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 400);
	glVertex2i(510, 400);
	glVertex2i(560, 400);
	glVertex2i(710, 250);
	glVertex2i(710, 400);
	glVertex2i(710, 400);
	glVertex2i(760, 400);
	glVertex2i(110, 250);
	glVertex2i(110, 400);
	glVertex2i(110, 400);
	glVertex2i(160, 400);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(285, 470);
	glVertex2i(285, 180);
	glVertex2i(485, 470);          //parallel output
	glVertex2i(485, 180);
	glVertex2i(685, 470);
	glVertex2i(685, 180);
	glVertex2i(930, 470);
	glVertex2i(930, 180);

	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(110, 800);
	glVertex2i(110, 850);
	glVertex2i(110, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 800);
	glVertex2i(510, 800);
	glVertex2i(110, 800);
	glVertex2i(115, 805);
	glVertex2i(115, 845);
	glVertex2i(115, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 805);
	glVertex2i(505, 805);
	glVertex2i(115, 805);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(160, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 300);
	glVertex2i(260, 300);
	glVertex2i(160, 300);
	glColor3f(0.0, 1.1, 0.0);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(360, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 500);
	glVertex2i(460, 300);
	glVertex2i(460, 300);
	glVertex2i(360, 300);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(560, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 300);
	glVertex2i(660, 300);
	glVertex2i(560, 300);
	glColor3f(0.0, 1.1, 0.0);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(760, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 300);
	glVertex2i(860, 300);
	glVertex2i(760, 300);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 110, 880, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("3", 205, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("2", 405, 390, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("1", 605, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("0", 805, 390, 0);

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2f(310, 250);
	glVertex2f(510, 250);
	glVertex2f(110, 250);
	glEnd();
	inputstring();

}
void piso();
void piso() {
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0, 0.1, 0.0, 0.6);
	glColor3f(0.0, 1.1, 0.0);
	drawBitmapText("PARALLEL IN SERIAL OUT", 430, 980, 0);
	drawBitmapText1("____________________________________________________________", 430, 970, 0);
	drawBitmapText1("(PARALLEL DATA INPUT)", 30, 430, 0);
	drawBitmapText1("Din", 70, 560, 0);
	drawBitmapText1("(SERIAL DATA OUTPUT)", 870, 430, 0);
	drawBitmapText1("Dout", 955, 470, 0);
	drawBitmapText1("CLOCK PULSE", 35, 260, 0);
	drawBitmapText1("A3", 107, 715, 0);
	drawBitmapText1("A2", 338, 715, 0);
	drawBitmapText1("A1", 539, 715, 0);
	drawBitmapText1("A0", 739, 715, 0);
	drawBitmapText1("SHIFT/LOAD", 10, 695, 0);
	drawBitmapText1("______", 36, 715, 0);
	drawBitmapText1("G4", 297, 595, 0);
	drawBitmapText1("G1", 331, 595, 0);
	drawBitmapText1("G5", 497, 595, 0);
	drawBitmapText1("G2", 532, 595, 0);
	drawBitmapText1("G6", 697, 595, 0);
	drawBitmapText1("G3", 732, 595, 0);

	inout1();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(260, 300);
	glVertex2i(260, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D3", 170, 465, 0);
	drawBitmapText1("Q3", 238, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(460, 300);
	glVertex2i(460, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D2", 370, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q2", 440, 466, 0);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(660, 300);
	glVertex2i(660, 500);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("D1", 570, 465, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText1("Q1", 640, 465, 0);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(860, 300);
	glVertex2i(860, 500);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("D0", 770, 465, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText1("Q0", 840, 465, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(380, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(360, 410);
	glVertex2i(360, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(580, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(560, 410);
	glVertex2i(560, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(780, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(760, 410);
	glVertex2i(760, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(180, 400);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(160, 410);
	glVertex2i(160, 390);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(260, 470);
	glVertex2i(284, 470);
	glVertex2i(325, 470);
	//parallel in
	glVertex2i(360, 470);
	glVertex2i(285, 470);
	glVertex2i(285, 630);
	glVertex2i(285, 630);
	glVertex2i(295, 630);


	glVertex2i(295, 630);
	glVertex2i(295, 610);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(287, 610);
	glVertex2i(313, 610);
	glVertex2i(287, 610);
	glVertex2i(294, 590);
	glVertex2i(294, 590);
	glVertex2i(297, 585);                  // and first gates
	glVertex2i(297, 585);
	glVertex2i(302, 584);
	glVertex2i(302, 584);
	glVertex2i(306, 585);
	glVertex2i(306, 585);
	glVertex2i(308, 588);
	glVertex2i(308, 588);
	glVertex2i(310, 590);
	glVertex2i(310, 590);
	glVertex2i(310, 591);
	glVertex2i(310, 591);
	glVertex2i(311, 593);
	glVertex2i(311, 593);
	glVertex2i(314, 610);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(308, 610);
	glVertex2i(308, 660);
	glVertex2i(302, 584);
	glVertex2i(302, 560);
	glVertex2i(302, 560);
	glVertex2i(312, 560);
	glVertex2i(312, 560);
	glVertex2i(312, 540);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(307, 540);
	glVertex2i(330, 540);
	glVertex2i(307, 540);
	glVertex2i(312, 520);                  //or first gate
	glVertex2i(312, 520);
	glVertex2i(318, 510);
	glVertex2i(318, 510);
	glVertex2i(325, 520);
	glVertex2i(325, 520);
	glVertex2i(330, 540);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(318, 510);               //or first sticks
	glVertex2i(318, 470);
	glVertex2i(318, 470);
	glVertex2i(360, 470);


	glVertex2i(330, 680);
	glVertex2i(330, 610);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(322, 610);
	glVertex2i(348, 610);
	glVertex2i(322, 610);
	glVertex2i(329, 590);
	glVertex2i(329, 590);
	glVertex2i(332, 585);
	glVertex2i(332, 585);
	glVertex2i(337, 584);
	glVertex2i(337, 584);
	glVertex2i(341, 585);
	glVertex2i(341, 585);
	glVertex2i(343, 588);
	glVertex2i(343, 588);
	glVertex2i(345, 593);
	glVertex2i(345, 593);
	glVertex2i(348, 611);   //repeat and  first gates

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(343, 610);
	glVertex2i(343, 705);

	glVertex2i(308 + 35, 610);
	glVertex2i(308 + 35, 660);
	glVertex2i(302 + 35, 584);
	glVertex2i(302 + 35, 560);
	glVertex2i(337, 560);                         //repeat first sticks
	glVertex2i(325, 560);
	glVertex2i(325, 560);
	glVertex2i(325, 540);

	glVertex2i(460, 470);
	glVertex2i(485, 470);     //


	glVertex2i(517, 470);
	glVertex2i(560, 470);
	glVertex2i(660, 470);
	glVertex2i(685, 470);
	glVertex2i(718, 470);                      //gotcha
	glVertex2i(760, 470);
	glVertex2i(685, 470);
	glVertex2i(685, 630);
	glVertex2i(685, 630);
	glVertex2i(695, 630);
	glVertex2i(695, 630);
	glVertex2i(695, 610);                           //last reg-------first and gate.......first stick

	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(287 + 400, 610);
	glVertex2i(313 + 400, 610);
	glVertex2i(287 + 400, 610);
	glVertex2i(294 + 400, 590);
	glVertex2i(294 + 400, 590);
	glVertex2i(297 + 400, 585);                  // last reg and  gate no 2
	glVertex2i(297 + 400, 585);
	glVertex2i(302 + 400, 584);
	glVertex2i(302 + 400, 584);
	glVertex2i(306 + 400, 585);
	glVertex2i(306 + 400, 585);
	glVertex2i(307 + 400, 588);
	glVertex2i(307 + 400, 588);
	glVertex2i(309 + 400, 590);
	glVertex2i(309 + 400, 590);
	glVertex2i(310 + 400, 591);
	glVertex2i(310 + 400, 591);
	glVertex2i(310 + 400, 593);
	glVertex2i(310 + 400, 593);
	glVertex2i(313 + 400, 610);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(708, 610);                               //last reg----------and no 1 and no 2 legs           
	glVertex2i(708, 660);
	glVertex2i(730, 610);
	glVertex2i(730, 680);
	glVertex2i(745, 610);
	glVertex2i(745, 707);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(307 + 200 + 200, 540);
	glVertex2i(330 + 200 + 200, 540);
	glVertex2i(307 + 200 + 200, 540);
	glVertex2i(312 + 200 + 200, 520);                  //or last---------------||---------------- gate
	glVertex2i(312 + 200 + 200, 520);
	glVertex2i(318 + 200 + 200, 510);
	glVertex2i(318 + 200 + 200, 510);
	glVertex2i(325 + 200 + 200, 520);
	glVertex2i(325 + 200 + 200, 520);
	glVertex2i(330 + 200 + 200, 540);

	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(287 + 400 + 35, 610);
	glVertex2i(313 + 400 + 35, 610);
	glVertex2i(287 + 400 + 35, 610);
	glVertex2i(294 + 400 + 35, 590);
	glVertex2i(294 + 400 + 35, 590);
	glVertex2i(297 + 400 + 35, 585);                  // last reg and  gate no 2
	glVertex2i(297 + 400 + 35, 585);
	glVertex2i(302 + 400 + 35, 584);
	glVertex2i(302 + 400 + 35, 584);
	glVertex2i(306 + 400 + 35, 585);
	glVertex2i(306 + 400 + 35, 585);
	glVertex2i(308 + 400 + 35, 588);
	glVertex2i(308 + 400 + 35, 588);              //last reg-------second
	glVertex2i(309 + 400 + 35, 590);
	glVertex2i(309 + 400 + 35, 590);
	glVertex2i(310 + 400 + 35, 591);
	glVertex2i(310 + 400 + 35, 591);
	glVertex2i(311 + 400 + 35, 593);
	glVertex2i(311 + 400 + 35, 593);
	glVertex2i(314 + 400 + 35, 610);


	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(337 + 200 + 200, 560);                           //last reg and sticks--------------||---------------
	glVertex2i(325 + 200 + 200, 560);
	glVertex2i(338 + 200 + 200, 560);
	glVertex2i(338 + 200 + 200, 585);
	glVertex2i(325 + 200 + 200, 560);
	glVertex2i(325 + 200 + 200, 540);
	glVertex2i(318 + 200 + 200, 510);
	glVertex2i(318 + 200 + 200, 470);


	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(302 + 200 + 200, 584);
	glVertex2i(302 + 200 + 200, 560);               //legs of -------------||-----------------and first
	glVertex2i(302 + 200 + 200, 560);
	glVertex2i(312 + 200 + 200, 560);
	glVertex2i(312 + 200 + 200, 560);
	glVertex2i(312 + 200 + 200, 540);


	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(518, 470);
	glVertex2i(510, 470);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(100, 680);
	glVertex2i(730, 680);


	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(100, 680);
	glVertex2i(80, 695);                                  //OR gate
	glVertex2i(80, 695);
	glVertex2i(80, 665);
	glVertex2i(80, 665);
	glVertex2i(100, 680);


	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(80, 680);
	glVertex2i(20, 680);
	glVertex2i(50, 680);
	glVertex2i(50, 660);
	glVertex2i(50, 660);
	glVertex2i(708, 660);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(860, 470);
	glVertex2i(930, 470);
	glVertex2i(160, 470);
	glVertex2i(110, 470);
	glVertex2i(110, 470);
	glVertex2i(110, 700);

	glVertex2i(310, 250);
	glVertex2i(310, 400);
	glVertex2i(310, 400);
	glVertex2i(360, 400);
	glVertex2i(310, 250);
	glVertex2i(710, 250);
	glVertex2i(310, 250);
	glVertex2i(30, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 400);
	glVertex2i(510, 400);
	glVertex2i(560, 400);
	glVertex2i(710, 250);
	glVertex2i(710, 400);
	glVertex2i(710, 400);
	glVertex2i(760, 400);
	glVertex2i(110, 250);
	glVertex2i(110, 400);
	glVertex2i(110, 400);
	glVertex2i(160, 400);


	glVertex2i(497, 610);
	glVertex2i(497, 630);
	glVertex2i(497, 630);
	glVertex2i(485, 630);
	glVertex2i(485, 630);
	glVertex2i(485, 470);
	glVertex2i(510, 610);            //second reg......first and's first stick
	glVertex2i(510, 660);
	glVertex2i(530, 610);
	glVertex2i(530, 680);
	glVertex2i(545, 610);
	glVertex2i(545, 707);                  // ------||--------sec stick

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(302 + 200, 584);
	glVertex2i(302 + 200, 560);               //legs of -------------||-----------------and
	glVertex2i(302 + 200, 560);
	glVertex2i(312 + 200, 560);
	glVertex2i(312 + 200, 560);
	glVertex2i(312 + 200, 540);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(307 + 200, 540);
	glVertex2i(330 + 200, 540);
	glVertex2i(307 + 200, 540);
	glVertex2i(312 + 200, 520);                  //or second---------------||---------------- gate
	glVertex2i(312 + 200, 520);
	glVertex2i(318 + 200, 510);
	glVertex2i(318 + 200, 510);
	glVertex2i(325 + 200, 520);
	glVertex2i(325 + 200, 520);
	glVertex2i(330 + 200, 540);


	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(337 + 200, 560);                           //repeat second and sticks--------------||---------------
	glVertex2i(325 + 200, 560);
	glVertex2i(338 + 200, 560);
	glVertex2i(338 + 200, 585);
	glVertex2i(325 + 200, 560);
	glVertex2i(325 + 200, 540);
	glVertex2i(318 + 200, 510);
	glVertex2i(318 + 200, 470);
	glColor3f(0.0, 0.1, 0.1);
	glVertex2i(518, 470);
	glVertex2i(510, 470);

	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(287 + 200, 610);
	glVertex2i(313 + 200, 610);
	glVertex2i(287 + 200, 610);
	glVertex2i(294 + 200, 590);
	glVertex2i(294 + 200, 590);
	glVertex2i(297 + 200, 585);                  // and second gates
	glVertex2i(297 + 200, 585);
	glVertex2i(302 + 200, 584);
	glVertex2i(302 + 200, 584);
	glVertex2i(306 + 200, 585);
	glVertex2i(306 + 200, 585);
	glVertex2i(308 + 200, 588);
	glVertex2i(308 + 200, 588);
	glVertex2i(310 + 200, 590);
	glVertex2i(310 + 200, 590);
	glVertex2i(311 + 200, 591);
	glVertex2i(311 + 200, 591);
	glVertex2i(311 + 200, 593);
	glVertex2i(311 + 200, 593);
	glVertex2i(314 + 200, 610);

	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(287 + 235, 610);
	glVertex2i(313 + 235, 610);
	glVertex2i(287 + 235, 610);
	glVertex2i(294 + 235, 590);
	glVertex2i(294 + 235, 590);
	glVertex2i(297 + 235, 585);                  // and repeat second gates
	glVertex2i(297 + 235, 585);
	glVertex2i(302 + 235, 584);
	glVertex2i(302 + 235, 584);
	glVertex2i(306 + 235, 585);
	glVertex2i(306 + 235, 585);
	glVertex2i(308 + 235, 588);
	glVertex2i(308 + 235, 588);
	glVertex2i(310 + 235, 590);
	glVertex2i(310 + 235, 590);
	glVertex2i(311 + 235, 591);
	glVertex2i(311 + 235, 591);
	glVertex2i(311 + 235, 593);
	glVertex2i(311 + 235, 593);
	glVertex2i(314 + 235, 610);


	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(110, 800);
	glVertex2i(110, 850);
	glVertex2i(110, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 850);
	glVertex2i(510, 800);
	glVertex2i(510, 800);
	glVertex2i(110, 800);
	glVertex2i(115, 805);
	glVertex2i(115, 845);
	glVertex2i(115, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 845);
	glVertex2i(505, 805);
	glVertex2i(505, 805);
	glVertex2i(115, 805);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(160, 500);
	glVertex2i(160, 300);
	glVertex2i(160, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 500);
	glVertex2i(260, 300);
	glVertex2i(260, 300);
	glVertex2i(160, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(360, 500);
	glVertex2i(360, 300);
	glVertex2i(360, 500);
	glVertex2i(460, 500);                    //here
	glVertex2i(460, 500);
	glVertex2i(460, 300);
	glVertex2i(460, 300);
	glVertex2i(360, 300);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(560, 500);
	glVertex2i(560, 300);
	glVertex2i(560, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 500);
	glVertex2i(660, 300);
	glVertex2i(660, 300);
	glVertex2i(560, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(760, 500);
	glVertex2i(760, 300);
	glVertex2i(760, 500);                              //here
	glVertex2i(860, 500);
	glVertex2i(860, 500);
	glVertex2i(860, 300);
	glVertex2i(860, 300);
	glVertex2i(760, 300);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText1("CLOCK PULSE", 110, 880, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("3", 205, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("2", 405, 390, 0);
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("1", 605, 390, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("0", 805, 390, 0);

	glColor3f(0.0, 1.0, 1.0);
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2f(310, 250);
	glVertex2f(510, 250);
	glVertex2f(110, 250);
	glVertex2i(530, 680);
	glVertex2i(511, 660);
	glVertex2i(308, 660);
	glVertex2i(50, 680);
	glVertex2i(330, 680);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(98, 680);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	drawBitmapText("1", 885, 800, 0);
	drawBitmapText("0", 915, 800, 0);
	drawBitmapText("1", 945, 800, 0);
	drawBitmapText("0", 975, 800, 0);

}

void start();
void start() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.5, 0.3, 1.9, 0.2);
	glColor3f(1.0, 0.0, 0.0);
	drawBitmapText("INTRODUCTION TO SHIFT REGISTERS", 400, 1000, 0);
	glColor3f(1.0, 1.0, 0.0);
	drawBitmapText("PROJECT BY :", 830, 350, 0);
	glColor3f(0.0, 0.0, 0.0);
	drawBitmapText("------------------------", 830, 320, 0);
	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText("CHIRANTH.B.K", 830, 280, 0);
	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText("CHETHAN.S", 830, 230, 0);
	glColor3f(1.0, 0.0, 0.0);
	drawBitmapText(" (4VV15CS021)", 980, 280, 0);
	glColor3f(1.0, 0.0, 0.0);
	drawBitmapText("     (4VV15CS020)", 960, 230, 0);

	glColor3f(1.0, 1.0, 0.0);
	drawBitmapText("INTRODUCTION TO SHIFT REGISTERS", 402, 1000, 0);
	glColor3f(1.0, 0.0, 0.0);
	drawBitmapText("__________________________________", 400, 990, 0);
	glColor3f(1.0, 1.0, 0.0);
	drawBitmapText("__________________________________", 400, 987, 0);
	glColor3f(1.2, 1.6, 0.8);
	drawBitmapText("> SERIAL IN SERIAL OUT SHIFT REGISTERS", 50, 740, 0);

	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText(" ______________________________________", 53, 725, 0);
	glColor3f(1.2, 1.6, 0.8);
	drawBitmapText("> SERIAL IN PARALLEL OUT SHIFT REGISTERS", 50, 640, 0);
	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText(" _________________________________________", 53, 625, 0);
	glColor3f(1.2, 1.6, 0.8);
	drawBitmapText("> PARALLEL IN PARALLEL OUT", 50, 540, 0);
	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText("____________________________", 53, 525, 0);
	glColor3f(1.2, 1.6, 0.8);
	drawBitmapText("> PARALLEL IN SERIAL OUT", 50, 440, 0);
	glColor3f(0.0, 1.0, 0.0);
	drawBitmapText(" ________________________", 53, 425, 0);

}

void menu(int n) {
	if (n == 0) {
		glutDestroyWindow(wind);
		exit(0);
	}

	else {

		value = n;
	}
}

void createmenu(void) {
	ret = glutCreateMenu(menu);
	glutAddMenuEntry("SERIAL IN SERIAL OUT", 1);
	glutAddMenuEntry("SERIAL IN PARALLEL OUT", 2);
	glutAddMenuEntry("PARALLEL IN PARALLEL OUT", 3);
	glutAddMenuEntry("PARALLEL IN SERIAL OUT", 4);
	glutAddMenuEntry("BACK TO MENU PAGE", 5);
	glutAddMenuEntry("EXIT!", 0);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void timer(int value)
{
	glutPostRedisplay();
	glutTimerFunc(refreshmills, timer, 0);
}

void display();
void display() {

	start();
	if (value == 1)
	{
		glClearColor(0.1, 1.0, 0.2, 0.9);
		siso();
	}

	if (value == 2) {
		glClearColor(1.0, 1.0, 0.2, 0.9);
		sipo();
	}
	if (value == 3)
	{
		glClearColor(1.9, 0.1, 0.2, 0.8);
		pipo();
	}
	if (value == 4)
	{
		glClearColor(0.0, 0.1, 0.0, 1.0);
		piso();
	}

	if (value == 5)
	{
		glClearColor(0.5, 0.3, 1.9, 0.2);
		start();
	}

	render(value);
	glFlush();
	glutSwapBuffers();
}

void render(int value)															//movement of inputs and outputs
{
	if (value == 1)
	{
		glPushMatrix();
		glColor3f(0, c7, 0);                                             // text color 
		drawBitmapText("1", 777 + tx, 740 + ty, 0);
		glColor3f(0.0, 0.0, 0.0);
		drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);


		glColor3f(1, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(875, 860);
		glVertex2i(882, 910);                      //input line tri
		glVertex2i(868, 910);
		glEnd();

		glColor3f(1, 0, 0);
		drawBitmapText("1", 870, 800, 0);                                  //movement of 1
		glPopMatrix();

		tx = tx - 5.0;

		while (tx <= -650)
		{
			tx++;
			ty = ty - 0.8;
			if (ty < -260)
			{
				c7 = 0.5;
				glColor3f(0.0, 1.0, 0.0);
				drawBitmapText("1", 779 + tx, 742 + ty, 0);
				//movement of 1

				glBegin(GL_POLYGON);							//a polygon is superimposed
				glColor3f(0.1, 1.0, 0.2);
				glVertex2i(290, 500);
				glVertex2i(290, 560);
				glVertex2i(310, 560);
				glVertex2i(310, 500);
				glEnd();
				glColor3f(0.0f, 0.0f, 0.0f);
				drawBitmapText("1", 300, 510, 0);



				glPushMatrix();
				glColor3f(0, c8, 0);
				drawBitmapText("0", 777 + tx1, 740 + ty1, 0);

				glBegin(GL_POLYGON);							//patch
				glColor3f(0.1, 1.0, 0.2);
				glVertex2i(323, 810);
				glVertex2i(323, 844);
				glVertex2i(345, 844);
				glVertex2i(345, 810);
				glEnd();
				glColor3f(1, 1, 1);
				drawBitmapText("CLOCK   PULSE   2   STARTED!!", 170, 813, 0);


				glColor3f(1, 0, 0);
				glBegin(GL_POLYGON);
				glVertex2i(895 + 10, 860);
				glVertex2i(902 + 10, 910);                      //input line tri
				glVertex2i(888 + 10, 910);
				glEnd();

				glColor3f(1, 0, 0);
				drawBitmapText("0", 900, 800, 0);
				glPopMatrix();                                 //movement of 2nd input
				tx1 = tx1 - 1.0;


				while (tx1 <= -650)
				{
					tx1++;
					ty1 = ty1 - 0.8;
					if (ty1 < -260) {
						c8 = 1;
						glColor3f(0.0, 1.0, 0.0);
						drawBitmapText("0", 777 + tx1, 741 + ty1, 0);


						glBegin(GL_POLYGON);					//patch
						glColor3f(0.1, 1.0, 0.2);
						glVertex2i(290, 500);
						glVertex2i(290, 560);
						glVertex2i(310, 560);
						glVertex2i(310, 500);
						glEnd();

						glColor3f(0.0f, 0.0f, 0.0f);
						drawBitmapText("0", 300, 510, 0);

						glBegin(GL_POLYGON);				//patch
						glColor3f(0.1, 1.0, 0.2);
						glVertex2i(480, 480);
						glVertex2i(480, 560);
						glVertex2i(530, 560);
						glVertex2i(530, 480);
						glEnd();

						glColor3f(0.0f, 0.0f, 0.0f);
						drawBitmapText("1", 499, 510, 0);

						glPushMatrix();
						glColor3f(0, c9, 0);
						drawBitmapText("1", 777 + tx2, 740 + ty2, 0);

						glBegin(GL_POLYGON);							//patch
						glColor3f(0.1, 1.0, 0.2);
						glVertex2i(323, 810);
						glVertex2i(323, 844);                                       //poly
						glVertex2i(345, 844);
						glVertex2i(345, 810);
						glEnd();
						glColor3f(0.0, 0.0, 0.0);
						drawBitmapText("CLOCK   PULSE   3   STARTED!!", 170, 813, 0);


						glColor3f(1, 0, 0);
						glBegin(GL_POLYGON);
						glVertex2i(895 + 10 + 30, 860);
						glVertex2i(902 + 10 + 30, 910);                      //input line tri
						glVertex2i(888 + 10 + 30, 910);
						glEnd();

						glColor3f(1, 0, 0);
						drawBitmapText("1", 930, 800, 0);
						glPopMatrix();


						tx2 = tx2 - 1.0;
						while (tx2 <= -650)
						{
							tx2++;
							ty2 = ty2 - 0.8;
							if (ty2 < -260)
							{
								c9 = 1;
								glColor3f(0.0, 1.0, 0.0);
								drawBitmapText("1", 777 + tx2, 741 + ty2, 0);

								glBegin(GL_POLYGON);							//patch
								glColor3f(0.1, 1.0, 0.2);
								glVertex2i(290, 500);
								glVertex2i(290, 560);
								glVertex2i(310, 560);
								glVertex2i(310, 500);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("1", 300, 510, 0);

								glBegin(GL_POLYGON);
								glColor3f(0.1, 1.0, 0.2);			//patch
								glVertex2i(480, 480);
								glVertex2i(480, 560);
								glVertex2i(530, 560);
								glVertex2i(530, 480);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("0", 499, 510, 0);

								glBegin(GL_POLYGON);
								glColor3f(0.1, 1.0, 0.2);
								glVertex2i(690, 480);						//700,500
								glVertex2i(690, 560);
								glVertex2i(710, 560);
								glVertex2i(710, 480);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("1", 700, 510, 0);

								glPushMatrix();
								glColor3f(0, c10, 0);
								drawBitmapText("0", 777 + tx3, 740 + ty3, 0);

								glBegin(GL_POLYGON);							//patch
								glColor3f(0.1, 1.0, 0.2);
								glVertex2i(323, 810);
								glVertex2i(323, 844);
								glVertex2i(345, 844);
								glVertex2i(345, 810);
								glEnd();
								glColor3f(1, 1, 1);
								drawBitmapText("CLOCK   PULSE   4   STARTED!!", 170, 813, 0);


								glColor3f(1, 0, 0);
								glBegin(GL_POLYGON);
								glVertex2i(895 + 10 + 30 + 30, 860);
								glVertex2i(902 + 10 + 30 + 30, 910);                      //input line tri
								glVertex2i(888 + 10 + 30 + 30, 910);
								glEnd();

								glColor3f(1, 0, 0);
								drawBitmapText("0", 960, 800, 0);
								glPopMatrix();
								tx3 = tx3 - 1.0;

								while (tx3 < -650) {
									tx3++;
									ty3 = ty3 - 0.8;
									if (ty3 < -260) {
										c10 = 1;
										glColor3f(0.0, 1.0, 0.0);
										drawBitmapText("0", 777 + tx3, 741 + ty3, 0);

										glBegin(GL_POLYGON);				//patch
										glColor3f(0.1, 1.0, 0.2);
										glVertex2i(290, 500);
										glVertex2i(290, 560);
										glVertex2i(310, 560);
										glVertex2i(310, 500);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("0", 300, 510, 0);

										glBegin(GL_POLYGON);					//patch
										glColor3f(0.1, 1.0, 0.2);
										glVertex2i(480, 480);
										glVertex2i(480, 560);
										glVertex2i(530, 560);
										glVertex2i(530, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("1", 499, 510, 0);

										glBegin(GL_POLYGON);						//patch
										glColor3f(0.1, 1.0, 0.2);
										glVertex2i(690, 480);						//700,500
										glVertex2i(690, 560);
										glVertex2i(710, 560);
										glVertex2i(710, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("0", 700, 510, 0);

										glBegin(GL_POLYGON);					//patch
										glColor3f(0.1, 1.0, 0.2);
										glVertex2i(890, 480);						//900,500
										glVertex2i(890, 560);
										glVertex2i(910, 560);
										glVertex2i(910, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("1", 900, 510, 0);
										glPushMatrix();

										glBegin(GL_POLYGON);							//patch
										glColor3f(0.1, 1.0, 0.2);
										glVertex2i(323, 810);
										glVertex2i(323, 840);                                       //poly
										glVertex2i(345, 840);
										glVertex2i(345, 810);
										glEnd();                              ////////////////////////////////////

										glColor3f(0.0, 0.0, 0.0);
										drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);

										glColor3f(0, c6, 0);                                 //serial out
										drawBitmapText("1", 900 + sox1, 500 + soy1, 0);
										glPopMatrix();
										sox1 += 1.0;

										while (sox1 >= 100)
										{
											sox1--;
											soy1 = soy1 + 1.0;

											glPushMatrix();							//patch output 
											glColor3f(0.1, 1.0, 0.2);
											glBegin(GL_POLYGON);
											//glColor3f(0.0f, 1.0f, 0.0f);
											glVertex2i(890, 480);
											glVertex2i(890, 560);
											glVertex2i(910, 560);
											glVertex2i(910, 480);
											glEnd();
											glColor3f(0, 0, 0);
											drawBitmapText("0", 900, 510, 0);

											glBegin(GL_POLYGON);
											glColor3f(0.1, 1.0, 0.2);
											glVertex2i(690, 480);						//patch2
											glVertex2i(690, 560);
											glVertex2i(710, 560);
											glVertex2i(710, 480);
											glEnd();

											glColor3f(0.0f, 0.0f, 0.0f);
											drawBitmapText("1", 700, 510, 0);

											glBegin(GL_POLYGON);
											glColor3f(0.1, 1.0, 0.2);					//patch 
											glVertex2i(480, 480);
											glVertex2i(480, 560);
											glVertex2i(530, 560);
											glVertex2i(530, 480);
											glEnd();

											glColor3f(0.0f, 0.0f, 0.0f);
											drawBitmapText("0", 499, 510, 0);

											glBegin(GL_POLYGON);
											glColor3f(0.1, 1.0, 0.2);
											glVertex2i(290, 500);
											glVertex2i(290, 560);
											glVertex2i(310, 560);
											glVertex2i(310, 500);
											glEnd();

											glColor3f(0.0f, 0.0f, 0.0f);
											drawBitmapText(" ", 300, 510, 0);

											glPopMatrix();

											if (soy1 >= 200)
											{
												c6 = 1;
												glBegin(GL_POLYGON);
												glColor3f(0.0f, 1.0f, 1.0f);				//color cyan
												glVertex2i(864, 673);
												glVertex2i(864, 700);                                   //out1 patch
												glVertex2i(880, 700);
												glVertex2i(880, 673);
												glEnd();

												glColor3f(0.0f, 0.0f, 0.0f);
												drawBitmapText("1", 870, 688, 0);
												glPushMatrix();

												glBegin(GL_POLYGON);							//patch
												glColor3f(0.1, 1.0, 0.2);
												glVertex2i(323, 810);
												glVertex2i(323, 840);                                       //poly
												glVertex2i(345, 840);
												glVertex2i(345, 810);
												glEnd();                              ////////////////////////////////////

												glColor3f(1.0, 1.0, 1.0);
												drawBitmapText("CLOCK   PULSE   2   STARTED!!", 170, 813, 0);

												glColor3f(0, c4, 0);//serial output 2nd
												drawBitmapText("0", 900 + sox2, 500 + soy2, 0);
												glPopMatrix();
												sox2++;

												while (sox2 > 100)
												{
													sox2--;
													soy2 = soy2 + 1.0;

													glPushMatrix();							//patch output 
													glColor3f(0.1, 1.0, 0.2);
													glBegin(GL_POLYGON);
													glVertex2i(890, 480);
													glVertex2i(890, 560);
													glVertex2i(910, 560);
													glVertex2i(910, 480);
													glEnd();
													glColor3f(0, 0, 0);
													drawBitmapText("1", 900, 500, 0);


													glBegin(GL_POLYGON);
													glColor3f(0.1, 1.0, 0.2);
													glVertex2i(690, 480);						//patch2
													glVertex2i(690, 560);
													glVertex2i(710, 560);
													glVertex2i(710, 480);
													glEnd();

													glColor3f(0.0f, 0.0f, 0.0f);
													drawBitmapText("0", 700, 500, 0);

													glBegin(GL_POLYGON);
													glColor3f(0.1, 1.0, 0.2);
													glVertex2i(480, 480);
													glVertex2i(480, 560);
													glVertex2i(530, 560);
													glVertex2i(530, 480);
													glEnd();

													glColor3f(0.0f, 0.0f, 0.0f);
													drawBitmapText(" ", 499, 499, 0);

													if (soy2 > 200)
													{
														c4 = 1;

														glColor3f(0.0f, 0.0f, 0.0f);
														drawBitmapText("0", 900, 688, 0);					//output 2

														glPushMatrix();

														glBegin(GL_POLYGON);							//patch
														glColor3f(0.1, 1.0, 0.2);
														glVertex2i(323, 810);
														glVertex2i(323, 840);                                       //poly
														glVertex2i(345, 840);
														glVertex2i(345, 810);
														glEnd();                                 ////////////////////////////////////

														glColor3f(0.0, 0.0, 0.0);
														drawBitmapText("CLOCK   PULSE   3   STARTED!!", 170, 813, 0);

														glColor3f(0, c5, 0);						//serial output 3rd
														drawBitmapText("1", 900 + sox3, 500 + soy3, 0);
														glPopMatrix();

														sox3++;
														while (sox3 > 100) {
															sox3--;
															soy3 = soy3 + 1.0;

															glPushMatrix();							//patch output 
															glColor3f(0.1, 1.0, 0.2);
															glBegin(GL_POLYGON);
															glVertex2i(890, 480);
															glVertex2i(890, 560);
															glVertex2i(910, 560);
															glVertex2i(910, 480);
															glEnd();
															glColor3f(0, 0, 0);
															drawBitmapText("0", 900, 500, 0);


															glBegin(GL_POLYGON);
															glColor3f(0.1, 1.0, 0.2);
															glVertex2i(690, 480);						//patch2
															glVertex2i(690, 560);
															glVertex2i(710, 560);
															glVertex2i(710, 480);
															glEnd();

															glColor3f(0.0f, 0.0f, 0.0f);
															drawBitmapText(" ", 700, 500, 0);

															if (soy3 > 200)
															{
																c5 = 1.0;

																glColor3f(0.0f, 0.0f, 0.0f);
																drawBitmapText("1", 930, 688, 0);					//output 2

																glPushMatrix();

																glBegin(GL_POLYGON);							//patch
																glColor3f(0.1, 1.0, 0.2);
																glVertex2i(323, 810);
																glVertex2i(323, 840);                                       //poly
																glVertex2i(345, 840);
																glVertex2i(345, 810);
																glEnd();////////////////////////////////////

																glColor3f(1.0, 1.0, 1.0);
																drawBitmapText("CLOCK   PULSE   4   STARTED!!", 170, 813, 0);

																glColor3f(c1, c2, c3);						//serial output 3rd
																drawBitmapText("0", 900 + sox4, 500 + soy4, 0);
																glPopMatrix();
																sox4++;
																while (sox4 > 100)
																{
																	sox4--;
																	soy4 = soy4 + 1.0;

																	glPushMatrix();
																	glBegin(GL_POLYGON);
																	glColor3f(0.1, 1.0, 0.2);
																	glVertex2i(890, 480);
																	glVertex2i(890, 560);
																	glVertex2i(910, 560);
																	glVertex2i(910, 480);
																	glEnd();
																	glColor3f(0, 0, 0);
																	drawBitmapText(" ", 900, 500, 0);

																	if (soy4 > 200)
																	{
																		glColor3f(0.0f, 0.0f, 0.0f);
																		drawBitmapText("0", 960, 688, 0);
																		c2 = 1.0;

																	}

																}

															}


														}

													}

												}
											}
										}

									}
								}
							}
						}
					}
				}
				glPopMatrix();
			}
		}
	}
	else if (value == 2)
	{
		glPushMatrix();
		glColor3f(d1, d1, 0);
		drawBitmapText("1", 777 + px, 740 + py, 0);
		glColor3f(1.8, 0, 1.5);
		drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);

		glColor3f(0, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2i(875, 860);
		glVertex2i(882, 910);                      //input line tri
		glVertex2i(868, 910);
		glEnd();

		glColor3f(1, 0, 0);
		drawBitmapText("1", 870, 800, 0);

		//movement of 1
		glPopMatrix();

		px = px - 5.0;

		while (px <= -650)
		{
			px++;
			py = py - 0.8;
			if (py < -260)
			{
				d1 = 1.0;
				glColor3f(1.0, 1.0, 0.0);
				drawBitmapText("1", 779 + tx, 742 + ty, 0);
				//movement of 1

				glBegin(GL_POLYGON);							//patch
				glColor3f(1.0, 1.0, 0.2);
				glVertex2i(290, 500);
				glVertex2i(290, 560);
				glVertex2i(310, 560);
				glVertex2i(310, 500);
				//glColor3f(0.0, 0.0, 0.0);
				glEnd();
				glColor3f(0.0f, 0.0f, 0.0f);
				drawBitmapText("1", 300, 510, 0);



				glPushMatrix();
				glColor3f(d3, d3, 0);
				drawBitmapText("0", 777 + px1, 740 + py1, 0);

				glBegin(GL_POLYGON);							//patch  for clock
				glColor3f(1.0, 1.0, 0.2);
				glVertex2i(323, 810);
				glVertex2i(323, 844);
				glVertex2i(345, 844);
				glVertex2i(345, 810);
				glEnd();
				glColor3f(0, 0, 0);
				drawBitmapText("CLOCK   PULSE   2   STARTED!!", 170, 813, 0);

				glColor3f(0, 0, 1);
				glBegin(GL_POLYGON);
				glVertex2i(895 + 10, 860);
				glVertex2i(902 + 10, 910);                      //input line tri
				glVertex2i(888 + 10, 910);
				glEnd();

				glColor3f(1, 0, 0);
				drawBitmapText("0", 900, 800, 0);
				glPopMatrix();                                 //movement of 2nd input
				px1 = px1 - 1.0;


				while (px1 <= -650)
				{
					px1++;
					py1 = py1 - 0.8;
					if (py1 < -260) {
						d3 = 1;
						glColor3f(1.0, 1.0, 0.0);
						drawBitmapText("0", 777 + px1, 741 + py1, 0);


						glBegin(GL_POLYGON);					//patch
						glColor3f(1.0f, 1.0f, 0.2f);
						glVertex2i(290, 500);
						glVertex2i(290, 560);
						glVertex2i(310, 560);
						glVertex2i(310, 500);
						glEnd();

						glColor3f(0.0f, 0.0f, 0.0f);
						drawBitmapText("0", 300, 510, 0);

						glBegin(GL_POLYGON);				//patch
						glColor3f(1.0f, 1.0f, 0.2f);
						glVertex2i(480, 480);
						glVertex2i(480, 560);
						glVertex2i(530, 560);
						glVertex2i(530, 480);
						glEnd();

						glColor3f(0.0f, 0.0f, 0.0f);
						drawBitmapText("1", 499, 510, 0);

						glPushMatrix();
						glColor3f(d5, d5, 0);
						drawBitmapText("1", 777 + px2, 740 + py2, 0);

						glBegin(GL_POLYGON);							//patch  for clock
						glColor3f(1.0, 1.0, 0.2);
						glVertex2i(323, 810);
						glVertex2i(323, 844);
						glVertex2i(345, 844);
						glVertex2i(345, 810);
						glEnd();
						glColor3f(1.8, 0, 1.5);
						drawBitmapText("CLOCK   PULSE   3   STARTED!!", 170, 813, 0);                                                            //clock pulse 3

						glColor3f(0, 0, 1);
						glBegin(GL_POLYGON);
						glVertex2i(895 + 10 + 30, 860);
						glVertex2i(902 + 10 + 30, 910);                      //input line tri
						glVertex2i(888 + 10 + 30, 910);
						glEnd();

						glColor3f(1, 0, 0);
						drawBitmapText("1", 930, 800, 0);
						glPopMatrix();


						px2 = px2 - 1.0;
						while (px2 <= -650)
						{
							px2++;
							py2 = py2 - 0.8;
							if (py2 < -260)
							{
								d5 = 1;
								glColor3f(1.0, 1.0, 0.0);
								drawBitmapText("1", 777 + px2, 741 + py2, 0);

								glBegin(GL_POLYGON);							//patch
								glColor3f(1.0f, 1.0f, 0.2f);
								glVertex2i(290, 500);
								glVertex2i(290, 560);
								glVertex2i(310, 560);
								glVertex2i(310, 500);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("1", 300, 510, 0);

								glBegin(GL_POLYGON);
								glColor3f(1.0f, 1.0f, 0.2f);			//patch
								glVertex2i(480, 480);
								glVertex2i(480, 560);
								glVertex2i(530, 560);
								glVertex2i(530, 480);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("0", 499, 510, 0);

								glBegin(GL_POLYGON);
								glColor3f(1.0f, 1.0f, 0.2f);			//patch
								glVertex2i(690, 480);						//700,500
								glVertex2i(690, 560);
								glVertex2i(710, 560);
								glVertex2i(710, 480);
								glEnd();

								glColor3f(0.0f, 0.0f, 0.0f);
								drawBitmapText("1", 700, 510, 0);

								glPushMatrix();
								glColor3f(d7, d8, 0);
								drawBitmapText("0", 777 + px3, 740 + py3, 0);

								glBegin(GL_POLYGON);							//patch  for clock
								glColor3f(1.0, 1.0, 0.2);
								glVertex2i(323, 810);
								glVertex2i(323, 844);
								glVertex2i(345, 844);
								glVertex2i(345, 810);
								glEnd();
								glColor3f(0, 0, 0);
								drawBitmapText("CLOCK   PULSE   4   STARTED!!", 170, 813, 0);

								glColor3f(0, 0, 1);
								glBegin(GL_POLYGON);
								glVertex2i(895 + 10 + 30 + 30, 860);
								glVertex2i(902 + 10 + 30 + 30, 910);                      //input line tri
								glVertex2i(888 + 10 + 30 + 30, 910);
								glEnd();

								glColor3f(1, 0, 0);
								drawBitmapText("0", 960, 800, 0);
								glPopMatrix();
								px3 = px3 - 1.0;

								while (px3 < -650) {
									px3++;
									py3 = py3 - 0.8;
									if (py3 < -260) {
										d7 = 1; d8 = 1;
										glColor3f(1.0, 1.0, 0.0);
										drawBitmapText("0", 777 + px3, 741 + py3, 0);

										glBegin(GL_POLYGON);				//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(290, 500);
										glVertex2i(290, 560);
										glVertex2i(310, 560);
										glVertex2i(310, 500);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("0", 300, 510, 0);

										glBegin(GL_POLYGON);					//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(480, 480);
										glVertex2i(480, 560);
										glVertex2i(530, 560);
										glVertex2i(530, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("1", 499, 510, 0);

										glBegin(GL_POLYGON);						//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(690, 480);						//700,500
										glVertex2i(690, 560);
										glVertex2i(710, 560);
										glVertex2i(710, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("0", 700, 510, 0);

										glBegin(GL_POLYGON);					//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(890, 480);						//900,500
										glVertex2i(890, 560);
										glVertex2i(910, 560);
										glVertex2i(910, 480);
										glEnd();

										glColor3f(0.0f, 0.0f, 0.0f);
										drawBitmapText("1", 900, 510, 0);
									}
									if (py3<-800) {

										glBegin(GL_POLYGON);				//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(290, 500);
										glVertex2i(290, 560);
										glVertex2i(310, 560);
										glVertex2i(310, 500);
										glEnd();

										glBegin(GL_POLYGON);					//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(480, 480);
										glVertex2i(480, 560);
										glVertex2i(530, 560);
										glVertex2i(530, 480);
										glEnd();

										glBegin(GL_POLYGON);						//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(690, 480);
										glVertex2i(690, 560);
										glVertex2i(710, 560);
										glVertex2i(710, 480);
										glEnd();

										glBegin(GL_POLYGON);					//patch
										glColor3f(1.0f, 1.0f, 0.2f);
										glVertex2i(890, 480);
										glVertex2i(890, 560);
										glVertex2i(910, 560);
										glVertex2i(910, 480);
										glEnd();

										glBegin(GL_POLYGON);							//patch  for clock
										glColor3f(1.0, 1.0, 0.2);
										glVertex2i(323, 810);
										glVertex2i(323, 844);
										glVertex2i(345, 844);
										glVertex2i(345, 810);
										glEnd();
										glColor3f(1.8, 0, 1.5);
										drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);                                                                  //parallel out
										glColor3f(co1, co2, co3);
										drawBitmapText("0", 280 + cx1, 110 + cy1, 0);

										glColor3f(co1, co2, co3);
										drawBitmapText("1", 480 + cx2, 110 + cy2, 0);

										glColor3f(co1, co2, co3);
										drawBitmapText("0", 680 + cx3, 110 + cy3, 0);

										glColor3f(co1, co2, co3);
										drawBitmapText("1", 930 + cx4, 110 + cy4, 0);

										cx4 += 0.5;
										while (cx4 >= 180) {
											cx4--;
											cx3++;
											while (cx3 >= 405) {
												cx3--;
												cx2 += 1;
												while (cx2 >= 580) {
													cx2--;
													cx1 += 1;
													while (cx1 > 750) {
														cx1--;
														cy1++; cy2++; cy3++; cy4++;

														if (cy1 >= 600) {
															co1 = 1.0; co2 = 1.0;
															glColor3f(0.0f, 0.0f, 0.0f);
															drawBitmapText("1", 868, 687, 0);

															glColor3f(0.0f, 0.0f, 0.0f);
															drawBitmapText("0", 900, 687, 0);

															glColor3f(0.0f, 0.0f, 0.0f);
															drawBitmapText("1", 933, 687, 0);

															glColor3f(0.0f, 0.0f, 0.0f);
															drawBitmapText("0", 960, 687, 0);

														}
													}
												}
											}
										}

									}
								}
							}
						}
					}
				}
			}
		}

		glPopMatrix();

	}
	else if (value == 3) {
		glPushMatrix();
		glColor3f(col1, col2, col3);
		drawBitmapText("1", 108 + popx1, 730 + popy1, 0);
		drawBitmapText("0", 307 + popx2, 730 + popy2, 0);
		drawBitmapText("1", 507 + popx3, 730 + popy3, 0);
		drawBitmapText("0", 707 + popx4, 730 + popy4, 0);

		glColor3f(0, 0, 1);
		drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);

		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(875, 860);
		glVertex2i(882, 910);                      //input line tri
		glVertex2i(868, 910);
		glEnd();

		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 10, 860);
		glVertex2i(902 + 10, 910);                      //input line tri
		glVertex2i(888 + 10, 910);
		glEnd();

		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 10 + 30, 860);
		glVertex2i(902 + 10 + 30, 910);                      //input line tri
		glVertex2i(888 + 10 + 30, 910);
		glEnd();

		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 10 + 30 + 30, 860);
		glVertex2i(902 + 10 + 30 + 30, 910);                      //input line tri
		glVertex2i(888 + 10 + 30 + 30, 910);
		glEnd();

		glColor3f(1, 0, 0);
		drawBitmapText("1", 870, 800, 0);
		drawBitmapText("0", 900, 800, 0);
		drawBitmapText("1", 930, 800, 0);
		drawBitmapText("0", 960, 800, 0);
		glPopMatrix();
		popy1 -= 0.5; popy2 -= 0.5; popy3 -= 0.5; popy4 -= 0.5;
		while (popy1 <= -70) {
			popy1++; popy2++; popy4++; popy3++;
			col1 = 1.9; col2 = 0.1; col3 = 0.2;
			popx1--; popx2--; popx3--; popx4--;
			//parallel out
			if (popx1 <= -30)
			{
				glPushMatrix();
				glColor3f(0, 0, 1);
				drawBitmapText("CLOCK   PULSE   1   STARTED!!", 170, 813, 0);

				glColor3f(coo1, coo2, coo3);
				drawBitmapText("1", 280 + lx1, 110 + ly1, 0);

				glColor3f(coo1, coo2, coo3);
				drawBitmapText("0", 480 + lx2, 110 + ly2, 0);

				glColor3f(coo1, coo2, coo3);
				drawBitmapText("1", 680 + lx3, 110 + ly3, 0);

				glColor3f(coo1, coo2, coo3);
				drawBitmapText("0", 930 + lx4, 110 + ly4, 0);
				glPopMatrix();
				lx4 += 5;
				while (lx4 >= 180) {
					lx4--;
					lx3++;
					while (lx3 >= 405) {
						lx3--;
						lx2 += 1;
						while (lx2 >= 580) {
							lx2--;
							lx1 += 1;
							while (lx1 > 750) {
								lx1--;
								ly1++;  ly2++; ly3++; ly4++;

								if (ly1 >= 600) {
									coo1 = 1.9; coo2 = 0.1; coo3 = 0.2;

									glPushMatrix();
									glColor3f(0.0f, 0.0f, 0.0f);
									drawBitmapText("1", 868, 687, 0);

									glColor3f(0.0f, 0.0f, 0.0f);
									drawBitmapText("0", 900, 687, 0);

									glColor3f(0.0f, 0.0f, 0.0f);
									drawBitmapText("1", 933, 687, 0);

									glColor3f(0.0f, 0.0f, 0.0f);
									drawBitmapText("0", 960, 687, 0);
									glPopMatrix();

								}
							}
						}
					}
				}
			}
		}
	}
	else if (value == 4) {

		glPushMatrix();
		glColor3f(0, 1, 1);
		drawBitmapText("CLOCK   PULSE   STARTED!!", 170, 813, 0);
		glColor3f(coll1, coll2, coll3);
		drawBitmapText("1", 108 + pox1, 770 + poy1, 0);
		drawBitmapText("0", 337 + pox2, 770 + poy2, 0);
		drawBitmapText("1", 537 + pox3, 770 + poy3, 0);
		drawBitmapText("0", 737 + pox4, 770 + poy4, 0);

		glColor3f(1, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2i(875 + 15, 860);
		glVertex2i(882 + 15, 910);                      //input line tri
		glVertex2i(868 + 15, 910);
		glEnd();

		glColor3f(1, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 15 + 10, 860);
		glVertex2i(902 + 15 + 10, 910);                      //input line tri
		glVertex2i(888 + 15 + 10, 910);
		glEnd();

		glColor3f(1, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 15 + 30 + 10, 860);
		glVertex2i(902 + 15 + 30 + 10, 910);                      //input line tri
		glVertex2i(888 + 15 + 30 + 10, 910);
		glEnd();

		glColor3f(1, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2i(895 + 15 + 30 + 30 + 10, 860);
		glVertex2i(902 + 15 + 30 + 30 + 10, 910);                      //input line tri
		glVertex2i(888 + 15 + 30 + 30 + 10, 910);
		glEnd();

		glColor3f(1, 0, 0);
		drawBitmapText("1", 885, 800, 0);
		drawBitmapText("0", 915, 800, 0);
		drawBitmapText("1", 945, 800, 0);
		drawBitmapText("0", 975, 800, 0);

		glPopMatrix();

		poy1 -= 0.3; poy2 -= 0.3; poy3 -= 0.3; poy4 -= 0.3;

		while (poy1 <= -25) {
			poy1++; poy2++; poy4++; poy3++;
			coll1 = 0.0; coll2 = 0.1; coll3 = 0.0;
			pox1--; pox2--; pox3--; pox4--;

			if (pox4 < -30) {

				glColor3f(tt1, tt2, tt3);
				drawBitmapText("1", 900 + ttx, 490 + tty, 0);
				ttx += 2;

				while (ttx > 20) {

					ttx--;
					tty++;

					if (tty > 100) {
						tt1 = 0; tt2 = 0.1; tt3 = 0;
						glColor3f(1, 1, 1);
						drawBitmapText("1", 885, 685, 0);

						glPushMatrix();

						glColor3f(ts1, ts2, ts3);
						drawBitmapText("0", 900 + tsx, 490 + tsy, 0);

						glPopMatrix();
						tsx += 2;
						while (tsx > 20) {
							tsx--;
							tsy++;

							if (tsy > 100) {
								ts1 = 0; ts2 = 0.1; ts3 = 0;
								glColor3f(1, 1, 1);
								drawBitmapText("0", 915, 685, 0);

								glPushMatrix();
								glColor3f(kl1, kl2, kl3);
								drawBitmapText("1", 900 + lsx, 490 + lsy, 0);
								glPopMatrix();
								lsx += 2;
								while (lsx > 20) {
									lsx--; lsy += 0.5;

									if (lsy > 100) {
										kl1 = 0; kl2 = 0.1; kl3 = 0;
										glColor3f(1, 1, 1);
										drawBitmapText("1", 945, 685, 0);

										glPushMatrix();
										glColor3f(ml1, ml2, ml3);
										drawBitmapText("0", 900 + msx, 490 + msy, 0);
										glPopMatrix();
										msx += 2;
										while (msx > 20) {
											msx--;
											msy += 0.5;

											if (msy > 100) {
												ml1 = 0; ml2 = 0.1; ml3 = 0;
												glColor3f(1, 1, 1);
												drawBitmapText("0", 975, 685, 0);

											}
										}

									}
								}

							}

						}
					}

				}

			}
		}

	}
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(11500, 1150);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	wind = glutCreateWindow("INTRODUCTION TO SHIFT REGISTERS");
	createmenu();
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
}