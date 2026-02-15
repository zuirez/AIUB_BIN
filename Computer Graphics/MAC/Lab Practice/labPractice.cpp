#include<GLUT/glut.h>
#include<OpenGL/gl.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);


    // road upper lane
    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(1.0f, 0.3f);
        glVertex2f(-1.0f, 0.3f);
    glEnd();


    // road lower lane
    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, -0.3f);
        glVertex2f(1.0f, -0.3f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();


    // axis line
    glColor3f(1.0f, 1.0f, 1.0f); // black

	glLineWidth(7.5);
	glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
    glEnd();


    // grass
    glColor3f(0.0f, 0.5f, 0.0f); //green

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.3f);
        glVertex2f(-1.0f, -0.3f);
    glEnd();


    // sky
    glColor3f(0.67f, 0.84f, 0.90f); // blue

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.3f);
        glVertex2f(1.0f, 0.3f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(-1.0f, 1.0f);
    glEnd();


    // tree base
    glColor3f(0.8f, 0.5f, 0.2f); // Brown

    glBegin(GL_POLYGON);
        glVertex2f(-0.7f, 0.3f);
        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.6f, 0.55f);
        glVertex2f(-0.7f, 0.55f);
    glEnd();


    // tree lower leafs
    glColor3f(0.0f, 0.50f, 0.0f); // green

    glBegin(GL_TRIANGLES);
        glVertex2f(-0.9f, 0.55f);
        glVertex2f(-0.4f, 0.55f);
        glVertex2f(-0.65f, 0.75f);
    glEnd();


    // tree upper leafs
    glColor3f(0.0f, 0.50f, 0.0f); // green

    glBegin(GL_TRIANGLES);
        glVertex2f(-0.9f, 0.65f);
        glVertex2f(-0.4f, 0.65f);
        glVertex2f(-0.65f, 0.85f);
    glEnd();


    // house base
    glColor3f(1.0f, 0.68f, 0.0f); // orange

    glBegin(GL_POLYGON);
        glVertex2f(0.2f, 0.35f);
        glVertex2f(0.4f, 0.35f);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.2f, 0.4f);
    glEnd();


    // house body
    glColor3f(0.0f, 0.0f, 0.545f); // dark blue

    glBegin(GL_POLYGON);
        glVertex2f(0.1f, 0.4f);
        glVertex2f(0.5f, 0.4f);
        glVertex2f(0.5f, 0.8f);
        glVertex2f(0.1f, 0.8f);
    glEnd();


    // house roof
    glColor3f(1.0f, 0.68f, 0.0f); // orange

    glBegin(GL_TRIANGLES);
        glVertex2f(0.1f, 0.8f);
        glVertex2f(0.5f, 0.8f);
        glVertex2f(0.3f, 0.95f);
    glEnd();


    // house door
    glColor3f(1.0f, 0.68f, 0.0f); // orange

    glBegin(GL_POLYGON);
        glVertex2f(0.25f, 0.42f);
        glVertex2f(0.35f, 0.42f);
        glVertex2f(0.35f, 0.7f);
        glVertex2f(0.25f, 0.7f);
    glEnd();


    // house window 1
    glColor3f(1.0f, 0.68f, 0.0f); // orange

    glBegin(GL_POLYGON);
        glVertex2f(0.15f, 0.55f);
        glVertex2f(0.22f, 0.55f);
        glVertex2f(0.22f, 0.65f);
        glVertex2f(0.15f, 0.65f);
    glEnd();


    // house window 2
    glColor3f(1.0f, 0.68f, 0.0f); // orange

    glBegin(GL_POLYGON);
        glVertex2f(0.38f, 0.55f);
        glVertex2f(0.45f, 0.55f);
        glVertex2f(0.45f, 0.65f);
        glVertex2f(0.38f, 0.65f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1271, 707);

    glutCreateWindow("Colored House");

    glClearColor(1.0, 1.0, 1.0, 1.0); // White background

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
