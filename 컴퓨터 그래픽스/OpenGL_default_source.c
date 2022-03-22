/*  날짜: 
	작성자: 김남주
	주제: 콜백 관련 기본 소스	*/

#include<glut.h>
#include<glu.h>
#include<gl.h>


void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
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

}

void MySpecial(int key, int X, int Y) {

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


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("제목");
	glClearColor(0.0, 0.0, 0.0, 1.0);

	glutDisplayFunc(MyDisplay);
	//glutReshapeFunc(MyResahpe);
	//glutKeyboardFunc(MyKeyBoard);
	//glutSpecialFunc(MySpecial);
	//glutMouseFunc(MyMouseClick);
	//glutMotionFunc(MyMouseMove);
	//glutIdleFunc(MyIdle);
	//glutTimerFunc(40, MyTimer, 1);
	//MenuFunc();

	glutMainLoop();
	return 0;
} 
