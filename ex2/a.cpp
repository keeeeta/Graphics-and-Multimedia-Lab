#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
float x1,x2,y1,y2,m;
 
void display(void)
{
	float dy,dx,step,x,y,k,Xin,Yin;
	//Calculate dx, dy from the given input.
	dx=x2-x1;
	dy=y2-y1; 
	m = dy/dx;
	printf("Slope : %f",m);
	//implementation of DDA algorithm
	// calculating the number of steps
	if(abs(dx)> abs(dy))
	{
	step = abs(dx);
	}
	else
	{
	step = abs(dy);
	}
	Xin = dx/step;
	Yin = dy/step; 
	x= x1;
	y=y1;
	if(m>1)
	{
		glColor3f(0.000, 0.749, 1.000);
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd(); 
		for (k=1 ;k<=step;k++)
		{	
			x= (1/m) + x;
			y= 1 + y;
			glColor3f(0.000, 0.749, 1.000); 
			glBegin(GL_POINTS);
			glVertex2i(x,y);
			glEnd();
		}	
	}
	if(abs(m)==1)
	{
		glColor3f(0.000, 0.749, 1.000);
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd(); 
		for (k=1 ;k<=step;k++)
		{	
			x= 1+ x ;
			y= 1 + y;
			glColor3f(0.000, 0.749, 1.000); 
			glBegin(GL_POINTS);
			glVertex2i(x,y);
			glEnd();
		}	
	}
	if(abs(m)>0 && abs(m)<1)
	{
		glColor3f(0.000, 0.749, 1.000);
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd(); 
		for (k=1 ;k<=step;k++)
		{	
			x= 1+ x;
			y= m + y;
			glColor3f(0.000, 0.749, 1.000); 
			glBegin(GL_POINTS);
			glVertex2i(x,y);
			glEnd();
		}	
	}
	if (m < -1)
	{
		glColor3f(0.000, 0.749, 1.000);
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd(); 
		for (k=1 ;k<=step;k++)
		{	
			x=x-(1/m) ;
			y= y - m;
			glColor3f(0.000, 0.749, 1.000); 
			glBegin(GL_POINTS);
			glVertex2i(x,y);
			glEnd();
		}
	
	
	}
	glFlush();
}
 
void init(void)
{
	glClearColor(0.7,0.7,0.7,0.7);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100,100,-100,100);
}
 
int main(int argc, char** argv) 
{
//Input for x cordinates and y cordinates
printf("Enter the value of x1 : ");
scanf("%f",&x1);
printf("Enter the value of y1 : ");
scanf("%f",&y1);
printf("Enter the value of x2 : ");
scanf("%f",&x2);
printf("Enter the value of y2 : ");
scanf("%f",&y2);
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (500,500);
glutCreateWindow ("DDA Line Algorithm");
init();
glutDisplayFunc(display);
glutMainLoop();
 
return 0;
}
