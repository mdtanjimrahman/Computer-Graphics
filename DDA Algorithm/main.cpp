#include <bits/stdc++.h> // STL
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

using namespace std;

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

void DDA(float x1, float x2, float y1, float y2){

    float dx = x2-x1;
    float dy = y2-y1;
    float m = dy/dx;

    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);

    if(abs(m) < 1)
    {
        float step = abs(dx);
        float xIncrement = x1 + 1;
        float yIncrement = y1 + m;

        for(int i=0; i<=step; i++)
        {
            glVertex2f(x,y);
            x += xIncrement;
            y += yIncrement;
        }
    }

    else if(abs(m) > 1)
    {
        float step = abs(dy);
        float xIncrement = x + 1/m;
        float yIncrement = y + 1;

        for(int i=0; i<=step; i++)
        {
            glVertex2f(x,y);
            x += xIncrement;
            y += yIncrement;
        }
    }

    glEnd();
    glFlush();
}

void display() {
    glClearColor(0.2f, 0.2f, 0.2f, 0.2f); // Set background color to black and opaque
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

    float x1, y1, x2, y2;

    DDA(x1, y1, x2, y2);

     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    float x1, y1, x2, y2;

    cout<<"Enter initial x1 floating point: ";
    cin>>x1;
    cout<<"Enter initial y1 floating point: ";
    cin>>y1;
    cout<<"\nEnter ending x2 floating point: ";
    cin>>x2;
    cout<<"Enter ending y2 floating point: ";
    cin>>y2;

    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
