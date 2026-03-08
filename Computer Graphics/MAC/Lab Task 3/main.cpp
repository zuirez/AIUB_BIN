#include<GLUT/glut.h>
#include<OpenGL/gl.h>
#define PI   3.141516   
#include<math.h>

void circleFun(float x, float y, float radius, int r, int g, int b)
{
    GLfloat p1=x;
    GLfloat q1=y;
    GLfloat r1 =radius;
    int tringle2=100;

    GLfloat tp2 =2.0f * PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( r, g, b);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p1+(r1*cos(i*tp2/tringle2)), q1+(r1*sin(i*tp2/tringle2)));
    }
    glEnd ();
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    // sky
    glColor3ub(1,162,232); // blue

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, 1.0f);
    glEnd();


    // rocket body
    glColor3ub(136,0,21); // red brown

    glBegin(GL_POLYGON);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.8f, -0.5f);
        glVertex2f(-0.7f, -0.8f);
        glVertex2f(-0.3f, -0.5f);
    glEnd();


    // booster 1
    glColor3ub(255, 242, 4); // light yellow

	glBegin(GL_TRIANGLES);
        glVertex2f(-0.78f, -0.55f);
        glVertex2f(-0.88f, -0.54f);
        glVertex2f(-0.84f, -0.67f);
    glEnd();


    // booster 2
    glColor3ub(255, 242, 4); // light yellow

	glBegin(GL_TRIANGLES);
        glVertex2f(-0.715f, -0.75f);
        glVertex2f(-0.82f, -0.74f);
        glVertex2f(-0.78f, -0.88f);
    glEnd();


    // rocket head
    glColor3ub(237, 28, 37); // red

	glBegin(GL_TRIANGLES);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.3f, -0.5f);
        glVertex2f(-0.15f, -0.2f);
    glEnd();

    //cloud 1
    circleFun(-0.8f, 0.3f, 0.13f, 255, 255, 255); // cloud circle 1
    circleFun(-0.6f, 0.3f, 0.2f, 255, 255, 255); // cloud circle 1
    circleFun(-0.4f, 0.3f, 0.13f, 255, 255, 255); // cloud circle 1

    //cloud 1
    circleFun(-0.4f, 0.7f, 0.13f, 255, 255, 255); // cloud circle 1
    circleFun(-0.2f, 0.7f, 0.2f, 255, 255, 255); // cloud circle 1
    circleFun(0.0f, 0.7f, 0.13f, 255, 255, 255); // cloud circle 1

    glFlush();
}

int main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(556, 486);
    glutCreateWindow("Colored House");
    glClearColor(1.0, 1.0, 1.0, 1.0); // White background
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}