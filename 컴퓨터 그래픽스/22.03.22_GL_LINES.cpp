/*  날짜: 2022.03.22
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
    glLineWidth(4.0f);
    glBegin(GL_LINE_STRIP);

    z = -0.8f;

    for (angle = 0.0f; angle <= GL_PI; angle += (GL_PI / 5.0f))
    {                          //(2.0f*GL_PI)는 한바퀴이다.
        x = sin(angle) / 1.5f; // 시계방향
        y = cos(angle) / 1.5f; //시계방향, 책대로 하면 반시계 방향
        glVertex3f(x, y, z);
        x = sin((angle + GL_PI)) / 1.5f; // 시계방향
        y = cos((angle + GL_PI)) / 1.5f; //시계방향, 책대로 하면 반시계 방향
        glVertex3f(x, y, z);
    }
    glEnd();
    glutSwapBuffers(); // double 사용시	GLfloat x, y, z, angle;

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
