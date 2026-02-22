#include<GLUT/glut.h>
#include<OpenGL/gl.h>
#define PI   3.141516   
#include<math.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    // river
    glColor3ub(0,0,255); // blue

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.2f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, 0.2f);
    glEnd();


    // sky
    glColor3ub(153,204,255); // light blue

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, 0.2f);
        glVertex2f(1.0f, 0.2f);
        glVertex2f(1.0f, 1.0f);
    glEnd();


    // land left
    glColor3ub(0, 153, 0); // green

	glBegin(GL_TRIANGLES);
        glVertex2f(-1.0f, 0.2f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(-0.1f, -1.0f);
    glEnd();


    // land right
    glColor3ub(0, 153, 0); // green

	glBegin(GL_TRIANGLES);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(1.0f, -0.6f);
        glVertex2f(1.0f, 0.2f);
    glEnd();


    // boat base
    glColor3ub(204,0,0); // dark red

    glBegin(GL_POLYGON);
        glVertex2f(-0.63f, 0.02f);
        glVertex2f(-0.53f, -0.095f);
        glVertex2f(-0.2f, -0.095f);
        glVertex2f(-0.08f, 0.02f);
    glEnd();


    // boat cover
    glColor3ub(204,0,0); // dark red

    glBegin(GL_POLYGON);
        glVertex2f(-0.50f, 0.12f);
        glVertex2f(-0.50f, 0.02f);
        glVertex2f(-0.21f, 0.02f);
        glVertex2f(-0.21f, 0.12f);
    glEnd();


    // mountain 1
    glColor3ub(102, 204, 0); // light green

	glBegin(GL_TRIANGLES);
        glVertex2f(0.6f, 0.2f);
        glVertex2f(0.75f, 0.2f);
        glVertex2f(0.675f, 0.6f);
    glEnd();


    // mountain 2
    glColor3ub(102, 204, 0); // light green

	glBegin(GL_TRIANGLES);
        glVertex2f(0.7f, 0.2f);
        glVertex2f(0.9f, 0.2f);
        glVertex2f(0.8f, 0.75f);
    glEnd();


    // mountain 3
    glColor3ub(102, 204, 0); // light green

	glBegin(GL_TRIANGLES);
        glVertex2f(0.7f, 0.2f);
        glVertex2f(1.2f, 0.2f);
        glVertex2f(0.95f, 0.6f);
    glEnd();


    // sun 
    GLfloat p1=0.7f; 	//Value of x
    GLfloat q1= 0.8f; 	//Value of y
    GLfloat r1 = 0.08f;	//Radius
    int tringle2=100;	//Number of Triangle (More value means more smooth edge)

    GLfloat tp2 =2.0f * PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p1,q1);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p1+(r1*cos(i*tp2/tringle2)), q1+(r1*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 1 circle 1
    GLfloat p2=-0.02f; 	//Value of x
    GLfloat q2= 0.7f; 	//Value of y
    GLfloat r2 = 0.08f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p2+(r2*cos(i*tp2/tringle2)), q2+(r2*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 1 circle 2
    GLfloat p3=0.15f; 	//Value of x
    GLfloat q3= 0.7f; 	//Value of y
    GLfloat r3 = 0.15f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p3,q3);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p3+(r3*cos(i*tp2/tringle2)), q3+(r3*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 1 circle 3
    GLfloat p4=0.28f; 	//Value of x
    GLfloat q4= 0.7f; 	//Value of y
    GLfloat r4 = 0.1f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p4,q4);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p4+(r4*cos(i*tp2/tringle2)), q4+(r4*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 2 circle 1
    GLfloat p5=-0.45f; 	//Value of x
    GLfloat q5= 0.7f; 	//Value of y
    GLfloat r5 = 0.14f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p5,q5);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p5+(r5*cos(i*tp2/tringle2)), q5+(r5*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 2 circle 2
    GLfloat p6=-0.6f; 	//Value of x
    GLfloat q6= 0.7f; 	//Value of y
    GLfloat r6 = 0.08f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p6,q6);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p6+(r6*cos(i*tp2/tringle2)), q6+(r6*sin(i*tp2/tringle2)));
    }
    glEnd ();


    // cloud 2 circle 3
    GLfloat p7=-0.3f; 	//Value of x
    GLfloat q7= 0.7f; 	//Value of y
    GLfloat r7 = 0.08f;	//Radius

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p7,q7);
    for(int i= 0;i<=tringle2; i++)
    {
        glVertex2f (p7+(r7*cos(i*tp2/tringle2)), q7+(r7*sin(i*tp2/tringle2)));
    }
    glEnd ();





    glFlush();
}

int main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutCreateWindow("Colored House");
    glClearColor(1.0, 1.0, 1.0, 1.0); // White background
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}