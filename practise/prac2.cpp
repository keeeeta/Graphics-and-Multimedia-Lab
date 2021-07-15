#include<GL/glut.h> 
void display() 
{  
	glClear(GL_COLOR_BUFFER_BIT); 		
	glBegin(GL_POLYGON);
	//triangle
	glVertex2f(0.0f,  0.5f);
    glVertex2f(0.5f, -0.5f); 
    glVertex2f(-0.5f, -0.5f);  
	/*Rectanlge
	glVertex2f(-0.5, -0.5); 
	glVertex2f(-0.5, 0.5); 
	glVertex2f(0.5, 0.5); 
	glVertex2f(0.5, -0.5); */
	glEnd();
	glFlush(); 
} 
void init()  
{ 
	glClearColor(0.0, 0.0, 0.0, 0.0); 
	glColor3f(1.0,0.0,0.42); 
} 
int main(int argc, char** argv) 
{ 
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	init();
	glutMainLoop(); 
	return 0;
}
