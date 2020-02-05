#include <GL/glut.h>
#include <stdlib.h>

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glVertex3d(0.5, 0.0, 1.0);
glVertex3d(0.5, 0.5, 1.0);
glVertex3d(0.5, 0.0, 0.0);
glEnd();
glFlush();
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);             //initialize the tooklit

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    
glutInitWindowSize(600, 180);      //set window size
glutInitWindowPosition(160, 120);   //set window position on screen
glutCreateWindow("it is a line!!");    //open a screen window
glutDisplayFunc(myDisplay);      //call/register redraw function
glutMainLoop();
}
