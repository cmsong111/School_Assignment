/*
날  짜 :
작성자 :
파일명 :
주  제 : 왜곡 방지 리세이프가 적용된 기본 소스
*/

#include <glut.h>  
#include <glu.h> 
#include <gl.h> 

#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>

int menuValue, sizeMenu, colorMenu, shapeMenu;
double sizeValue = 0.5;

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	if (colorMenu == 31)
		glColor3f(1.0f, 0.0f, 0.0f);
	else if (colorMenu == 32)
		glColor3f(0.0f, 1.0f, 0.0f);
	else if (colorMenu == 33)
		glColor3f(0.0f, 0.0f, 1.0f);
	//else
		//glColor3f(1.0f, 1.0f, 0.0f); -> 자꾸 네모가 생겨버리기 때문에 주석처리함


	if (sizeMenu == 41) {
		sizeValue += 0.1;
		sizeMenu = 0;
	}
	else if (sizeMenu == 42) {
		sizeValue -= 0.1;
		sizeMenu = 0;
	}


	if (shapeMenu == 1)
		glutSolidSphere(sizeValue, 20, 30);
	else if (shapeMenu == 2)
		glutSolidTorus(0.1, sizeValue, 20, 30);
	else {
		glBegin(GL_POLYGON);
		glVertex3f(-0.5, -0.5, 0.0);
		glVertex3f(0.5, -0.5, 0.0);//glVertex3f(0.5 + sizeValue, -0.5, 0.0);-> 사각형 크게 만들기
		glVertex3f(0.5, 0.5, 0.0);
		glVertex3f(-0.5, 0.5, 0.0);
		glEnd();
	} //네모 생성해버리므로 주석처리

	glFlush();
}

void MyReshape(int NW, int NH) {
	GLfloat nRange = 1.0f;

	if (NH == 0)
		NH = 1;

	glViewport(0, 0, NW, NH);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (NW <= NH)
		glOrtho(-nRange, nRange, -nRange * NH / NW, nRange * NH / NW, -nRange, nRange);
	else
		glOrtho(-nRange * NW / NH, nRange * NW / NH, -nRange, nRange, -nRange, nRange);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	/* 교재 소스
	GLfloat WFactor = (GLfloat)NW / (GLfloat)300;
	GLfloat HFactor = (GLfloat)NH / (GLfloat)300;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0 * WFactor, 1.0 * WFactor, -1.0 * HFactor, 1.0 * HFactor, -1.0, 1.0);
	*/

}
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
	printf("\n선택한 메뉴 => %d", entryID);

	if (entryID == 3)
		exit(0);//#include <stdlib.h>를 선언해줘야 오류가 뜨지 않는다.
	else if (entryID >= 40)
		sizeMenu = entryID;
	else if (entryID >= 30)
		colorMenu = entryID;
	else
		shapeMenu = entryID;

	glutPostRedisplay();

}
void MenuFunc() {
	//메뉴를 만드는 단순한 사용자 함수. 절대로 콜백이 아니다.
	GLint MySubMenuID = glutCreateMenu(MenuProc); //두 개로 만들면 복잡하기 때문에 하나로 만듬.
	glutAddMenuEntry("빨강", 31);
	glutAddMenuEntry("초록", 32);
	glutAddMenuEntry("파랑", 33);

	GLint MySubMenuSize = glutCreateMenu(MenuProc);
	glutAddMenuEntry("크게", 41);//만약()의 숫자가 같다면 논리적 오류가 발생한다.
	glutAddMenuEntry("작게", 42);// 컴파일 오류는 발생하지 않는다.

	GLint MyMainMenuID = glutCreateMenu(MenuProc);
	glutAddMenuEntry("Draw Sphere", 1);
	glutAddMenuEntry("Draw Torus", 2);
	glutAddSubMenu("색깔", MySubMenuID);
	glutAddSubMenu("사이즈", MySubMenuSize);
	glutAddMenuEntry("Exit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void initUse() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	printf("학과 학번 이름\n 날짜:~~ \n 주제:~~");
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("제목");

	initUse();
	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);

	glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(MySpecial);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle);
	glutTimerFunc(40, MyTimer, 1);

	MenuFunc();//메뉴 화면을 만들 사용자 함수

	glutMainLoop();
	return 0;
}