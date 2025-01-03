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
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);
    glBegin(GL_LINES);

    //Axis (Divider)
    glColor3ub(0,255,26);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);


    glEnd();


    //Red Color unfilled Star shape
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
    glVertex2f(0.1f,0.038f);
    glVertex2f(0.32f,0.038f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.47f,0.038f);
    glVertex2f(0.7f,0.038f);
    glVertex2f(0.5f,-0.1f);
    glVertex2f(0.57f,-0.35f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.2f,-0.35f);
    glVertex2f(0.28f,-0.1f);

    glEnd();

    //Yellow Color filled Star shape
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,230,0);
    glVertex2f(-0.1f, 0.038f);
    glVertex2f(-0.32f, 0.038f);
    glVertex2f(-0.28f, -0.1f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,230,0);
    glVertex2f(-0.32f, 0.038f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.47f, 0.038f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,230,0);
    glVertex2f(-0.47f, 0.038f);
    glVertex2f(-0.7f, 0.038f);
    glVertex2f(-0.5f, -0.1f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,230,0);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.57f, -0.35f);
    glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(255,230,0);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.2f, -0.35f);
    glVertex2f(-0.28f, -0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,230,0);
    glVertex2f(-0.32f, 0.038f);
    glVertex2f(-0.47f, 0.038f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.28f, -0.1f);
    glEnd();



    //All the opposite vertices on graph paper
    /*
    glVertex2f(-0.1f, 0.038f);
    glVertex2f(-0.32f, 0.038f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.47f, 0.038f);
    glVertex2f(-0.7f, 0.038f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.57f, -0.35f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.2f, -0.35f);
    glVertex2f(-0.28f, -0.1f);

    */


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
