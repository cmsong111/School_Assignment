#include <GLUT/glut.h>

#include<stdio.h>
#include<math.h>

int  Right_arm_angle = 0, Rabbit_hair_angle = 0, Hole_angle = 0;
int Light_status = 2;


const GLfloat white[] = { 1.0, 1.0, 1.0, 1.0 };
const GLfloat white50[] = { 0.6, 0.6, 0.6, 1.0 };
const GLfloat white80[] = { 0.8, 0.8, 0.8, 1.0 };
const GLfloat white90[] = { 0.9, 0.9, 0.9, 1.0 };
const GLfloat black[] = { 0.0, 0.0, 0.0, 1.0 };

const GLfloat polished[] = { 100.0 };
const GLfloat dull[] = { 0.0 };

void MyInit(void) {
    GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat position[] = { 3.0, 3.0, 4.0, 0.0 };
    GLfloat lmodel_ambient[] = { 0.4, 0.4, 0.4, 1.0 };
    GLfloat local_view[] = { 0.0 };

    glClearColor(0.5, 0.5, 0.5, 1.0);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
    glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

void MyDisplay() {


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glEnable(GL_DEPTH_TEST);
    glColor3f(1.0, 1.0, 1.0);

    if (Light_status == 0) { // 조명 on off
        glDisable(GL_LIGHTING);
        glDisable(GL_LIGHT0);
    }
    else if (Light_status == 1) {
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
    }
    else if (Light_status == 2) {
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
    }


    glPushMatrix();
    glRotatef((GLfloat)Hole_angle, 0.0, 1.0, 0.0);

    glPushMatrix(); //얼굴
    glTranslatef(0, 2, 0);
    if (Light_status == 1) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white50);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    else if (Light_status == 2) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    glColor3fv(white);
    glutSolidSphere(1.5, 40, 40);
    glPopMatrix();


    glPushMatrix();//왼쪽 귀
    glColor3fv(white);
    glTranslatef(-0.5, 5, 0);
    glRotatef(5, 0, 0, 1);
    glutSolidSphere(0.3, 40, 40);
    glRotatef(90, 1, 0, 0);
    glutSolidCone(0.3, 4, 40, 40);
    glPopMatrix();

    glPushMatrix();//왼쪽 귀
    glColor3fv(white);
    glTranslatef(0.5, 5, 0);
    glRotatef(-5, 0, 0, 1);
    glutSolidSphere(0.3, 40, 40);
    glRotatef(90, 1, 0, 0);
    glutSolidCone(0.3, 4, 40, 40);
    glPopMatrix();

    glPushMatrix();//오른쪽 눈
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0.5, 2.5, sqrt(2)-0.1);
    if (Light_status) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, black);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    glutSolidSphere(0.15, 40, 40);
    glPopMatrix();

    glPushMatrix();//왼쪽 눈
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-0.5, 2.5, sqrt(2) - 0.1);
    if (Light_status) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, black);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    glutSolidSphere(0.15, 40, 40);
    glPopMatrix();

    glPushMatrix();//코
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0, 1.8, sqrt(2));
    if (Light_status) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, black);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    glutSolidSphere(0.2, 40, 40);
    glPopMatrix();

    glPushMatrix();//1사분면 콧수염
    glColor3fv(black);
    glTranslatef(1, 2.0, sqrt(2) - 0.4);
    glRotatef(90, 0, 1, 0);
    glPushMatrix();
    glRotatef(Rabbit_hair_angle, 1, 0, 0);
    glutSolidCone(0.05, 2, 40, 40);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//4사분면 콧수염
    glColor3fv(black);
    glTranslatef(1, 1.5, sqrt(2) - 0.4);
    glRotatef(90, 0, 1, 0);
    glPushMatrix();
    glRotatef(Rabbit_hair_angle, 1, 0, 0);
    glutSolidCone(0.05, 2, 40, 40);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//2사분면 콧수염
    glColor3fv(black);
    glTranslatef(-1, 2.0, sqrt(2) - 0.4);
    glRotatef(-90, 0, 1, 0);
    glPushMatrix();
    glRotatef(Rabbit_hair_angle, 1, 0, 0);
    glutSolidCone(0.05, 2, 40, 40);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//3사분면 콧수염
    glColor3fv(black);
    glTranslatef(-1, 1.5, sqrt(2) - 0.4);
    glRotatef(-90, 0, 1, 0);
    glPushMatrix();
    glRotatef(Rabbit_hair_angle, 1, 0, 0);
    glutSolidCone(0.05, 2, 40, 40);
    glPopMatrix();
    glPopMatrix();


    glPushMatrix();//몸
    glColor3fv(white);
    glTranslatef(0, -2, 0);
    if (Light_status == 1) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white50);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    else if (Light_status == 2) {
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
        glMaterialfv(GL_FRONT, GL_SPECULAR, black);
        glMaterialfv(GL_FRONT, GL_SHININESS, dull);
    }
    glutSolidSphere(1.5, 40, 40);
    glTranslatef(0, 0.3, 0);

    glRotatef(-90, 1, 0, 0);
    glutSolidCone(1.5, 4, 40, 40);
    glPopMatrix();


    glPushMatrix();//왼팔
    glColor3fv(white);
    glTranslatef(-0.3, 0.8, 0);
    glRotatef((GLfloat)Right_arm_angle, 1.0, 0.0, 0.0); // 원점을 기준으로 회전
    glTranslatef(-1.5, -1.5, 0.0);    // Pivot으로 지정할 위치를 원점으로 이동
    glPushMatrix();    // 원점을 기준으로 객체 생성 및 축소/확대
    glRotatef(-35, 0.0, 0.0, 1.0);
    glColor3fv(white);
    glutSolidSphere(0.4, 40, 40);
    glRotatef(180, 1.0, 0.0, 0.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    glutSolidCone(0.4, 3, 40, 40);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//오른팔
    glColor3fv(white);
    glTranslatef(0.3, 0.8, 0);
    //glRotatef((GLfloat)Right_arm_angle, -1.0, 0.0, 0.0); // 원점을 기준으로 회전
    glTranslatef(1.5, -1.5, 0.0);    // Pivot으로 지정할 위치를 원점으로 이동
    glPushMatrix();    // 원점을 기준으로 객체 생성 및 축소/확대
    glRotatef(35, 0.0, 0.0, 1.0);
    glColor3fv(white);
    glutSolidSphere(0.4, 40, 40);
    glRotatef(-180, 1.0, 0.0, 0.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    glutSolidCone(0.4, 3, 40, 40);
    glPopMatrix();
    glPopMatrix();

    
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
}

void MyResahpe(int NW, int NH) {
    GLfloat nRange = 8.0f;
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
}


void MyMouseMove(GLint X, GLint Y) {
    Hole_angle = (X) % 360;
    glutPostRedisplay();
}


void MySpecial(int key, int X, int Y) {
    switch (key) {
    case GLUT_KEY_RIGHT:
        if (Rabbit_hair_angle < 30)
            Rabbit_hair_angle = (Rabbit_hair_angle + 5) % 360;
        break;
    case GLUT_KEY_LEFT:
        if (-30 < Rabbit_hair_angle)
            Rabbit_hair_angle = (Rabbit_hair_angle - 5) % 360;
        break;
    case GLUT_KEY_UP:
        if (Right_arm_angle > -180 )
            Right_arm_angle = (Right_arm_angle - 5);
        break;
    case GLUT_KEY_DOWN:
        if (Right_arm_angle < 90)
            Right_arm_angle = (Right_arm_angle + 5);
        break;
    default:
        break;
    }
    glutPostRedisplay();
}


void MyMainMenu(int entryID) {
    switch (entryID)
    {
    case 1:
        Light_status = 0;
        break;
    case 2:
        Light_status = 1;
        break;
    case 3:
        Light_status = 2;
        break;
    default:
        break;
    }

    glutPostRedisplay();
}




void MenuFunc() {
    GLint MyMainMenuID = glutCreateMenu(MyMainMenu);
    glutAddMenuEntry("Light Off", 1);
    glutAddMenuEntry("Light weak", 2);
    glutAddMenuEntry("Light strong", 3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("김남주 20192336 기말고사");

    MyInit();

    glutDisplayFunc(MyDisplay);
    glutReshapeFunc(MyResahpe);
    glutSpecialFunc(MySpecial);
    glutMotionFunc(MyMouseMove);
    MenuFunc();

    glutMainLoop();
    return 0;
}
