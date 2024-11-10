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

    //Axis
    glColor3ub(0,255,26);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);

    glEnd();

    //Red Triangle
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(-0.5f,0.8f);

    glEnd();

    //Yellow Hexagon
    glBegin(GL_POLYGON);
    glColor3ub(255,230,0);
    glVertex2f(0.5f,0.7f);
    glVertex2f(0.7f,0.6f);
    glVertex2f(0.7f,0.4f);
    glVertex2f(0.5f,0.3f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.3f,0.6f);
    glVertex2f(0.3f,0.6f);

    glEnd();

    //Blue Rectangle
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(-0.3f,-0.3f);
    glVertex2f(-0.3f,-0.6f);
    glVertex2f(-0.6f,-0.6f);
    glVertex2f(-0.6f,-0.3f);

    glEnd();

    //Cyan Triangle
    glBegin(GL_POLYGON);
    glColor3ub(0,200,200);
    glVertex2f(0.4f,-0.7f);
    glVertex2f(0.6f,-0.7f);
    glVertex2f(0.5f,-0.2f);

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
