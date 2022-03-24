피자만들기
#include <stdio.h>
#include <glut.h>  
#include <glu.h> 
#include <gl.h> 
#include <math.h>

#define GL_PI 3.1415f//원주율은 3.14는 원 둘레 /지름이다.

static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);//(red, green, blue)순이다.
	/*printf("디스플레이 콜백 시작 \n");
	printf("디스플레이 콜백 끝\n");*/

	glBegin(GL_TRIANGLE_FAN);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f); //V0
	glVertex2f(0.0f, -1.0f);//V1
	glVertex2f(1.0f, 0.0f);//V2

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 1.0f);//V3

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);//V4

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);//V5

	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glEnd();
	glutSwapBuffers();//double 사용시
}

void MyReshape(int w, int h) {
	printf("리세이프 콜백 시작\n");
	printf("리세이프 콜백 끝\n");
} //창에 맞게 조정하는 기능, 비율조정

void MyKeyboard(unsigned char KeyPressed, int X, int Y) {

}

void MySpecial(int key, int x, int y) {

}

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {

}

void MyMouseMove(GLint X, GLint Y) {

}

void MyIdle() {

}
void MyTimer(int Value) {

}

void MenuProc(int entryID) {

}

void MenuFunc() {

}

int width, height;

void initUse() {

}//일반 사용자 

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	initUse();

	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);//버퍼2개
	//glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_SINGLE); -> 자기혼자 계산하고 처리함.

	//glutInitWindowSize(width, height);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("제목");

	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);

	/*glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(MySpecial);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle);
	glutTimerFunc(40, MyTimer, 1);

	MenuFunc();*/

	glutMainLoop();
	return 0;
}