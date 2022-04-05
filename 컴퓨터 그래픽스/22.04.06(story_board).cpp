/*  
    날짜: 22.04.06
    작성자: 김남주, 전민관
    주제: 스토리보드	
 */

#include<glut.h>
#include<glu.h>
#include<gl.h>
#include<stdio.h>
#include<stdlib.h>

//glOrtho 값은 여기서 바꾸세요
GLfloat x1 = 5, y1 = 5;
//좌표 이동갑
GLfloat movementX = 0.0f, movementY = 0.0f;
// 사각형 크기조절
GLfloat X_size = 0.5, Y_size = 0.5;
// 회전값
GLfloat current_angle = 0.0f;
//타이머에 따른 색상변경
GLclampf CudeColor[2][3] = { {0,0,0 },{0,1,1 } };


void Setcolor(unsigned char R, unsigned char G, unsigned char B) {
    CudeColor[0][0] = (GLclampf)(R * 0.003921568627451);
    CudeColor[0][1] = (GLclampf)(G * 0.003921568627451);
    CudeColor[0][2] = (GLclampf)(B * 0.003921568627451);
}


void MyDisplay() {

    glClear(GL_COLOR_BUFFER_BIT);


    glShadeModel(GL_SMOOTH);
    glBegin(GL_POLYGON);
    glColor3f(CudeColor[0][0], CudeColor[0][1], CudeColor[0][2]);
    glVertex3f(-X_size + movementX, -Y_size + movementY, 0.0);

    glColor3f(CudeColor[0][0], CudeColor[0][1], CudeColor[0][2]);
    glVertex3f(movementX, +movementY - Y_size * 2, 0.0);

    glColor3f(CudeColor[0][0], CudeColor[0][1], CudeColor[0][2]);
    glVertex3f(X_size + movementX, -Y_size + movementY, 0.0);

    glColor3f(CudeColor[1][0], CudeColor[1][1], CudeColor[1][2]);
    glVertex3f(X_size + movementX, Y_size + movementY, 0.0);

    glColor3f(CudeColor[1][0], CudeColor[1][1], CudeColor[1][2]);
    glVertex3f(-X_size + movementX, Y_size + movementY, 0.0);
    glEnd();
    glutSwapBuffers();

}



void MyResahpe(int NewWidth, int NewHeight) {
    glViewport(0, 0, NewWidth ,NewHeight);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(x1, -x1, y1, -y1, -1, 1);

}



void MyKeyBoard(unsigned char KeyPressed, int X, int Y) {

    if (KeyPressed == 43)
    {
        X_size *= (GLfloat)1.1;
        Y_size *= (GLfloat)1.1;
        printf("현재 크기 %f\n", X_size);
    }
    else if (KeyPressed == 45)
    {
        X_size *= (GLfloat)0.9;
        Y_size *= (GLfloat)0.9;
        printf("현재 크기 %f\n", X_size);
    }
    else if (KeyPressed == 122) {
        if (current_angle < 0) {
            current_angle = 0;
        }

        current_angle += 0.5;
        glRotatef(current_angle, 0, 0, 1.0f);
        printf("현재 속도: %f\n", current_angle);

    }
    else if (KeyPressed == 120) {
        if (current_angle > 0) {
            current_angle = 0;
        }
        current_angle -= 0.5;
        glRotatef(current_angle, 0, 0, 1.0f);
        printf("현재 속도: %f\n", current_angle);

    }

    glutPostRedisplay();
}



void MySpecial(int key, int X, int Y) {
    //up
    if (key == GLUT_KEY_UP) {
        current_angle = 0;
        movementY -= (GLfloat)0.3;
        printf("앞으로 이동중\n");
    }
    //left
    else if (key == GLUT_KEY_LEFT) {
        current_angle = 0;
        movementX += (GLfloat)0.3;
        printf("왼쪽으로 이동중\n");
    }
    //down
    else if (key == GLUT_KEY_DOWN) {
        current_angle = 0;
        movementY += (GLfloat)0.3;
        printf("뒤쪽으로 이동중\n");
    }
    //right
    else if (key == GLUT_KEY_RIGHT)
    {
        current_angle = 0;
        movementX -= (GLfloat)0.3;
        printf("오른쪽로 이동중\n");
    }

    glutPostRedisplay();

}


void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {

}



void MyMouseMove(GLint X, GLint Y) {

}



void MyIdle() {


}



void MyTimer(int Value) {

    Value = rand() % 6 + 1;
    switch (Value)
    {
    case 1:
        Setcolor(255, 222, 255);
        break;
    case 2:
        Setcolor(222, 222, 255);
        break;
    case 3:
        Setcolor(255, 255, 222);
        break;
    case 4:
        Setcolor(222, 222, 239);
        break;
    case 5:
        Setcolor(222, 239, 255);
        break;
    case 6:
        Setcolor(222, 255, 255);
        break;
    default:
        break;
    }

    printf("R = %f\tG = %f\tB = %f\n", CudeColor[0][0], CudeColor[0][1], CudeColor[0][2]);
    glutPostRedisplay();
    glutTimerFunc(1500, MyTimer, Value);

}



void MenuProc(int entryID) {

}



void MenuFunc() {

}



void initUse() {

    printf("컴퓨터소프트웨어공학전공\n20192336 김남주\n20193212 전민관\n날짜:22.03.31\n주제:스토리보드");
    printf("\n방향키 이동\n+, - 사이즈 조절\nz,x 중심점을 기준으로 오른쪽 왼쪽 회전(같은키 계속 누르면 빨라짐)\n1.5초마다 자동 색상 변경\n");
}




int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowSize(500, 500);

    glutInitWindowPosition(100, 100);

    glutCreateWindow("제목");

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glutDisplayFunc(MyDisplay);

    glutReshapeFunc(MyResahpe);

    glutKeyboardFunc(MyKeyBoard);

    glutSpecialFunc(MySpecial);

    //glutMouseFunc(MyMouseClick);

    //glutMotionFunc(MyMouseMove);

    glutIdleFunc(MyIdle);

    glutTimerFunc(3, MyTimer, 0);

    //MenuFunc();

    initUse();

    glutMainLoop();

    return 0;

}