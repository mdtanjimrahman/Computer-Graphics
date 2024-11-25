#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
    glClearColor(0.9f, 0.9f, 0.9f, 0.9f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);
    glBegin(GL_LINES);

    //Axis
    /*glColor3ub(0,255,26);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);*/

    glBegin(GL_POLYGON);
    glColor3ub(2, 45, 50);
    glVertex2f(-0.33f,0.28f);
    glVertex2f(0.33f,0.28f);
    glVertex2f(0.33f,-0.45f);
    glVertex2f(-0.33f,-0.45f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 101);
    glVertex2f(-0.1f,0.612f);
    glVertex2f(-0.06f,0.612f);
    glVertex2f(-0.06f,0.42f);
    glVertex2f(-0.1f,0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 101);
    glVertex2f(-0.06f,0.582f);
    glVertex2f(0.06f,0.582f);
    glVertex2f(0.06f,0.535f);
    glVertex2f(-0.06f,0.535f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 101);
    glVertex2f(0.1f,0.612f);
    glVertex2f(0.06f,0.612f);
    glVertex2f(0.06f,0.42f);
    glVertex2f(0.1f,0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.06f,0.535f);
    glVertex2f(0.06f,0.535f);
    glVertex2f(0.06f,0.5f);
    glVertex2f(-0.06f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.015f,0.535f);
    glVertex2f(0.015f,0.535f);
    glVertex2f(0.015f,0.45f);
    glVertex2f(-0.015f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.06f,0.45f);
    glVertex2f(0.06f,0.45f);
    glVertex2f(0.06f,0.42f);
    glVertex2f(-0.06f,0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 101);
    glVertex2f(-0.015f,0.45f);
    glVertex2f(0.015f,0.45f);
    glVertex2f(0.015f,0.42f);
    glVertex2f(-0.015f,0.42f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(254, 183, 114);
    glVertex2f(-0.1f,0.42f);
    glVertex2f(0.1f,0.42f);
    glVertex2f(0.1f,0.34f);
    glVertex2f(-0.1f,0.34f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 101);
    glVertex2f(-0.06f,0.34f);
    glVertex2f(0.06f,0.34f);
    glVertex2f(0.06f,0.31f);
    glVertex2f(-0.06f,0.31f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 120);
    glVertex2f(-0.3f,0.31f);
    glVertex2f(0.3f,0.31f);
    glVertex2f(0.3f,0.28f);
    glVertex2f(-0.3f,0.28f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 160);
    glVertex2f(-0.33f,0.28f);
    glVertex2f(0.33f,0.28f);
    glVertex2f(0.33f,0.25f);
    glVertex2f(-0.33f,0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 200);
    glVertex2f(-0.36f,0.25f);
    glVertex2f(0.36f,0.25f);
    glVertex2f(0.36f,0.22f);
    glVertex2f(-0.36f,0.22f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(80, 80, 97);
    glVertex2f(-0.28f,0.25f);
    glVertex2f(0.28f,0.25f);
    glVertex2f(0.28f,0.22f);
    glVertex2f(-0.28f,0.22f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 104, 97);
    glVertex2f(-0.24f,0.22f);
    glVertex2f(0.24f,0.22f);
    glVertex2f(0.24f,-0.05f);
    glVertex2f(-0.24f,-0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.06f,0.15f);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.06f,0.12f);
    glVertex2f(-0.06f,0.12f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 176, 20);
    glVertex2f(-0.06f,0.18f);
    glVertex2f(0.06f,0.18f);
    glVertex2f(0.06f,0.15f);
    glVertex2f(-0.06f,0.15f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 176, 20);
    glVertex2f(-0.06f,0.12f);
    glVertex2f(0.06f,0.12f);
    glVertex2f(0.06f,0.09f);
    glVertex2f(-0.06f,0.09f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 176, 20);
    glVertex2f(-0.06f,0.15f);
    glVertex2f(-0.06f,0.12f);
    glVertex2f(-0.09f,0.12f);
    glVertex2f(-0.09f,0.15f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 176, 20);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.06f,0.12f);
    glVertex2f(0.09f,0.12f);
    glVertex2f(0.09f,0.15f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(251, 176, 20);
    glVertex2f(-0.24f,-0.05f);
    glVertex2f(0.24f,-0.05f);
    glVertex2f(0.24f,-0.12f);
    glVertex2f(-0.24f,-0.12f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 65, 150);
    glVertex2f(-0.24f,-0.12f);
    glVertex2f(0.24f,-0.12f);
    glVertex2f(0.24f,-0.2f);
    glVertex2f(-0.24f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 104, 97);
    glVertex2f(-0.24f,-0.2f);
    glVertex2f(-0.1f,-0.2f);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(-0.24f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 104, 97);
    glVertex2f(0.24f,-0.2f);
    glVertex2f(0.1f,-0.2f);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.24f,-0.6f);
    glEnd();






     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
