/*
날  짜 : 2019.3.25
작성자 : 
파일명 :
주  제 :
*/

// 저번복습 + 추가내용
// 0) Library
// 1) call back
// 2) 네모, 별, 색깔
// 3) 원 x = r, sin(θ)
// y = r, cos(θ)
// 4) reshape->비율

#include <stdio.h>
#include <glut.h>  
#include <glu.h> 
#include <gl.h> 
#include <math.h>

#define GL_PI 3.1415f//원주율은 3.14는 원 둘레 /지름이다.

static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;

void MyDisplay() {
	GLfloat x, y, z, angle;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	GLfloat abc[2];

	glGetFloatv(GL_POINT_SIZE_RANGE, abc);
	printf("최소 점 크기 %f \n", abc[0]);
	printf("최소 점 크기 %f \n", abc[1]);

	glPointSize(9);//메모리가 허락하는 한 사이즈는 커지는게 가능하다.

	glBegin(GL_POINTS);
	z = -0.50f;

	for (angle = 0.0f; angle <= (2.0f * GL_PI) * 3.0f; angle += 0.1f) {//(2.0f*GL_PI)는 한바퀴이다.
		x = 0.5f * sin(angle); // 시계방향
		y = 0.5f * cos(angle); //시계방향, 책대로 하면 반시계 방향
		glVertex3f(x, y, z);
		//z += 0.5f; 
	}

	/*glBegin(GL_POLYGON);
		glVertex3f(-0.5, -0.5, 0.0);
		glVertex3f(0.5, -0.5, 0.0);
		glVertex3f(0.5, 0.5, 0.0);
		glVertex3f(-0.5, 0.5, 0.0);
	glEnd();*/

	glEnd();

	//glFlush(); //single 사용시
	glutSwapBuffers();//double 사용시
}

void MyReshape(int w, int h) {
	GLfloat nR = 1.0f;

	if (h == 0)
		h = 1;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION); //배경 화면을 배열화 시키는 일을 한다. 승인을 받는다. 초기화 하는 명령어를 받고 초기화 시킨다.
	glLoadIdentity();//67~68과 세트
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
	/*glClearColor(1.0, 1.0, 1.0, 1.0);
	printf("3월 21일 프로그램 \n");
	printf("창의 너비?");
	scanf_s("%d", &width);
	printf("창의 높이?");
	scanf_s("%d", &height);*/
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

	glutKeyboardFunc(MyKeyboard);
	glutSpecialFunc(MySpecial);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle);
	glutTimerFunc(40, MyTimer, 1);

	MenuFunc();

	glutMainLoop();
	return 0;