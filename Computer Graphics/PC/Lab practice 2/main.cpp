#include<windows.h>
#include <GL/glut.h>
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

    // head
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.88f);
        glVertex2f(0.2f, 0.88f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.2f, 0.88f);
        glVertex2f(0.2f, 0.68f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.2f, 0.68f);
        glVertex2f(-0.2f, 0.68f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.88f);
        glVertex2f(-0.2f, 0.68f);
    glEnd();



    // mouth
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.05f, 0.73f);
        glVertex2f(0.05f, 0.73f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.05f, 0.73f);
        glVertex2f(0.05f, 0.71f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.05f, 0.71f);
        glVertex2f(-0.05f, 0.71f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.05f, 0.71f);
        glVertex2f(-0.05f, 0.73f);
    glEnd();

    // eyes
    circleFun(-0.1, 0.8, 0.03, 0, 0, 0);
    circleFun(0.1, 0.8, 0.03, 0, 0, 0);


    // nack
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.05f, 0.68f);
        glVertex2f(-0.05f, 0.58f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.05f, 0.68f);
        glVertex2f(0.05f, 0.58f);
    glEnd();



    // body
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.4f, 0.58f);
        glVertex2f(-0.4f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.4f, 0.58f);
        glVertex2f(0.4f, 0.58f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.4f, 0.1f);
        glVertex2f(0.4f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.4f, 0.58f);
        glVertex2f(0.4f, 0.1f);
    glEnd();



    // left hand
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.4f, 0.5f);
        glVertex2f(-0.75f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.75f, 0.1f);
        glVertex2f(-0.55f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.55f, 0.1f);
        glVertex2f(-0.65f, 0.2f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.65f, 0.2f);
        glVertex2f(-0.4f, 0.1f);
    glEnd();



    // right hand
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.4f, 0.5f);
        glVertex2f(0.75f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.75f, 0.1f);
        glVertex2f(0.55f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.55f, 0.1f);
        glVertex2f(0.65f, 0.2f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.65f, 0.2f);
        glVertex2f(0.4f, 0.1f);
    glEnd();



    // pant
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.3f, 0.1f);
        glVertex2f(0.3f, 0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.3f, 0.1f);
        glVertex2f(0.3f, -0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.3f, -0.1f);
        glVertex2f(-0.3f, -0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.3f, -0.1f);
        glVertex2f(-0.3f, 0.1f);
    glEnd();



    // left leg
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.2f, -0.1f);
        glVertex2f(-0.3f, -0.59f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.3f, -0.59f);
        glVertex2f(-0.1f, -0.59f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.1f, -0.59f);
        glVertex2f(-0.2f, -0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.3f, -0.59f);
        glVertex2f(-0.35f, -0.89f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.1f, -0.89f);
        glVertex2f(-0.35f, -0.89f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(-0.1f, -0.89f);
        glVertex2f(-0.3f, -0.59f);
    glEnd();



    // right leg
    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.2f, -0.1f);
        glVertex2f(0.1f, -0.59f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.1f, -0.59f);
        glVertex2f(0.3f, -0.59f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.3f, -0.59f);
        glVertex2f(0.2f, -0.1f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.1f, -0.59f);
        glVertex2f(0.1f, -0.89f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.1f, -0.89f);
        glVertex2f(0.35f, -0.89f);
    glEnd();

    glColor3f(0,0,0); // black

	glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2f(0.35f, -0.89f);
        glVertex2f(0.1f, -0.59f);
    glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(330,636);
    glutCreateWindow("Colored House");
    glClearColor(1.0, 1.0, 1.0, 1.0); // White background
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
