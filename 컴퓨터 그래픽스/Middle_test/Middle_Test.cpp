#include <glut.h>
#include <glu.h>
#include <gl.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



GLfloat shape[5] = { 0,0,0,0,0 };
GLfloat Color[3] = { 1,1,1 };
GLfloat movement = 0;


void MyDispay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3fv(Color);
	if (shape[0] == 1) {
		glutSolidTeapot(0.5);
	}
	else if(shape[1] == 1) {
		glutSolidSphere(0.5, 30, 30);
	}
	else if (shape[2] == 1) {
		glutSolidTorus(0.1, 0.3, 40, 40);
	}
	else if (shape[3] == 1) {
		glutSolidTeapot(0.5);
	}
	else if (shape[4] == 1) {
		glBegin(GL_POLYGON);
		glVertex3f(0, movement + (GLfloat)0.2, 0);
		glVertex3f((GLfloat)(-1) * 0.15, movement, 0);
		glVertex3f((GLfloat)0.15, movement, 0);
		glEnd();
	}

	glFlush();
	
}

void userinit() {
	glClear(GL_COLOR_BUFFER_BIT);
}

void MySpecial(int key, int x, int y) {
	switch (key)
	{
	case GLUT_KEY_F5:
		shape[1] = shape[2] = shape[3] = shape[4] = 0;
		shape[0] = 1;

		Color[2] = 0;
		Color[1] = Color[0] = 1;
		
		break;
	default:
		break;
	}
	glutPostRedisplay();
}



void MyShapeMenu(int entryID) {
	switch (entryID)
	{

	case 11: //원구 초록색
		shape[0] = shape[2] = shape[3] = shape[4] = 0;
		shape[1] = 1;

		Color[1] = 1;
		Color[0] = Color[2] = 0;
		break;

	case 12: //원환체 빨간색 도너츠
		shape[0] = shape[1] = shape[3] = shape[4] = 0;
		shape[2] = 1;

		Color[0] = 1;
		Color[1] = Color[2] = 0;
		break;
	
	case 13: //노랑주 노랑 주전자 모양
		shape[1] = shape[2] = shape[3] = shape[4] = 0;
		shape[0] = 1;

		Color[0] = 0;
		Color[1] = Color[0] = 1;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

void MyMainMenu(int entryID) {
	switch (entryID)
	{
	case 2: // 색상 변경
		Color[0] = (GLfloat)(rand() % 1000) / 1000;
		Color[1] = (GLfloat)(rand() % 1000) / 1000;
		Color[2] = (GLfloat)(rand() % 1000) / 1000;
		printf("R : %f, G : %f, B : %f\n", Color[0], Color[1], Color[2]);
		glutPostRedisplay();
		break;

	case 3://이동
		shape[0] = shape[1] = shape[2] = shape[3] = 0;
		shape[4] = 1;
		Color[0] = Color[1] = Color[2] = 1;
		movement = 0;
		glutPostRedisplay();
		break;

	case 4:
		exit(0);	
	default:
		break;
	}
}

void MyInitMenu() {
	GLint MyShapeID = glutCreateMenu(MyShapeMenu);
	glutAddMenuEntry("A", 11);
	glutAddMenuEntry("B", 12);
	glutAddMenuEntry("C", 13);
	GLint MyMainMenuID = glutCreateMenu(MyMainMenu);
	glutAddSubMenu("Shape", 1);
	glutAddMenuEntry("Color", 2);
	glutAddMenuEntry("Move", 3);
	glutAddMenuEntry("Exit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

}
 
void MyTimer(int Value) {
	movement += (GLfloat)0.1;
	glutPostRedisplay();
	glutTimerFunc(1500, MyTimer, 1);
}


int main(int argc, char** argv) {
	srand(time(NULL));
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(400, 500);
	glutInitWindowPosition(20, 40);
	glutCreateWindow("김남주 20192336 중간고사");

	userinit();
	glutDisplayFunc(MyDispay);
	glutSpecialFunc(MySpecial);
	glutTimerFunc(1500, MyTimer, 1);
	MyInitMenu();



	glutMainLoop();
	return 0;
}