#include<GL/glut.h>

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.2, 0.0);
	glVertex3f(0.5, 0.2, 0.0);
	glVertex3f(0.25, -0.05, 0.0);
	glVertex3f(0.35, -0.42, 0.0);
	glVertex3f(0.0, -0.2, 0.0);
	glVertex3f(-0.35, -0.42, 0.0);
	glVertex3f(-0.25, -0.05, 0.0);
	glVertex3f(-0.5, 0.2, 0.0);
	glVertex3f(-0.15, 0.2, 0.0);
	glVertex3f(0.0, 0.55, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Star");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}