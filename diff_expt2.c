#include <GL/glut.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>



void delay(unsigned int t)
{
	int ms = 2000 * t;
	
	clock_t st=clock();
	
	while(clock() < st+ms)
	;
	

}


void output(int x,int y,char *string)
{
    glColor3f(0.7,0.8,0.6);
    int len,i;
    glRasterPos2f(x,y);
    len=(int) strlen(string);
    for(i=0;i<len;i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
    glFlush();
    
}

float pos1 = 80;
float pos2 = 140;




void red(){

glColor3f(1,0,0);  // Alice 

glBegin(GL_QUADS);
    glVertex2f(80,290);
    glVertex2f(140,290);
    glVertex2f(140,265);
    glVertex2f(80,265);
glEnd();

// glFlush();

// gutSwapBuffers();

}


void green(){

glColor3f(0,1,0.0);  // Bob

glBegin(GL_QUADS);
    glVertex2f(570,290);
    glVertex2f(630,290);
    glVertex2f(630,265);
    glVertex2f(570,265);
glEnd();

}









void yellow()
{

glColor3f(1,1,0.0);  // Alice 

glBegin(GL_QUADS);
    glVertex2f(80,325);
    glVertex2f(140,325);
    glVertex2f(140,300);
    glVertex2f(80,300);
glEnd();

glColor3f(1,1,0.0);  // Bob

glBegin(GL_QUADS);
    glVertex2f(570,325);
    glVertex2f(630,325);
    glVertex2f(630,300);
    glVertex2f(570,300);
glEnd();


glColor3f(1,1,0.0);  // Intruder

glBegin(GL_QUADS);
    glVertex2f(320,575);
    glVertex2f(380,575);
    glVertex2f(380,555);
    glVertex2f(320,555);
glEnd();

// glutSwapBuffers();
glFlush();
}



void computer()
{
    
glColor3f(0.7,0.8,0.6);  //monitor in


glBegin(GL_QUADS);
    glVertex2f(80,350);
    glVertex2f(140,350);
    glVertex2f(140,400);
    glVertex2f(80,400);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor out
glBegin(GL_LINE_LOOP);
    glVertex2f(75,345);
    glVertex2f(75,405);
    glVertex2f(145,405);
    glVertex2f(145,345);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor base
glBegin(GL_QUADS);
    glVertex2f(85,340);
    glVertex2f(135,340);
    glVertex2f(140,335);
    glVertex2f(80,335);
glEnd();

output(85,420,"ALICE");



// glColor3f(1,1,0.0);  // yellow


// glBegin(GL_QUADS);
//     glVertex2f(80,325);
//     glVertex2f(140,325);
//     glVertex2f(140,310);
//     glVertex2f(80,310);
// glEnd();

   
}


void computer_dest(){

glColor3f(0.7,0.8,0.6);  //monitor in

glBegin(GL_QUADS);
    glVertex2f(570,350);
    glVertex2f(630,350);
    glVertex2f(630,400);
    glVertex2f(570,400);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor out
glBegin(GL_LINE_LOOP);
    glVertex2f(565,345);
    glVertex2f(635,345);
    glVertex2f(635,405);
    glVertex2f(565,405);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor base
glBegin(GL_QUADS);
    glVertex2f(575,340);
    glVertex2f(625,340);
    glVertex2f(630,335);
    glVertex2f(570,335);
glEnd();

output(580,420,"BOB");


}




void computer_intruder(){

glColor3f(1,0.0,0.0);  //monitor in

glBegin(GL_QUADS);
    glVertex2f(320,600);
    glVertex2f(380,600);
    glVertex2f(380,650);
    glVertex2f(320,650);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor out
glBegin(GL_LINE_LOOP);
    glVertex2f(315,595);
    glVertex2f(385,595);
    glVertex2f(385,655);
    glVertex2f(315,655);
glEnd();

glColor3f(0.7,0.8,0.6);  //monitor base
glBegin(GL_QUADS);
    glVertex2f(325,590);
    glVertex2f(375,590);
    glVertex2f(380,585);
    glVertex2f(320,585);
glEnd();


output(305,670,"INTRUDER");


}


void home()
{
    glClearColor(0.101,0.176,0.231,1);
    glClear(GL_COLOR_BUFFER_BIT);
    
    computer();
    computer_dest();
    computer_intruder();

    // glutSwapBuffers();
    glFlush();
}


void menu(int id){
    if(id==1){
        yellow();

        delay(1000);

        red();
        green();
        
    }

}


int main(int argc,char** argv)
{

glutInit(&argc,argv);

glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);

glutInitWindowPosition(0,0);

glutInitWindowSize(1000,700);

glutCreateWindow("Demo");

glMatrixMode(GL_MODELVIEW);//INIT
   
gluOrtho2D(0,700,0,700);

   
glutCreateMenu(menu);
glutAddMenuEntry("Exchange Public Keys",1);
glutAddMenuEntry("Add Your Private Key",2);
glutAddMenuEntry("Quit",3);
glutAttachMenu(GLUT_RIGHT_BUTTON);

glutDisplayFunc(home);


glutMainLoop();


}
