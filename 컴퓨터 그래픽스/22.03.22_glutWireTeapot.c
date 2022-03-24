// 십각형, 원뿔.티포트모양
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
	glColor3f(1.0f, 1.0f, 1.0f);//(red, green, blue)순이다.
	//glColor3ub(1, 0, 0); //float를 사용할수 없기 때문에 glColor3i(1, 0, 0);로 바꿔쓸 수도 있다.

	//glutWireTorus(0.2, 0.5, 5, 10);  //(안쪽 반지름, 바깥쪽 반지름, 튜브단면을 나눈 수,튜브윤곽을 나눈 수(밖에 찍히는 점의 갯수)), 십각형
	//glutSolidTorus(0.2, 0.5, 1, 10); //십각형

	//glutWireCone(1.0, 1.5, 10, 5);//(반지름, 높이, z둘레 나누는 갯수, z축을 따라 면을 나눈 갯수), 원뿔모양
	//중간이 없어져 보이는 이유 많은 선이 중첩되어 보이지 않는 것이다.

	glutWireTeapot(0.5); //(-나 +에 따라 주전자의 상하 방향이 달라진다.)
	//glutSolidTeapot(0.5); 

	glutSwapBuffers();//double 사용시
}

void MyReshape(int w, int h) {
	GLfloat nR = 1.0f;

	if (h == 0)
		h = 1;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION); //배경 화면을 배열화 시키는 일을 한다. 승인을 받는다. 초기화 하는 명령어를 받고 초기화 시킨다.
	glLoadIdentity();
	if (w <= h)
		glOrtho(-nR, nR, -nR * h / w, nR * h / w, -nR, nR);
	//-x,  x      -y     ,    y   ,  -z  ,  z //높이가 클때는 x값 조정 너비가 클때는 y 값 조정
	else
		glOrtho(-nR * w / h, nR * w / h, -nR, nR, -nR, nR);

	glMatrixMode(GL_MODELVIEW);	//배경화면 위에 모델 좌표를 승인한다.
	glLoadIdentity();
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
	/*glutReshapeFunc(MyReshape);

	glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(MySpecial);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle);
	glutTimerFunc(40, MyTimer, 1);

	MenuFunc();*/

	glutMainLoop();
	return 0;
}

