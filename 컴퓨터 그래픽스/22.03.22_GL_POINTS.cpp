/*  날짜:
작성자: 김남주
주제: 콜백 관련 기본 소스	*/

#include <glut.h>
#include <glu.h>
#include <gl.h>
#include <math.h>

#define GL_PI 3.1415f //원주율은 3.14는 원 둘레 /지름이다.

void MyDisplay()
{
    GLfloat x, y, z, angle;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glPointSize(2.0f);//메모리가 허락하는 한 사이즈는 커지는게 가능하다.
    glBegin(GL_POINTS);

    z = -0.8f;

    for (angle = 0.0f; angle <= (2.0f * GL_PI) * 3.0f; angle += 0.1f) {//(2.0f*GL_PI)는 한바퀴이다.
    	x = sin(angle) / 1.5f; // 시계방향
    	y = cos(angle) / 1.5f; //시계방향, 책대로 하면 반시계 방향
    	glVertex3f(x, y, z);
    	z += 0.02f;
    }
    glEnd();
    glutSwapBuffers();//double 사용시
}

void MyResahpe(int NewWidth, int NewHeight)
{
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

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    // glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); -> glflush()
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // -> glutSwapBuffer()

    glutInitWindowSize(800, 800);
    glutInitWindowPosition(500, 100);
    glutCreateWindow("제목");
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(MyDisplay);

    // glutReshapeFunc(MyResahpe);
    // glutKeyboardFunc(MyKeyBoard);
    // glutSpecialFunc(MySpecial);
    // glutMouseFunc(MyMouseClick);
    // glutMotionFunc(MyMouseMove);
    // glutIdleFunc(MyIdle);
    // glutTimerFunc(40, MyTimer, 1);
    // MenuFunc();

    glutMainLoop();
    return 0;
}
