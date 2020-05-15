#include <GL/glut.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>



void delay(unsigned int t)
{
	int ms = 1000 * t;
	
	clock_t st=clock();
	
	while(clock() < st+ms)
	;

}


void clearArea(int u,int v,int w,int x){

glColor3f(0.101,0.176,0.231);  // Alice 

glBegin(GL_QUADS);
    glVertex2f(u,w);
    glVertex2f(v,w);
    glVertex2f(v,x);
    glVertex2f(u,x);
glEnd();

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


// void moveRight(){

// int i=0;
// while (i<495)
// {

// glColor3f(1,0.49,0);  // Alice orange 

// glBegin(GL_QUADS);
//     glVertex2f(pos1,325);
//     glVertex2f(pos2,325);
//     glVertex2f(pos2,300);
//     glVertex2f(pos1,300);
// glEnd();

// delay(1);
// // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
// clearArea(pos1-70,pos2-70,325,300);

// pos1+=1;
// pos2+=1;
// i+=1;


// glFlush();
// }
// }

float pos3 = 570;
float pos4 = 630;

// void moveLeft(){

// int j=630;

// while (j>80)
// {
//     /* code */
// glColor3f(0,1,0.0);  //  Bob green
// glBegin(GL_QUADS);
//     glVertex2f(pos3,325);
//     glVertex2f(pos4,325);
//     glVertex2f(pos4,300);
//     glVertex2f(pos3,300);
// glEnd();

// delay(2);
// // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
// clearArea(pos3+70,pos4+70,325,300);

// pos3-=1;
// pos4-=1;
// j-=1;


// glFlush();

// }
// }
// void moveAll(int pos1,int pos2,int pos3,int pos4)


float ipos1=240;
float ipos2=300;


void orange2(){

glColor3f(1,0.49,0);  // Alice orange 

glBegin(GL_QUADS);
    glVertex2f(ipos1,325);
    glVertex2f(ipos2,325);
    glVertex2f(ipos2,300);
    glVertex2f(ipos1,300);
glEnd();

glFlush();

}


float ipos3=400;
float ipos4=460;



void green2(){

glColor3f(0,1,0.0);  //  Bob green

glBegin(GL_QUADS);
    glVertex2f(ipos3,325);
    glVertex2f(ipos4,325);
    glVertex2f(ipos4,300);
    glVertex2f(ipos3,300);
glEnd();

glFlush();

}











void moveHorizontal(){

int i=0;
int j=630;

while (i<495 && j>80)
{

glColor3f(1,0.49,0);  // Alice orange 

glBegin(GL_QUADS);
    glVertex2f(pos1,325);
    glVertex2f(pos2,325);
    glVertex2f(pos2,300);
    glVertex2f(pos1,300);
glEnd();

delay(1);
// glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
clearArea(pos1-70,pos2-70,325,300);

pos1+=1;
pos2+=1;
i+=1;

glColor3f(0,1,0.0);  //  Bob green
glBegin(GL_QUADS);
    glVertex2f(pos3,325);
    glVertex2f(pos4,325);
    glVertex2f(pos4,300);
    glVertex2f(pos3,300);
glEnd();

delay(1);
// glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
clearArea(pos3+70,pos4+70,325,300);

pos3-=1;
pos4-=1;
j-=1;





glFlush();

}

}



void moveVertical(){


int m=0;

float ipos1=325;
float ipos2=300;




// int n=630;

while (m<250)
{

glColor3f(1,0.49,0);  // Alice orange 

glBegin(GL_QUADS);
    glVertex2f(240,ipos1);
    glVertex2f(300,ipos1);
    glVertex2f(300,ipos2);
    glVertex2f(240,ipos2);
glEnd();

glColor3f(0,1,0.0);  //  Bob green

glBegin(GL_QUADS);
    glVertex2f(400,ipos1);
    glVertex2f(460,ipos1);
    glVertex2f(460,ipos2);
    glVertex2f(400,ipos2);
glEnd();

glFlush();

delay(1);
// glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
clearArea(240,300,ipos1-20,ipos2-20);

clearArea(400,460,ipos1-20,ipos2-20);







ipos1+=1;
ipos2+=1;
m+=1;

// glColor3f(0,1,0.0);  //  Bob green
// glBegin(GL_QUADS);
//     glVertex2f(pos3,325);
//     glVertex2f(pos4,325);
//     glVertex2f(pos4,300);
//     glVertex2f(pos3,300);
// glEnd();

// delay(1);
// // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
// clearArea(pos3+70,pos4+70,325,300);

// pos3-=1;
// pos4-=1;
// j-=1;

glFlush();
}

}







// int j=630;

// while (j>80)
// {
//     /* code */
// glColor3f(0,1,0.0);  //  Bob green
// glBegin(GL_QUADS);
//     glVertex2f(pos3,325);
//     glVertex2f(pos4,325);
//     glVertex2f(pos4,300);
//     glVertex2f(pos3,300);
// glEnd();

// delay(2);
// // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));  
// clearArea(pos3+70,pos4+70,325,300);

// pos3-=1;
// pos4-=1;
// j-=1;


// glFlush();

// }

// }









void red(){

glColor3f(1,0,0);  // Alice 

glBegin(GL_QUADS);
    glVertex2f(80,290);
    glVertex2f(140,290);
    glVertex2f(140,265);
    glVertex2f(80,265);
glEnd();

glFlush();

// glutSwapBuffers();

}


void blue(){

glColor3f(0,0,1.0);  //  Bob blue

glBegin(GL_QUADS);
    glVertex2f(570,290);
    glVertex2f(630,290);
    glVertex2f(630,265);
    glVertex2f(570,265);
glEnd();

glFlush();
// glutSwapBuffers();

}


void orange()
{

glColor3f(1,0.49,0);  // Alice orange 

glBegin(GL_QUADS);
    glVertex2f(80,325);
    glVertex2f(140,325);
    glVertex2f(140,300);
    glVertex2f(80,300);
glEnd();

glFlush();

}

void green(){

glColor3f(0,1,0.0);  //  Bob green

glBegin(GL_QUADS);
    glVertex2f(570,325);
    glVertex2f(630,325);
    glVertex2f(630,300);
    glVertex2f(570,300);
glEnd();

glFlush();

}

void brownA()
{

glColor3f(0.6,0.29,0.0);  // Alice brown

glBegin(GL_QUADS);
    glVertex2f(80,325);
    glVertex2f(140,325);
    glVertex2f(140,300);
    glVertex2f(80,300);
glEnd();

}


void brownB()
{

glColor3f(0.6,0.29,0.0);  // Bob brown

glBegin(GL_QUADS);
    glVertex2f(570,325);
    glVertex2f(630,325);
    glVertex2f(630,300);
    glVertex2f(570,300);
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
        // delay(500);
        glutTimerFunc(1000,red,0);
        glutTimerFunc(1000,blue,0);

        glutTimerFunc(2000,orange,0);
        glutTimerFunc(2000,green,0);

        
        glutTimerFunc(3000,moveHorizontal,0);

        // orange2(); 
        // green2();

        glutTimerFunc(3100,moveVertical,0);


        // moveAll(80,140,570,630); 
        // glutTimerFunc(2500,moveLeft,0);
        
        // moveLeft();
    }

    else if(id==2){
        brownA();
        brownB();

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
