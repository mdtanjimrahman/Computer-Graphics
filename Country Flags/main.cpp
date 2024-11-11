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
    glClearColor(0.1f, 0.1f, 0.1f, 0.1f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);
    glBegin(GL_LINES);

    //Axis
    glColor3ub(0,255,26);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);

    glEnd();

    //SUDAN
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.85f,0.2f);
    glVertex2f(0.85f,0.6f);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.2f,0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.35f);
    glVertex2f(0.85f,0.35f);
    glVertex2f(0.85f,0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2f,0.35f);
    glVertex2f(0.85f,0.35f);
    glVertex2f(0.85f,0.47f);
    glVertex2f(0.2f,0.47f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(230,0,0);
    glVertex2f(0.85f,0.47f);
    glVertex2f(0.2f,0.47f);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.85f,0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,87,9);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.45f,0.4f);
    glEnd();


    //SOMALIA
    glBegin(GL_POLYGON);
    glColor3ub(6,145,214);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.85f,0.2f);
    glVertex2f(-0.85f,0.6f);
    glVertex2f(-0.2f,0.6f);
    glVertex2f(-0.2f,0.2f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.525f, 0.4f + 0.16f);
    glVertex2f(-0.525f + 0.08f, 0.4f + 0.05f);
    glVertex2f(-0.525f + 0.13f, 0.4f + 0.05f);
    glVertex2f(-0.525f + 0.05f, 0.4f - 0.02f);
    glVertex2f(-0.525f + 0.08f, 0.4f - 0.13f);
    glVertex2f(-0.525f, 0.4f - 0.07f);
    glVertex2f(-0.525f - 0.08f, 0.4f - 0.13f);
    glVertex2f(-0.525f - 0.05f, 0.4f - 0.02f);
    glVertex2f(-0.525f - 0.13f, 0.4f + 0.05f);
    glEnd();


    //DENMARK
    glBegin(GL_POLYGON);
    glColor3ub(220,0,0);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.85f,-0.2f);
    glVertex2f(0.85f,-0.6f);
    glVertex2f(0.2f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.2f,-0.37f);
    glVertex2f(0.85f,-0.37f);
    glVertex2f(0.85f,-0.45f);
    glVertex2f(0.2f,-0.45f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.37f,-0.6f);
    glVertex2f(0.45f,-0.6f);
    glVertex2f(0.45f,-0.2f);
    glVertex2f(0.37f,-0.2f);
    glEnd();


    //TONGA
    glBegin(GL_POLYGON);
    glColor3ub(220,0,0);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.85f,-0.6f);
    glVertex2f(-0.2f,-0.6f);
    glVertex2f(-0.2f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.85f,-0.4f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.48f,-0.2f);
    glVertex2f(-0.48f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(220,0,0);
    glVertex2f(-0.7f,-0.228f);
    glVertex2f(-0.648f,-0.228f);
    glVertex2f(-0.648f,-0.37f);
    glVertex2f(-0.7f,-0.37f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(220,0,0);
    glVertex2f(-0.75f,-0.27f);
    glVertex2f(-0.75f,-0.322f);
    glVertex2f(-0.598f,-0.322f);
    glVertex2f(-0.598f,-0.27f);
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
