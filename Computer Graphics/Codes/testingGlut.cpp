#include<windows.h>

#include <GL/glut.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    // ---------------------

    // Draw house base (square)

    // ---------------------

    glColor3f(0.8f, 0.5f, 0.2f); // Brown

    glBegin(GL_POLYGON);

        glVertex2f(-0.5f, -0.5f);

        glVertex2f(0.5f, -0.5f);

        glVertex2f(0.5f, 0.0f);

        glVertex2f(-0.5f, 0.0f);

    glEnd();

    // ---------------------

    // Draw roof (triangle)

    // ---------------------

    glColor3f(1.0f, 0.0f, 0.0f); // Red

    glBegin(GL_TRIANGLES);

        glVertex2f(-0.6f, 0.0f);

        glVertex2f(0.6f, 0.0f);

        glVertex2f(0.0f, 0.5f);

    glEnd();

    // ---------------------

    // Draw door (rectangle)

    // ---------------------

    glColor3f(0.3f, 0.2f, 0.0f); // Dark brown

    glBegin(GL_POLYGON);

        glVertex2f(-0.1f, -0.5f);

        glVertex2f(0.1f, -0.5f);

        glVertex2f(0.1f, -0.1f);

        glVertex2f(-0.1f, -0.1f);

    glEnd();

    // ---------------------

    // Draw left window (square)

    // ---------------------

    glColor3f(0.0f, 0.8f, 1.0f); // Cyan

    glBegin(GL_POLYGON);

        glVertex2f(-0.35f, -0.2f);

        glVertex2f(-0.2f, -0.2f);

        glVertex2f(-0.2f, -0.05f);

        glVertex2f(-0.35f, -0.05f);

    glEnd();

    // ---------------------

    // Draw right window (square)

    // ---------------------

    glColor3f(0.0f, 0.8f, 1.0f); // Cyan

    glBegin(GL_POLYGON);

        glVertex2f(0.2f, -0.2f);

        glVertex2f(0.35f, -0.2f);

        glVertex2f(0.35f, -0.05f);

        glVertex2f(0.2f, -0.05f);

    glEnd();

    glFlush();

}

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 500);

    glutCreateWindow("Colored House");

    glClearColor(1.0, 1.0, 1.0, 1.0); // White background

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;

}


