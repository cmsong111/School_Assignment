/*  날짜:
	작성자: 김남주
	주제: 콜백 관련 기본 소스	*/

#include<glut.h>
#include<glu.h>
#include<gl.h>
#include <iostream>


int now_x = 0, now_y = 0, now_mouse = 0;
float R = 1.0F, G = 1.0F, B = 1.0F;

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(R, G, B);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd();
	glFlush();
}

void MyResahpe(int NewWidth, int NewHeight) {

}

void MyKeyBoard(unsigned char KeyPressed, int X, int Y) {
	std::cout << "MyKeyBoard :" << KeyPressed << " " << X << " " << Y << std::endl;
}

void MySpecial(int key, int X, int Y) {
	std::cout << key << " " << X << " " << Y << std::endl;
}

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {
	std::cout << "MyMouseClick :" << Button << " " << State << " " << X << " " << Y << std::endl;
	now_x = X;
	now_y = Y;
	now_mouse = Button;
	if (now_mouse == 0) {
		R = 1.0F, G = 0.0F, B = 0.0F;
	}
	else if (now_mouse == 1) {
		R = 0.0F, G = 1.0F, B = 0.0F;
	}
	else if (now_mouse == 2) {
		R = 0.0F, G = 0.0F, B = 1.0F;
	}

	glutPostRedisplay();

}

void MyMouseMove(GLint X, GLint Y) {
	//std::cout << "MyMouseMove:" << X << " " << Y << std::endl;

	if (now_mouse == 0) {
		std::cout << "좌클릭 하면서 ";
	}
	else if (now_mouse == 1) {
		std::cout << "휠클릭 하면서 ";
	}
	else if (now_mouse == 2) {
		std::cout << "우클릭 하면서 ";
	}

	if (now_x > X) {
		std::cout << "왼쪽으로 ";
	}
	else {
		std::cout << "오른쪽으로 ";
	}


	std::cout << "이동중" << std::endl;

}

void MyIdle() {

}

void MyTimer(int Value) {

}

void MenuProc(int entryID) {

}

void MenuFunc() {

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("제목");
	glClearColor(1.0, 1.0, 1.0, 1.0);

	glutDisplayFunc(MyDisplay);

	//glutReshapeFunc(MyResahpe);
	//glutKeyboardFunc(MyKeyBoard);
	//glutSpecialFunc(MySpecial);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	//glutIdleFunc(MyIdle);
	//glutTimerFunc(40, MyTimer, 1);
	//MenuFunc();

	glutMainLoop();
	return 0;
}
