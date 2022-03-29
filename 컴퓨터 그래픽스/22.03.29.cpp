/*  날짜:
	작성자: 김남주
	주제: ilde 콜백함수 응용	*/

#include <glut.h>
#include <glu.h>
#include <gl.h>
#include <Windows.h> //Sleep함수
#include <stdio.h>
#include <stdlib.h>

bool arrow = true, arrow2 = true;
GLfloat movement = 0.0f, movement2 = 0.0f;
float speedx = 0.01, speedy = 0.01;

// glOrtho 값은 여기서 바꾸세요
GLfloat x1 = -1, x2 = 5, y1 = -1, y2 = 5;

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5 + movement, -0.5 + movement2, 0.0);
	glVertex3f(0.5 + movement, -0.5 + movement2, 0.0);
	glVertex3f(0.5 + movement, 0.5 + movement2, 0.0);
	glVertex3f(-0.5 + movement, 0.5 + movement2, 0.0);
	glEnd();
	glFlush();
}

void MyResahpe(int NewWidth, int NewHeight)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(x1, x2, y1, y2, -1, 1);
}

void MyKeyBoard(unsigned char KeyPressed, int X, int Y)
{
}

void MySpecial(int key, int X, int Y)
{
}

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y)
{
}

void MyMouseMove(GLint X, GLint Y)
{
}

void MyIdle()
{

	//가로
	if (arrow)
	{
		movement += speedx;
	}
	else
	{
		movement -= speedx;
	}
	//방향전환
	if (movement >= (x2 - 0.5))
	{
		arrow = false;
		speedx = (float)(rand() % 100) / 1000;
	}
	else if (movement <= (x1 + 0.5))
	{
		arrow = true;
		speedx = (float)(rand() % 100) / 1000;
	}
	//세로
	if (arrow2)
	{
		movement2 += speedy;
	}
	else
	{
		movement2 -= speedy;
	}
	//방향전환
	if (movement2 >= (y2 - 0.5))
	{
		arrow2 = false;
		speedy = (float)(rand() % 100) / 1000;
	}
	else if (movement2 <= (y1 + 0.5))
	{
		arrow2 = true;
		speedy = (float)(rand() % 100) / 1000;
	}
	glutPostRedisplay();
	printf("이동합니다 x속도 %0.3f y속도 %0.3f\n", speedx, speedy);
	if (arrow == true)
	{
		printf("오른쪽,");
	}
	else
	{
		printf("왼쪽,");
	}
	if (arrow2 == true)
	{
		printf("위로 이동중\n");
	}
	else
	{
		printf("밑으로 이동중\n");
	}

	Sleep(30 / x2);
}

void MyTimer(int Value)
{
}

void MenuProc(int entryID)
{
}

void MenuFunc()
{
}

void initUse()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	printf("컴퓨터소프트웨어공학과 20192336 김남주\n 날짜:22.03.29 \n 주제:움직이는 사각형");
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("제목");
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyResahpe);
	// glutKeyboardFunc(MyKeyBoard);
	// glutSpecialFunc(MySpecial);
	// glutMouseFunc(MyMouseClick);
	// glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle);
	// glutTimerFunc(40, MyTimer, 1);
	// MenuFunc();
	initUse();
	glutMainLoop();
	return 0;
}