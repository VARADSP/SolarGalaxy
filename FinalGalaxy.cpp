#include "windows.h"
#include<GL/glu.h>
#include <GL\glut.h>
#include<math.h>
#include<string.h>


char mercury[]="Mercury";
char venus[]="Venus";
char earth[]="Earth";
char mars[]="Mars";
char jupiter[]="Jupiter";
char saturn[]="Saturn";
char uranus[]="Uranus";
char neptune[]="Neptune";
char sun[]="Sun";



#define sunRaduis 0.6
#define mercuryradius 0.04
#define venusradius 0.06
#define earthRaduis 0.07
#define marsRadius 0.06
#define jupiterRadius 0.09
#define saturnRadius 0.069
#define uranusRadius 0.065
#define neptuneRadius 0.071
#define moonRaduis 0.026


GLfloat rotationSpeed = 0.1;
GLfloat mercurydaysInYear = 88;
GLfloat venusdaysInYear = 225;
GLfloat earthdaysInYear = 365;
GLfloat marsdaysInYear = 687;
GLfloat jupiterdaysInYear = 868;
GLfloat saturndaysInYear = 908;
GLfloat uranusdaysInYear = 967;
GLfloat neptunedaysInYear = 1000;

GLfloat mercuryyear = 1110.0;
GLfloat venusyear = 5530.0;
GLfloat earthyear = 560.0;
GLfloat marsyear = 6760.0;
GLfloat jupiteryear = 780.0;
GLfloat saturnyear = 8880.0;
GLfloat uranusyear = 540.0;
GLfloat neptuneyear = 4440.30;

GLfloat day = 0.0;
GLfloat moonAroundEarth = 0.0;
GLfloat moonItsSelf = 0.0;
GLfloat mercuryOrbitRadius =0.701;
GLfloat venusOrbitRadius =0.72;
GLfloat earthOrbitRadius =0.73;
GLfloat marsOrbitRadius =0.75;
GLfloat jupiterOrbitRadius =1.27;
GLfloat saturnOrbitRadius =1.70;
GLfloat uranusOrbitRadius =1.92;
GLfloat neptuneOrbitRadius =2.19;






GLfloat moonOrbitRadius = 0.1;
GLfloat moonAroundEarthRate = 2 * rotationSpeed;
GLfloat moonRotationItselfRate = 5.0 * rotationSpeed;
GLfloat dayRate = 5.0 * rotationSpeed;
GLfloat mercuryyearRate = mercurydaysInYear / 688.0 * dayRate * rotationSpeed;
GLfloat venusyearRate = venusdaysInYear / 855.0 * dayRate * rotationSpeed;
GLfloat earthyearRate = earthdaysInYear / 960.0 * dayRate * rotationSpeed;
GLfloat marsyearRate = marsdaysInYear / 1287.0 * dayRate * rotationSpeed;
GLfloat jupiteryearRate = jupiterdaysInYear / 1480.0 * dayRate * rotationSpeed;
GLfloat saturnyearRate = saturndaysInYear / 1500.0 * dayRate * rotationSpeed;
GLfloat uranusyearRate = uranusdaysInYear / 2190.0 * dayRate * rotationSpeed;
GLfloat neptuneyearRate = neptunedaysInYear / 2600.0 * dayRate * rotationSpeed;


void drawSolarSystem(void);
void Initialization(void);
void displayFunc(void);
void reshapeFunc(int x, int y);
void idleFunc(void);
int main(int argc, char* argv[])
{



    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(800,800);
    glutCreateWindow("Solar system");
    Initialization();

    glutReshapeFunc(reshapeFunc);
    // display call back function reference setting
    glutDisplayFunc(displayFunc);

    glutIdleFunc(idleFunc);

    glutMainLoop();
    return 0;
}
void drawSolarSystem(void)
{
    glEnable(GL_TEXTURE_2D);






    glPushMatrix();




        gluLookAt(    0.0,10.0,-4.0,
                    0.0,0.0,1.0,
                    0.0,-3.0,0.0);
        //gluLookAt Function FOr The Camera and setting perspective Don't Change this V

        // Color of the sun.


        glColor3f(0.855,0.647,0.125);





        //Drawing the sun.
        glutSolidSphere(sunRaduis,50,50);

        glPushMatrix();
        glColor3f(1.0,1.0,1.0);
        glPointSize(0.9);
        glBegin(GL_POINTS);


    for(int j=0;j<10000;j++) // Generate Galaxy Points stars
    {
        glVertex3f(-1.6+j,-0.6+j,0);
    glVertex3f(-3.6+j,-0.9+j,0);
    glVertex3f(-4.6+j,-0.9+j,0);
    glVertex3f(-5.6+j,-3.9+j,0);
    glVertex3f(-0.6+j,-5.9+j,0);

    glVertex3f(-0.7-j,-7.4+j,0);
    glVertex3f(-0.6+j,-0.5+j,0);
    glVertex3f(-0.2+j,-0.7-j,0);
    glVertex3f(-0.6+j,-4.2+j,0);
    glVertex3f(-0.6+j,-8.1-j,0);

    glVertex3f(-0.4+j,-0.6+j,0);
    glVertex3f(-0.8+j,-30.9+j,0);
    glVertex3f(-0.6+j,-2.9+j,0);
    glVertex3f(-0.6-j,-0.9-j,0);
    glVertex3f(-0.6-j,-3.9-j,0);

     glVertex3f(-0.4+j,-0.6+j,0);
    glVertex3f(-0.8-j,-5.9+j,0);
    glVertex3f(-0.6+j,-0.9+j,0);
    glVertex3f(-0.6+j,-2.9+j,0);
    glVertex3f(-0.6+j,-3.9+j,0);
     glVertex3f(-0.4-j,-0.6+j,0);
    glVertex3f(-0.8-j,-0.9+j,0);
    glVertex3f(-0.6+j,-4.9+j,0);
    glVertex3f(-0.6+j,-0.9+j,0);
    glVertex3f(-6.6+j,-5.9-j,0);
    glVertex3f(-0.3-j,-6.6-j,0);
    glVertex3f(-0.9-j,-7.9-j,0);
    glVertex3f(-5.7-j,-1.9-j,0);
    glVertex3f(-4.3-j,-0.9-j,0);
    glVertex3f(-3.2-j,-2.9-j,0);

    glVertex3f(-3.5+j,-2.4-j,0);
    glVertex3f(-5.7+j,-4.5-j,0);
    glVertex3f(-4.2+j,-0.7+j,0);
    glVertex3f(-2.1+j,-4.2+j,0);
    glVertex3f(-0.3+j,-2.1+j,0);

    glVertex3f(-0.8+j,-0.63+j,0);
    glVertex3f(-0.9+j,-0.93+j,0);
    glVertex3f(-0.6+j,-2.9+j,0);
    glVertex3f(-0.6-j,-4.92+j,0);
    glVertex3f(-0.6-j,-0.92+j,0);

     glVertex3f(-4.4+j,-0.3+j,0);
    glVertex3f(-4.8+j,-0.94+j,0);
    glVertex3f(-0.6+j,-0.55+j,0);
    glVertex3f(-2.6+j,-0.97+j,0);
    glVertex3f(-0.6+j,-0.8+j,0);
     glVertex3f(-3.4+j,-0.63+j,0);
    glVertex3f(-0.8+j,-0.92+j,0);
    glVertex3f(-4.3+j,-0.9+j,0);
    glVertex3f(-3.66+j,-0.92+j,0);
    glVertex3f(-5.6+j,-4.4+j,0);
     glVertex3f(-7.6-j,-3.6-j,0);
    glVertex3f(-0.6-j,-0.9-j,0);
    glVertex3f(-0.6-j,-6.9-j,0);
    glVertex3f(-0.6-j,-5.9-j,0);
    glVertex3f(-0.6-j,-3.9-j,0);

    glVertex3f(-0.7+j,-0.4-j,0);
    glVertex3f(-0.6+j,-2.5+j,0);
    glVertex3f(-0.2+j,-3.7+j,0);
    glVertex3f(-4.6+j,-4.2+j,0);
    glVertex3f(-4.6+j,-0.1+j,0);

    glVertex3f(-0.4+j,-0.6+j,0);
    glVertex3f(-5.8+j,-0.9+j,0);
    glVertex3f(-0.6+j,-0.9+j,0);
    glVertex3f(-4.6-j,-0.9+j,0);
    glVertex3f(-2.6-j,-0.9+j,0);

     glVertex3f(-4.4+j,-0.6+j,0);
    glVertex3f(-0.8+j,-0.9+j,0);
    glVertex3f(-8.6+j,-0.9+j,0);
    glVertex3f(-5.6+j,-0.9+j,0);
    glVertex3f(-7.6+j,-0.9-j,0);
     glVertex3f(-6.4+j,-0.6-j,0);
    glVertex3f(-0.8+j,-0.9+j,0);
    glVertex3f(-0.6+j,-0.9+j,0);
    glVertex3f(-7.6+j,-5.9+j,0);
    glVertex3f(-0.6+j,-6.9+j,0);


    }







    glEnd();

            glPopMatrix();
             glColor3f(0.863,0.863,0.863);
        glRasterPos2i(10,30);
        for(int i=0;i<=2;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, sun[i]);
        }

            glRotatef(mercuryyear,0.0,1.0,0.0); //rotation for mercury
            glTranslatef(mercuryOrbitRadius,0.0,0.0); // translation for mercury
            glRotatef(-mercuryyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.863,0.863,0.863);
                //Drawing the mercury
                glutSolidSphere(mercuryradius,10,10);

            glPopMatrix();





             glRotatef(venusyear,0.0,1.0,0.0); //rotation for venus
            glTranslatef(venusOrbitRadius,0.0,0.0); // translation for venus.
            glRotatef(-venusyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.804,0.522,0.247);
                //Drawing the venus
                glutSolidSphere(venusradius,10,10);

            glPopMatrix();



            glPushMatrix();

            glRotatef(earthyear,0.0,1.0,0.0); //rotation for earth
            glTranslatef(earthOrbitRadius,0.0,0.0); // translation for earth.
            glRotatef(-earthyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.0,0.749,1.0);
                //Drawing the earth
                glutSolidSphere(earthRaduis,10,10);

            glPopMatrix();


            glPushMatrix();

            glRotatef(marsyear,0.0,1.0,0.0); //rotation for mars
            glTranslatef(marsOrbitRadius,0.0,0.0); // translation for mars
            glRotatef(-marsyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(1.0,0.871,0.678);
                //Drawing the mars
                glutSolidSphere(marsRadius,10,10);

            glPopMatrix();

             glPushMatrix();

            glRotatef(jupiteryear,0.0,1.0,0.0); //rotation for jupiter
            glTranslatef(jupiterOrbitRadius,0.0,0.0); // translation for jupiter
            glRotatef(-jupiteryear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.871,0.722,0.529);
                //Drawing the jupiter
                glutSolidSphere(jupiterRadius,10,10);

            glPopMatrix();


            glPushMatrix();

            glRotatef(saturnyear,0.0,1.0,0.0); //rotation for saturn
            glTranslatef(saturnOrbitRadius,0.0,0.0); // translation for saturn
            glRotatef(-saturnyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.502,0.0,0.502);
                //Drawing the saturn
                glutSolidSphere(saturnRadius,10,10);

            glPopMatrix();

            glPushMatrix();

            glRotatef(uranusyear,0.0,1.0,0.0); //rotation for uranus
            glTranslatef(uranusOrbitRadius,0.0,0.0); // translation for uranus
            glRotatef(-uranusyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.0,1.0,1.0);
                //Drawing the uranus
                glutSolidSphere(uranusRadius,10,10);

            glPopMatrix();



            glPushMatrix();

            glRotatef(neptuneyear,0.0,1.0,0.0); //rotation for neptune
            glTranslatef(neptuneOrbitRadius,0.0,0.0); // translation for neptune
            glRotatef(-neptuneyear,0.0,1.0,0.0);
            glPushMatrix();
                glRotatef(day,0.25,1.0,0.0);
                glColor3f(0.0,0.00,0.804);
                //Drawing the neptune
                glutSolidSphere(neptuneRadius,10,10);

            glPopMatrix();







            // rotation for moon.
            glRotatef(moonAroundEarth,0.0,1.0,0.0);
            // translation for moon.
            glTranslatef(moonOrbitRadius,0.0,0.0);

            // around earth rotation.
            glRotatef(-moonAroundEarth,0.0,1.0,0.0);
            // moon rotation about it self.


            glColor3f(0.3,0.3,0.5);
            // draw the moon
            glutSolidSphere(moonRaduis,8,8);



        glPopMatrix();

    glPopMatrix();






}

void Initialization(void)
{

    glClearColor(0.0,0.0,0.0,0.0);
    glClearDepth(10.0);



    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
}

void displayFunc(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawSolarSystem();
    // flush to screen.
    glFlush();
    // swap buffers , yes we need this ( double buffering used!)
    glutSwapBuffers();
}

void reshapeFunc(int x, int y)
{
    if (y == 0 || x==0) return;

    glLoadIdentity();
    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);
    displayFunc();
}

void idleFunc(void)
{
    // idle event call back in animation , here we increase the values and redisply .
    day += dayRate;
    mercuryyear += mercuryyearRate;
    venusyear += venusyearRate;
    earthyear += earthyearRate;
    marsyear += marsyearRate;
    jupiteryear += jupiteryearRate;
    saturnyear += saturnyearRate;
    uranusyear += uranusyearRate;
    neptuneyear += neptuneyearRate;








    moonItsSelf += moonRotationItselfRate;
    moonAroundEarth += moonAroundEarthRate;
    displayFunc();
}
