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


    glEnd();


    //SWEDEN
    glBegin(GL_POLYGON);
    glColor3ub(0, 106, 167);
    glVertex2f(0.2f,-0.2f+0.4f);
    glVertex2f(0.85f,-0.2f+0.4f);
    glVertex2f(0.85f,-0.6f+0.4f);
    glVertex2f(0.2f,-0.6f+0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(254, 204, 0);
    glVertex2f(0.2f,-0.37f+0.4f);
    glVertex2f(0.85f,-0.37f+0.4f);
    glVertex2f(0.85f,-0.45f+0.4f);
    glVertex2f(0.2f,-0.45f+0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(254, 204, 0);
    glVertex2f(0.37f,-0.6f+0.4f);
    glVertex2f(0.45f,-0.6f+0.4f);
    glVertex2f(0.45f,-0.2f+0.4f);
    glVertex2f(0.37f,-0.2f+0.4f);
    glEnd();


    //GREECE
    glBegin(GL_POLYGON);
    glColor3ub(8, 57, 163);
    glVertex2f(-0.2f,-0.2f+0.44f);
    glVertex2f(-0.85f,-0.2f+0.44f);
    glVertex2f(-0.85f,-0.6f+0.36f);
    glVertex2f(-0.2f,-0.6f+0.36f);
    glVertex2f(-0.2f,-0.2f+0.44f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,0.18f);
    glVertex2f(-0.2f,0.13f);
    glVertex2f(-0.85f,0.13f);
    glVertex2f(-0.85f,0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,0.081f);
    glVertex2f(-0.2f,0.03f);
    glVertex2f(-0.85f,0.03f);
    glVertex2f(-0.85f,0.081f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,-0.025f);
    glVertex2f(-0.2f,-0.08f);
    glVertex2f(-0.85f,-0.08f);
    glVertex2f(-0.85f,-0.025f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,-0.13f);
    glVertex2f(-0.2f,-0.18f);
    glVertex2f(-0.85f,-0.18f);
    glVertex2f(-0.85f,-0.13f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 57, 163);
    glVertex2f(-0.85f,-0.42f+0.4f);
    glVertex2f(-0.85f,-0.2f+0.4f);
    glVertex2f(-0.48f,-0.2f+0.4f);
    glVertex2f(-0.48f,-0.42f+0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.7f,-0.2f+0.44f);
    glVertex2f(-0.648f,-0.2f+0.44f);
    glVertex2f(-0.648f,-0.425f+0.36f);
    glVertex2f(-0.7f,-0.425f+0.36f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.85f,-0.27f+0.4f);
    glVertex2f(-0.85f,-0.322f+0.4f);
    glVertex2f(-0.48f,-0.322f+0.4f);
    glVertex2f(-0.48f,-0.27f+0.4f);
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
