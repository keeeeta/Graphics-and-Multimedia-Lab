#include <gl/glut.h>
#include <stdio.h>

int x1, y1, x2, y2;

int arrx1[500], arry1[500], arrx2[500], arry2[500];

void myInit() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-200, 200, -200, 200);
}

void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glColor3ub(200, 100, 200);
	glVertex2i(x, y);
	glEnd();
}

void draw_line(int x1, int x2, int y1, int y2) {
	int dx, dy, i, e;
	int incx, incy, inc1, inc2;
	int x, y;

	dx = x2 - x1;
	dy = y2 - y1;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incx = 1;
	if (x2 < x1) incx = -1;
	incy = 1;
	if (y2 < y1) incy = -1;
	x = x1; y = y1;
	if (dx > dy) {
		draw_pixel(x, y);
		e = 2 * dy - dx;
		inc1 = 2 * (dy - dx);
		inc2 = 2 * dy;
		for (i = 0; i < dx; i++) {
			if (e >= 0) {
				y += incy;
				e += inc1;
			}
			else
				e += inc2;
			x += incx;
			draw_pixel(x, y);
		}

	}
	else {
		draw_pixel(x, y);
		e = 2 * dx - dy;
		inc1 = 2 * (dx - dy);
		inc2 = 2 * dx;
		for (i = 0; i < dy; i++) {
			if (e >= 0) {
				x += incx;
				e += inc1;
			}
			else
				e += inc2;
			y += incy;
			draw_pixel(x, y);
		}
	}
}

void myDisplay() {
	for (int i = 0; i < 8; i++)
	{
		x1 = arrx1[i];
		x2 = arrx2[i];
		y1 = arry1[i];
		y2 = arry2[i];
		draw_line(x1, x2, y1, y2);
		glFlush();
	}

}

int main(int argc, char** argv) {
	/*x1_arr[0] = 10;
	y1_arr[0] = 10;
	x2_arr[0] = 50;
	y2_arr[0] = 20;

	x1_arr[1] = 20;
	y1_arr[1] = 20;
	x2_arr[1] = 30;
	y2_arr[1] = 60;

	x1_arr[2] = -10;
	y1_arr[2] = -10;
	x2_arr[2] = -50;
	y2_arr[2] = -20;

	x1_arr[3] = -20;
	y1_arr[3] = -20;
	x2_arr[3] = -30;
	y2_arr[3] = -60;

	x1_arr[4] = -10;
	y1_arr[4] = 10;
	x2_arr[4] = -50;
	y2_arr[4] = 20;

	x1_arr[5] = -20;
	y1_arr[5] = 20;
	x2_arr[5] = -30;
	y2_arr[5] = 60;

	x1_arr[6] = 10;
	y1_arr[6] = -10;
	x2_arr[6] = 50;
	y2_arr[6] = -20;

	x1_arr[7] = 20;
	y1_arr[7] = -20;
	x2_arr[7] = 30;
	y2_arr[7] = -60;*/
	for (int i = 0; i <8; i++)
	{
		printf("Enter the points for line: %d\n", i + 1);
		scanf_s(" (%d,%d),(%d,%d)", &x1, &y1, &x2, &y2);
		arrx1[i] = x1;
		arrx2[i] = x2;
		arry1[i] = y1;
		arry2[i] = y2;
	}




	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();

	return 0;
}