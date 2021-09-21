/*
*
*
*/

#include <math.h>		
#include <stdio.h>
#include <stdlib.h>		
#include "Glut.h"

int z1 = 0;
int z2 = 0;
int z3 = 0;
int z4 = 0;
int z5 = 0;
int z6 = 0;

int counter = 0;

int RunMode = 1;
int skok = 0;

double xPositionL = 5.5;
double xPositionD = 6;
double yPositionL = 3.5;
double yPositionH = 5.0;


double xposN2 = 3;
double yposN2 = 17.25;

double xposV1 = 10.5;
double yposV1 = 15;
double xSpeedV1 = 0.005;


double xSpeedN2 = 0.005;

double yspeedY = 0.005;

const double Xmin = 0.0, Xmax = 20.0;
const double Ymin = 0.0, Ymax = 20.0;

void myKeyboardFunc(unsigned char key, int x, int y)
{
	switch (key) {
	case 27:	// Escape key
		exit(1);
		break;
	}
}

static void KeyLeft(void) {
	if (xPositionL > 0) {
		xPositionL -= 0.5;
		xPositionD -= 0.5;
	}

}

static void KeyRight(void) {
	if (xPositionD <= 20) {
		xPositionD += 0.5;
		xPositionL += 0.5;
	}
}
static void KeyUp(void) {
	if (yPositionH <= 20) {
		yPositionH += 1.5;
		yPositionL += 1.5;
	}
}
static void KeyDown(void) {
	if (yPositionL >= 0) {
		yPositionH -= 0.5;
		yPositionL -= 0.5;
	}
}





void mySpecialKeyFunc(int key, int x, int y)

{
	switch (key) {
	case GLUT_KEY_LEFT:
		KeyLeft();
		break;
	case GLUT_KEY_RIGHT:
		KeyRight();
		break;
	case GLUT_KEY_UP:
		//KeyUp();
		break;
	case GLUT_KEY_DOWN:
		KeyDown();
		break;
	}

}

static void Trambolina() {
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(2.0, 3.0);
	glVertex2f(20.0, 3.0);
	glEnd();
}

static void Poligon() {
	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(2.0, 0.0);
	glVertex2f(10.0, 0.0);
	glVertex2f(10.0, 3.0);
	glVertex2f(2.0, 3.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(12.0, 0.0);
	glVertex2f(20.0, 0.0);
	glVertex2f(20.0, 3.0);
	glVertex2f(12.0, 3.0);
	glEnd();




}

static void Precke() {
	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(2.0, 16.0);
	glVertex2f(8.0, 16.0);
	glVertex2f(8.0, 17.0);
	glVertex2f(2.0, 17.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(2.0, 12.0);
	glVertex2f(8.0, 12.0);
	glVertex2f(8.0, 13.0);
	glVertex2f(2.0, 13.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(2.0, 8.0);
	glVertex2f(8.0, 8.0);
	glVertex2f(8.0, 9.0);
	glVertex2f(2.0, 9.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(13.0, 16.0);
	glVertex2f(19.0, 16.0);
	glVertex2f(19.0, 17.0);
	glVertex2f(13.0, 17.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(13.0, 12.0);
	glVertex2f(19.0, 12.0);
	glVertex2f(19.0, 13.0);
	glVertex2f(13.0, 13.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(13.0, 8.0);
	glVertex2f(19.0, 8.0);
	glVertex2f(19.0, 9.0);
	glVertex2f(13.0, 9.0);
	glEnd();

}

static void Igrac() {
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(xPositionL, yPositionL);
	glVertex2d(xPositionD, yPositionL);
	glVertex2d(xPositionD, yPositionH);
	glVertex2d(xPositionL, yPositionH);
	glEnd();
}

static void Zeton1() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 3.0 + r * cos(a);
		double y = 18.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton2() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 5.0 + r * cos(a);
		double y = 14.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton3() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 4.0 + r * cos(a);
		double y = 10.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton4() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 15.0 + r * cos(a);
		double y = 18.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}


static void Zeton5() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 19.0 + r * cos(a);
		double y = 14.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}
static void Zeton6() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 13.5 + r * cos(a);
		double y = 10.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton1C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 3.0 + r * cos(a);
		double y = 18.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton2C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 5.0 + r * cos(a);
		double y = 14.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton3C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 4.0 + r * cos(a);
		double y = 10.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void Zeton4C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 15.0 + r * cos(a);
		double y = 18.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}


static void Zeton5C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 19.0 + r * cos(a);
		double y = 14.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}
static void Zeton6C() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.5;
		double x = 13.5 + r * cos(a);
		double y = 10.0 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}



static void Neprijatelj2() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.15;
		double x = xposN2 + r * cos(a);
		double y = yposN2 + r * sin(a);
		glVertex2f(x, y);
	}
	glEnd();
}

static void kretanjeNeprijatelj2() {
	double nextX2 = xposN2 + xSpeedN2;//* cos(angle);

	if (nextX2 <= 2) {
		xSpeedN2 += 0.001;

	}

	else if (nextX2 >= 8) {
		xSpeedN2 -= 0.001;
	}
	xposN2 = nextX2;
}

static void NeprijateljV1() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++) {
		double a = 2 * 3.14 * i / 200;
		double r = 0.15;
		double xv1 = xposV1 + r * cos(a);
		double yv1 = yposV1 + r * sin(a);
		glVertex2f(xv1, yv1);
	}
	glEnd();

}
static void kretanjeNeprijateljV1() {
	double nextYV1 = yposV1 + xSpeedV1;//* cos(angle);

	if (nextYV1 <= 12) {
		xSpeedV1 += 0.001;

	}

	else if (nextYV1 >= 17) {
		xSpeedV1 -= 0.001;
	}
	yposV1 = nextYV1;
}






static void Skok() {
	double nextYL = yPositionL + yspeedY;
	double nextYH = yPositionH + yspeedY;

	if (nextYH <= 4 /*&& xPositionD == 13 && xPositionL >= 10*/) {

		yspeedY += 0.00001;

	}


	else if ((xPositionL >= 2 && xPositionD <= 8 && yPositionH >= 7 && yPositionH <= 10) || yPositionH >= 20 || (xPositionL >= 13 && xPositionD <= 19 && yPositionH >= 7 && yPositionH <= 10)) {

		yspeedY -= 0.00001;

		//odavde krece da ide na precke


	}

	if (xPositionL >= 2 && xPositionD <= 8 && yPositionL >= 18) {
		nextYL = 17;
		nextYH = 18.5;
	}
	if (xPositionL >= 13 && xPositionD <= 19 && yPositionL >= 18) {
		nextYL = 17;
		nextYH = 18.5;
	}

	if (xPositionL >= 2 && xPositionD <= 8 && yPositionH >= 13 && yPositionH <= 16) {
		nextYL = 13;
		nextYH = 14.5;
	}

	if (xPositionL >= 13 && xPositionD <= 19 && yPositionH >= 13 && yPositionH <= 16) {
		nextYL = 13;
		nextYH = 14.5;
	}

	if (xPositionL >= 2 && xPositionD <= 8 && yPositionH >= 9.5 && yPositionH <= 13.5) {
		nextYL = 9;
		nextYH = 10.5;
	}

	if (xPositionL >= 13 && xPositionD <= 19 && yPositionH >= 9.5 && yPositionH <= 13.5) {
		nextYL = 9;
		nextYH = 10.5;
	}

	//else if(xPositionL>=2&&xPositionD<=8&&yPositionH>=16)

	yPositionL = nextYL;
	yPositionH = nextYH;

}

static void kretanjePoPlatformi() {
	if (xPositionD >= 12 && xPositionL <= 10) {
		skok = 0;


	}
}


void drawScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	Igrac();
	Trambolina();
	Poligon();
	Precke();
	Igrac();

	//za uzimanje zetona
	if (xPositionL >= 2 && xPositionL <=3 && yPositionL >= 17) {
		z1 = 1;
	}

	if (z1 == 0) {
		Zeton1();

	}
	else {
		Zeton1C();
		counter++;

	}

	//z2
	if (xPositionL >= 4 && xPositionL <=5 && yPositionL >= 13 && yPositionL <= 15 && yPositionH >= 13 && yPositionH <= 15) {
		z2 = 1;
	}

	if (z2 == 0) {
		Zeton2();
	}
	else {
		Zeton2C();
		counter++;
	}

	//z3
	if (xPositionL >= 3 && xPositionD <=4 && yPositionL >= 9 && yPositionL <=13 && yPositionH >= 9 && yPositionH <= 13 ) {
		z3 = 1;
	}

	if (z3 == 0) {
		Zeton3();
	}
	else {
		Zeton3C();
		counter++;
	}

	//z4
	if (xPositionD >= 15 && xPositionD <= 16 && yPositionL >= 17) {
		z4 = 1;
	}

	if (z4 == 0) {
		Zeton4();
	}
	else {
		Zeton4C();
		counter++;
	}
	//z5
	if (xPositionD >= 18 && xPositionD <= 19 && yPositionL >= 13 && yPositionL <= 15 && yPositionH >= 13 && yPositionH && yPositionH <= 15) {
		z5 = 1;
	}

	if (z5 == 0) {
		Zeton5();
	}
	else {
		Zeton5C();
		counter++;
	}

	//z6
	if (xPositionD >= 14 && xPositionD <= 15 && yPositionL >= 9 && yPositionL <= 13 && yPositionH >= 9 && yPositionH <= 13) {
		z6 = 1;
	}

	if (z6 == 0) {
		Zeton6();
	}
	else {
		Zeton6C();
		counter++;
	}

	//pogibja
	if ((xPositionL   <= xposN2 && xPositionD  >= xposN2  && yPositionH  >= 17.5 && yPositionL - 0.3  <= yposN2) || (xPositionL <= xposV1 && xPositionD >= xposV1 && yPositionH >= yposV1 && yPositionL - 0.3 <= yposV1)) {
		RunMode = 0;

	}

	if (z1 == 1 && z2 == 1 && z3 == 1 && z4 == 1 && z5 == 1 && z6 == 1) {
		RunMode = 0;
	}
	NeprijateljV1();
	kretanjeNeprijateljV1();

	Neprijatelj2();
	kretanjeNeprijatelj2();

	Skok();
	//kretanjePoPlatformi();

	glFlush();
	glutSwapBuffers();

	if (RunMode == 1) {
		glutPostRedisplay();
	}



}

void initRendering()
{
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);
}

void resizeWindow(int w, int h)
{
	double scale, center;
	double windowXmin, windowXmax, windowYmin, windowYmax;

	glViewport(0, 0, w, h);

	w = (w == 0) ? 1 : w;
	h = (h == 0) ? 1 : h;
	if ((Xmax - Xmin) / w < (Ymax - Ymin) / h) {
		scale = ((Ymax - Ymin) / h) / ((Xmax - Xmin) / w);
		center = (Xmax + Xmin) / 2;
		windowXmin = center - (center - Xmin) * scale;
		windowXmax = center + (Xmax - center) * scale;
		windowYmin = Ymin;
		windowYmax = Ymax;
	}
	else {
		scale = ((Xmax - Xmin) / w) / ((Ymax - Ymin) / h);
		center = (Ymax + Ymin) / 2;
		windowYmin = center - (center - Ymin) * scale;
		windowYmax = center + (Ymax - center) * scale;
		windowXmin = Xmin;
		windowXmax = Xmax;
	}

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(windowXmin, windowXmax, windowYmin, windowYmax, -1, 1);

}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowPosition(10, 60);
	glutInitWindowSize(360, 360);

	//preimenovati u Kolokvijum_ime_prezime (npr. Kolokvijum_Tijana_Sustersic)
	glutCreateWindow("Nikola_Janjic_Mappy");

	initRendering();

	glutKeyboardFunc(myKeyboardFunc);
	glutSpecialFunc(mySpecialKeyFunc);


	glutReshapeFunc(resizeWindow);


	glutDisplayFunc(drawScene);

	glutMainLoop();

	return(0);
}

