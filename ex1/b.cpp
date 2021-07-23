#include <GL/glut.h>
 
void myInit (void)
 
{
 	glClearColor(0.0,0.0,0.0,0.0); 
 	 glPointSize(9.0);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0, 500.0, 0.0, 400.0); 
}
 
 
void myDisplay(void)
 
{
 
     glClear(GL_COLOR_BUFFER_BIT); 
     //STARS
     glBegin(GL_POINTS);
	 glVertex2f(80.0, 250.0);
	 glVertex2f(40.0, 350.0);
	 glVertex2f(100.0, 320.0);
	 glVertex2f(180.0, 290.0);
	 glVertex2f(120.0, 350.0);
	 glVertex2f(155.0, 320.0);
	 glVertex2f(540.0, 350.0);
	 glVertex2f(245.0, 320.0);
	 glVertex2f(290.0, 345.0);
	 glVertex2f(220.0, 250.0);
	 glVertex2f(540.0, 350.0);
	 glVertex2f(400.0, 320.0);
	 glVertex2f(480.0, 290.0);
	 glVertex2f(520.0, 350.0);
	 glVertex2f(455.0, 320.0);
	 glEnd();	 
	 //FRONT ROOF
     glColor3f(0.627, 0.322, 0.176);
	 glBegin(GL_TRIANGLES);
	 glVertex2f(125.0, 170.0);
	 glVertex2f(175.0, 240.0);
	 glVertex2f(225.0, 170.0); 
	 glEnd();
	 // CHIMNEY
	 glColor3f(0.545, 0.271, 0.075);
     glShadeModel(GL_SMOOTH);
	 glBegin(GL_QUADS);
	 glVertex2f(300.0, 240.0);
	 glVertex2f(300.0, 260.0);
	 glVertex2f(320.0, 260.0);
	 glVertex2f(320.0, 240.0); 
	 glEnd();
	 //SIDE ROOF
	 glColor3f(0.545, 0.271, 0.075);
     glShadeModel(GL_SMOOTH);
	 glBegin(GL_QUADS);
	 glVertex2f(225.0, 170.0);
	 glVertex2f(175.0, 240.0);
	 glVertex2f(325.0, 240.0);
	 glVertex2f(375.0, 170.0); 
	 glEnd();
     // FRONT WALL
     glColor3f(0.627, 0.322, 0.176);
	 glBegin(GL_POLYGON);
	 glVertex2f(125.0, 70.0);
	 glVertex2f(125.0, 170.0);
	 glVertex2f(225.0, 170.0);
	 glVertex2f(225.0, 70.0);
	 glEnd();
	 // DOOR
	 glColor3f(0.502, 0.000, 0.000);
	 glBegin(GL_POLYGON);
	 glVertex2f(165.0, 70.0);
	 glVertex2f(165.0, 110.0);
	 glVertex2f(185.0, 110.0);
	 glVertex2f(185.0, 70.0);
	 glEnd();
	 // DOOR KNOB
	 glColor3f(0.309804,0.184314,0.184314);
	 glBegin(GL_POINTS);
	 glVertex2f(180.0, 85.0);
	 glEnd();
	 // SIDE WALL
     glColor3f(0.545, 0.271, 0.075);
	 glBegin(GL_POLYGON);
	 glVertex2f(225.0, 70.0);
	 glVertex2f(225.0, 170.0);
	 glVertex2f(375.0, 170.0);
	 glVertex2f(375.0, 70.0);
	 glEnd();
	 
	 glColor3f(0.000, 0.749, 1.000);
	 glBegin(GL_POLYGON);
	 glVertex2f(275.0, 105.0);
	 glVertex2f(275.0, 145.0);
	 glVertex2f(325.0, 145.0);
	 glVertex2f(325.0, 105.0);
	 glEnd();
	 
	 //GROUND
     glColor3f(0.137255,0.556863,0.137255);
	 glBegin(GL_POLYGON);
	 glVertex2f(0.0, 0.0);
	 glVertex2f(0.0, 70.0);
	 glVertex2f(600.0, 70.0);
	 glVertex2f(600.0, 0.0);
	 glEnd();
	 // BORDER LINES
	 glColor3f(0.502, 0.000, 0.000);
	 glLineWidth(9.0);
	 glBegin(GL_LINE_LOOP);
	 glVertex2f(125.0, 170.0);
	 glVertex2f(175.0, 240.0);
	 glVertex2f(225.0, 170.0);
	 glEnd();
	 
	 glColor3f(0.502, 0.000, 0.000);
	 glLineWidth(9.0);
	 glBegin(GL_LINE_LOOP);
	 glVertex2f(225.0, 170.0);
	 glVertex2f(175.0, 240.0);
	 glVertex2f(325.0, 240.0);
	 glVertex2f(375.0, 170.0);
	 glEnd();
	 
	 glColor3f(0.502, 0.000, 0.000);
	 glBegin(GL_LINE_STRIP);
	 glVertex2f(125.0, 170.0);
	 glVertex2f(125.0, 70.0);
	 glVertex2f(225.0, 70.0);
	 glVertex2f(225.0, 170.0);	 
	 glEnd();
	 
	 glColor3f(0.502, 0.000, 0.000);
	 glBegin(GL_LINE_STRIP);
	 glVertex2f(225.0, 70.0);
	 glVertex2f(375.0, 70.0);
	 glVertex2f(375.0, 170.0);	 
	 glEnd();
	 
	 glColor3f(0.502, 0.000, 0.000);
	 glBegin(GL_LINE_STRIP);
	 glVertex2f(300.0, 240.0);
	 glVertex2f(300.0, 260.0);
	 glVertex2f(320.0, 260.0);
	 glVertex2f(320.0, 240.0); 
	 glEnd();
	 
	 glColor3f(0,0,0);
	 glBegin(GL_LINE_LOOP);
	 glVertex2f(275.0, 105.0);
	 glVertex2f(275.0, 145.0);
	 glVertex2f(325.0, 145.0);
	 glVertex2f(325.0, 105.0);
	 glEnd();
	 glColor3f(0,0,0);
	 
	 glBegin(GL_LINES);
	 glVertex2f(300.0, 105.0);
	 glVertex2f(300.0, 145.0);
	 glVertex2f(275.0, 125.0);
	 glVertex2f(325.0, 125.0);
	 glEnd();
	 
	 glFlush(); 
 
}
int main (int argc, char **argv)
{
 
     glutInit (&argc, argv);
     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize (800, 600);
     glutInitWindowPosition (10, 10);
     glutCreateWindow ("House"); 
     glutDisplayFunc (myDisplay);
     myInit();
     glutMainLoop(); 
     return 0;
}


