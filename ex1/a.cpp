#include<GL/glut.h>

void display() {
	//POINTS
	glBegin(GL_POINTS);
	glVertex2f(310.0, 410.0);
	glVertex2f(330.0, 410.0);
	glVertex2f(320.0, 420.0);
	glEnd();
	//POLYGON
	glBegin(GL_POLYGON);
	glVertex2f(120.0, 100.0);
	glVertex2f(180.0, 100.0);
	glVertex2f(180.0, 10.0);
	glVertex2f(120.0, 10.0);
	glEnd();
	//LINES
	glBegin(GL_LINES);
    glVertex2f(5, 100);
    glVertex2f(75, 100);
    glVertex2f(35, 150);
    glVertex2f(35, 50);
	glEnd();
	//LINES-STRIP
	glBegin(GL_LINE_STRIP);
    glVertex2f(60, 360);
    glVertex2f(80, 350);
    glVertex2f(100, 360);
    glVertex2f(120, 350);
    glVertex2f(140, 360);
    glVertex2f(160, 350);
    glVertex2f(180, 360);
    glVertex2f(200, 350);
    glVertex2f(220, 360);
    glVertex2f(240, 350);
    glVertex2f(260, 360);
    glVertex2f(280, 350);
    glVertex2f(300, 360);
	glEnd();
	//LINE-LOOP
	glBegin(GL_LINE_LOOP);
    glVertex2f(110, 420);
    glVertex2f(145, 380 );
    glVertex2f(120, 465);
    glVertex2f(175, 445);
	glEnd();
	//TRIANGLE
	glBegin(GL_TRIANGLES);
    glVertex2f(220.0, 10.0);
	glVertex2f(260.0, 100.0);
	glVertex2f(280.0, 10.0);
	//glVertex2f(380.0, 10.0);
	//glVertex2f(400.0, 100.0);
	//glVertex2f(420.0, 10.0);
	glEnd();
	//TRIANGLE-STRIP
	glBegin(GL_TRIANGLE_STRIP);	
	glVertex2f(220.0, 150.0);
    glVertex2f(260.0, 200.0);
	glVertex2f(280.0, 150.0);
	glVertex2f(280.0, 150.0);
	glVertex2f(300.0, 200.0);
	glVertex2f(320.0, 150.0);
	glVertex2f(320.0, 150.0);
	glVertex2f(360.0, 200.0);
	glVertex2f(380.0, 150.0);
	glEnd();
	//TRIANGLE-FAN
	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(20, 240); 
    glVertex2f(70, 290); 
    glVertex2f(120, 240); 
    glVertex2f(70, 190);
	glEnd();
	//QUADS
	glBegin(GL_QUADS);
    glVertex2f(280, 220); 
    glVertex2f(220, 220); 
    glVertex2f(240, 280); 
    glVertex2f(260, 280);
    glEnd();
    //QUADS-STRIP
    glBegin(GL_QUAD_STRIP);
   	glVertex2f(320, 220); 
    glVertex2f(380, 220); 
    glVertex2f(360, 280); 
    glVertex2f(340, 280);
    
    glEnd();
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Output Primitives");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
	return 0;
}
