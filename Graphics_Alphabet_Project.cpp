#include<GL/glut.h>

#include<stdio.h>

int choice=27;

void output(char *str)

{

              int k;

              for (k=0;k<strlen(str);k++){

                           glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,str[k]);

                           //glutBitmapCharacter(GLUT_BITMAP_9_BY_15, str[k]);

              }

}

void displayAlphabets(char* upper,char* lower){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(350 , 450 , 0);

              glColor3f(1.0 , 1.0 , 1.0);

              glScalef(1.5 , 2 ,0);

              glLineWidth(15);

              output(upper);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(480 , 450 , 0);

              glColor3f(1.0 , 1.0 , 1.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(5);

              output(lower);

              glPopMatrix();

              glMatrixMode(GL_PROJECTION);

              //glLoadIdentity();

              glFlush();

}

void ladder()

{

glBegin(GL_POLYGON);

glColor4f(1.0,0.5,0.0,1.0);

glVertex2i(600,400);

glVertex2i(620,400);

glVertex2i(655,700);

glVertex2i(635,700);

glFlush();

glEnd();

glBegin(GL_POLYGON);

glVertex2i(680,400);

glVertex2i(700,400);

glVertex2i(735,700);

glVertex2i(715,700);

glFlush();

glEnd();

glBegin(GL_POLYGON);

glVertex2i(610,450);

glVertex2i(700,450);

glVertex2i(700,465);

glVertex2i(610,465);

glFlush();

glEnd();

glBegin(GL_POLYGON);

glVertex2i(635,520);

glVertex2i(695,520);

glVertex2i(695,535);

glVertex2i(635,535);

glFlush();

glEnd();

glBegin(GL_POLYGON);

glVertex2i(625,590);

glVertex2i(705,590);

glVertex2i(705,605);

glVertex2i(625,605);

glFlush();

glEnd();

glBegin(GL_POLYGON);

glVertex2i(640,660);

glVertex2i(712,660);

glVertex2i(712,675);

glVertex2i(640,675);

glFlush();

glEnd();

}

void moon(){

glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    glColor4f(192.0,192.0,192.0,1.0);

              glPushMatrix();

 

              glTranslatef(620.5,550,0);

 

glScalef(6,12,0);

 

              glutSolidSphere(7,25,20);

 

              glPopMatrix();

             

              

              glMatrixMode(GL_MODELVIEW);

 

              glLoadIdentity();

 

            glColor4f(0.0,0.0,0.0,1.0);

 

              glPushMatrix();

 

              glTranslatef(640.5,550,0);

 

glScalef(6,12,0);

 

              glutSolidSphere(7,25,20);

 

              glPopMatrix();

              glColor3f(0.9,0.8,0.0);

              glBegin(GL_QUADS);

 

              glVertex2f(650,630);

 

              glVertex2f(660,680);

 

              glVertex2f(670,630);

 

              glVertex2f(660,645);

 

              glVertex2f(650,630);

 

              glEnd();

 

              glBegin(GL_POLYGON);

 

              glVertex2f(660,645);

 

              glVertex2f(642,660);

 

              glVertex2f(678,660);

 

              glEnd();

             

               glBegin(GL_QUADS);

 

              glVertex2f(650,580);

 

              glVertex2f(660,630);

 

              glVertex2f(670,580);

 

              glVertex2f(660,595);

 

              glVertex2f(650,580);

 

              glEnd();

 

              glBegin(GL_POLYGON);

 

              glVertex2f(660,595);

 

              glVertex2f(642,610);

 

              glVertex2f(678,610);

 

              glEnd();

          }

void front(){

              glClear(GL_COLOR_BUFFER_BIT);

              glBegin(GL_POLYGON);

              glColor3f(1.0,1.0,0.0);

              glVertex2f(50,1000);

              glVertex2f(950,1000);

              glVertex2f(950,850);

              glVertex2f(50,850);

              glEnd();

glPushMatrix();

glTranslatef(100 , 900 , 0);

glColor3f(0.0 , 0.0 , 0.0);

glScalef(0.15, 0.8 ,0);

glLineWidth(6);

output("Mangalore Institute of Technology and Engineering");

glPopMatrix();

              glBegin(GL_POLYGON);

              glColor3f(0.2,0.2,1.0);

              glVertex2f(330,820);

              glVertex2f(710,820);

              glVertex2f(710,700);

              glVertex2f(330,700);

              glEnd();

glPushMatrix();

glTranslatef(350, 750 , 0);

glColor3f(1.0 , 1.0 , 1.0);

glScalef(0.1 , 0.5 ,0);

glLineWidth(3);

output("Computer Science and Engineering");

glPopMatrix();

 

glPushMatrix();

glTranslatef(10, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("T");

glPopMatrix();

 

glPushMatrix();

glTranslatef(50, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("H");

glPopMatrix();

 

glPushMatrix();

glTranslatef(100, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("E");

glPopMatrix();

 

glPushMatrix();

glTranslatef(840, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("S");

glPopMatrix();

 

glPushMatrix();

glTranslatef(890, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("E");

glPopMatrix();

 

glPushMatrix();

glTranslatef(930, 450 , 0);

glColor3f(0.0, 0.0 , 0.0);

glScalef(0.5 , 1,0);

glLineWidth(10);

output("T");

glPopMatrix();

 

 

glPushMatrix();

glTranslatef(150, 450 , 0);

glColor3f(1.0, 0.0 , 0.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("A");

glPopMatrix();

 

glPushMatrix();

glTranslatef(240, 450 , 0);

glColor3f(1.0, 1.0 , 0.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("L");

glPopMatrix();

 

glPushMatrix();

glTranslatef(320, 450 , 0);

glColor3f(1.0, 0.0 , 1.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("P");

glPopMatrix();

 

glPushMatrix();

glTranslatef(400, 450 , 0);

glColor3f(0.0, 0.0 , 1.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("H");

glPopMatrix();

 

 

glPushMatrix();

glTranslatef(485, 450 , 0);

glColor3f(0.0, 1.0 , 1.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("A");

glPopMatrix();

 

 

glPushMatrix();

glTranslatef(570, 450 , 0);

glColor3f(1.0, 0.0 , 0.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("B");

glPopMatrix();

 

glPushMatrix();

glTranslatef(650, 450 , 0);

glColor3f(0.0, 1.0 , 0.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("E");

glPopMatrix();

 

glPushMatrix();

glTranslatef(735, 450 , 0);

glColor3f(0.0, 0.0 , 1.0);

glScalef(1 , 1.5,0);

glLineWidth(10);

output("T");

glPopMatrix();

 

glPushMatrix();

glTranslatef(40 , 300 , 0);

glColor3f(0.0 , 0.0 , 1.0);

glScalef(0.15, 0.2 ,0);

glLineWidth(4);

output("PRATHIJNA D S ");

glPopMatrix();

 

glPushMatrix();

glTranslatef(55 , 250 , 0);

glColor3f(0.0 , 0.0 , 1.0);

glScalef(0.15 , 0.2 ,0);

glLineWidth(4);

output("4MT19CS113");

glPopMatrix();

 

glPushMatrix();

glTranslatef(700 , 300 , 0);

glColor3f(0.0 , 0.0 , 1.0);

glScalef(0.15 , 0.2 ,0);

glLineWidth(4);

output("PALASH CHIPLUNKAR");

glPopMatrix();

 

glPushMatrix();

glTranslatef(750, 250 , 0);

glColor3f(0.0 , 0.0 , 1.0);

glScalef(0.15 , 0.2 ,0);

glLineWidth(4);

output("4MT19CS102");

glPopMatrix();

 

glPushMatrix();

glTranslatef(350 , 200 , 0);

glColor3f(1.0 , 0.0 , 1.0);

glScalef(0.15 , 0.2 ,0);

glLineWidth(4);

output("Under the guidance of");

glPopMatrix();

 

glPushMatrix();

glTranslatef(390 , 150 , 0);

glColor3f(1.0 , 0.0 , 1.0);

glScalef(0.15 , 0.2 ,0);

glLineWidth(4);

output("Ms. SUNITHA N V");

glPopMatrix();

 

glPushMatrix();

glTranslatef(600 ,50 , 0);

glColor3f(0.0 , 0.0 , 0.0);

glScalef(0.15, 0.2 ,0);

glLineWidth(3);

output("Press '1' To Continue...");

glPopMatrix();

 

glFlush();

 

}

void numbers(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(550 , 570 , 0);

              glColor3f(1.0 , 0.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("1");

              glPopMatrix();

              glPushMatrix();

              glTranslatef(590 , 570 , 0);

              glColor3f(1.0 , 0.0 , 1.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("2");

              glPopMatrix();

              glPushMatrix();

              glTranslatef(635 , 570 , 0);

              glColor3f(1.0 , 1.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("3");

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(680 , 570 , 0);

              glColor3f(0.0 , 0.0 , 1.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("4");

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(720 , 570 , 0);

              glColor3f(0.0 , 1.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("5");

              glPopMatrix();

             

             

                           glPushMatrix();

              glTranslatef(550 , 450 , 0);

              glColor3f(1.0 , 0.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("6");

              glPopMatrix();

              glPushMatrix();

              glTranslatef(590 , 450 , 0);

              glColor3f(1.0 , 0.0 , 1.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("7");

              glPopMatrix();

              glPushMatrix();

              glTranslatef(635 , 450 , 0);

              glColor3f(1.0 , 1.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("8");

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(680 , 450 , 0);

              glColor3f(0.0 , 0.0 , 1.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("9");

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(720 , 450 , 0);

              glColor3f(0.0 , 1.0 , 0.0);

              glScalef(0.5 , 1 ,0);

              glLineWidth(10);

              output("0");

              glPopMatrix();

}

void question(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(580 , 430 , 0);

              glColor3f(1.0 , 1.0 , 0.0);

              glScalef(1.5 , 2.5 ,0);

              glLineWidth(20);

              output("?");

              glPopMatrix();

}

void pencil(){

glBegin(GL_POLYGON);

glColor4f(1.0,1.0,0.0,1.5);

glVertex2i(600,400);

glVertex2i(630,400);

glVertex2i(630,600);

glVertex2i(600,600);

 

 

glFlush();

glEnd();

glBegin(GL_TRIANGLES);

glColor3f(1.0f, 0.5f, 0.0f);

glVertex2i(600,600);

glVertex2i(630,600);

glVertex2i(615,650);

glFlush();

glEnd();

 

glBegin(GL_TRIANGLES);

glColor3f(1.0,1.0,1.0);

glVertex2i(608,630);

glVertex2i(622,630);

glVertex2i(615,650);

glFlush();

glEnd();

 

glBegin(GL_POLYGON);

glColor4f(1.0,0.0,0.0,1.5);

glVertex2i(600,400);

glVertex2i(630,400);

glVertex2i(630,430);

glVertex2i(600,430);

glFlush();

glEnd();    

 }

void star(){

                           glColor3f(1.0,1.0,1.0);

              glBegin(GL_QUADS);

              glVertex2f(600,430);

              glVertex2f(660,680);

              glVertex2f(720,430);

              glVertex2f(660,515);

              glVertex2f(600,430);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(660,515);

              glVertex2f(580,610);

              glVertex2f(740,610);

              glEnd();

}

void orange(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0,0.4,0.0);

              glPushMatrix();

              glTranslatef(640,520,0);

              glScalef(6,12,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(0.4,0.1,0);

              glBegin(GL_POLYGON);

              glVertex2f(638,635);

              glVertex2f(643,635);

              glVertex2f(643,670);

              glVertex2f(638,670);

              glEnd();

             

              glColor3f(0.3,0.7,0.1);

              glPushMatrix();

              glTranslatef(660,670,0);

              glRotatef(-18.0,0.0,0.0,1.0);

              glScalef(1.2,4.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glLineWidth(1);

              glColor3f(0.0,0.0,0.0);

              glBegin(GL_LINES);

              glVertex2f(652,647);

              glVertex2f(668,687);

 

              glEnd();

}

void kkey(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0 , 0.0 , 1.0);

              glPushMatrix();

              glTranslatef(600 , 500 , 0);

              glScalef(3 ,6,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(600 , 500 , 0);

              glScalef(2 ,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0 , 0.0 , 1.0);

              glBegin(GL_POLYGON);

              glVertex2f(625,530);

              glVertex2f(750,600);

              glVertex2f(750,580);

              glVertex2f(625,510);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(703,560);

              glVertex2f(710,520);

              glVertex2f(720,527);

              glVertex2f(715,565);

              glEnd();

             

              glBegin(GL_POLYGON);

              glVertex2f(714,570);

              glVertex2f(718,540);

              glVertex2f(728,547);

              glVertex2f(724,575);

              glEnd();

             

              glBegin(GL_POLYGON);

              glVertex2f(724,580);

              glVertex2f(728,530);

              glVertex2f(738,537);

              glVertex2f(732,585);

              glEnd();

}

void house(){

              glColor3f(1.0,0.0,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(600,660);

              glVertex2f(700,660);

              glVertex2f(720,600);

              glVertex2f(580,600);

              glEnd();

              glColor3f(1.0,0.5,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(590,600);

              glVertex2f(710,600);

              glVertex2f(710,450);

              glVertex2f(590,450);

              glEnd();

              glColor3f(0.5,0.3,0.1);

              glBegin(GL_POLYGON);

              glVertex2f(580,450);

              glVertex2f(720,450);

              glVertex2f(720,420);

              glVertex2f(580,420);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(600,660);

              glVertex2f(610,660);

              glVertex2f(610,690);

              glVertex2f(600,690);

              glEnd();

              glColor3f(0.5,0.9,1.0);

              glPushMatrix();

              glTranslatef(615 , 540 , 0);

              glRotatef(-30,1.0,0.0,0.0);

              glScalef(0.8 ,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(685 , 540 , 0);

              glRotatef(-30,1.0,0.0,0.0);

              glScalef(0.8 ,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.5,0.3,0.1);

              glLineWidth(2);            

              glBegin(GL_LINES);

              glVertex2f(685,537);

              glVertex2f(685,575);

             

              glVertex2f(615,537);

              glVertex2f(615,575);

             

              glVertex2f(678,560);

              glVertex2f(692,560);

             

              glVertex2f(607,560);

              glVertex2f(622,560);

              glEnd();

}

void gift(){

              glColor3f(1.0,0.8,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(600,430);

              glVertex2f(700,430);

              glVertex2f(700,630);

              glVertex2f(600,630);

              glEnd();

              glColor3f(1.0,0.0,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(580,630);

              glVertex2f(720,630);

              glVertex2f(720,660);

              glVertex2f(580,660);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(643,630);

              glVertex2f(657,630);

              glVertex2f(657,430);

              glVertex2f(643,430);

              glEnd();

              glColor3f(0.0,0.0,0.0);

              glLineWidth(1);

              glBegin(GL_LINE_LOOP);

              glVertex2f(641,630);

              glVertex2f(659,630);

              glVertex2f(659,660);

              glVertex2f(641,660);

              glEnd();

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(662 , 685 , 0);

              glRotatef(-15,0.0,0.0,1.0);

              glScalef(1 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(638 , 685 , 0);

              glRotatef(15,0.0,0.0,1.0);

              glScalef(1 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void jet(){

              glColor3f(1.0,0.0,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(610,480);

              glVertex2f(580,440);

              glVertex2f(580,530);

              glVertex2f(610,560);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(690,480);

              glVertex2f(720,440);

              glVertex2f(720,530);

              glVertex2f(690,560);

              glEnd();

             

              glColor3f(1.0,0.5,0.0);

              glPushMatrix();

              glTranslatef(620 , 450 , 0);

              glRotatef(-15,0.0,0.0,1.0);

              glScalef(1 ,5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(630 , 430 , 0);

              glRotatef(-10,0.0,0.0,1.0);

              glScalef(1 ,6,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(650 , 430 , 0);

              glScalef(2 ,6,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

                           glPushMatrix();

              glTranslatef(680 , 450 , 0);

              glRotatef(15,0.0,0.0,1.0);

              glScalef(1 ,5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670 , 430 , 0);

              glRotatef(10,0.0,0.0,1.0);

              glScalef(1 ,6,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0,0.8,0.0);

              glPushMatrix();

              glTranslatef(630 , 465 , 0);

              glRotatef(-15,0.0,0.0,1.0);

              glScalef(0.5 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(640 , 465 , 0);

              glRotatef(-10,0.0,0.0,1.0);

              glScalef(0.5 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(650 , 465 , 0);

              glScalef(1 ,5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670 , 465 , 0);

              glRotatef(15,0.0,0.0,1.0);

              glScalef(0.5 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(660 , 465 , 0);

              glRotatef(10,0.0,0.0,1.0);

              glScalef(0.5 ,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,1.0,0.0);

              glBegin(GL_TRIANGLES);

              glVertex2f(650,720);

              glVertex2f(610,630);

              glVertex2f(690,630);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(610,630);

              glVertex2f(690,630);

              glVertex2f(690,480);

              glVertex2f(610,480);

              glEnd();

                           glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(650 ,620 , 0);

              glScalef(1.4,2.4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.5,0.9,1.0);

              glPushMatrix();

              glTranslatef(650 ,620 , 0);

              glScalef(1 ,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void bat(){

              glColor3f(1.0,0.9,0.8);

              glBegin(GL_POLYGON);

              glVertex2f(640,610);

              glVertex2f(650,610);

              glVertex2f(650,720);

              glVertex2f(640,720);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(630,390);

              glVertex2f(660,390);

              glVertex2f(660,610);

              glVertex2f(630,610);

              glEnd();

              glLineWidth(4);

              glColor3f(1.0,0.6,0.1);

              glBegin(GL_LINE_LOOP);

              glVertex2f(630,390);

              glVertex2f(660,390);

              glVertex2f(660,610);

              glVertex2f(630,610);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(645,610);

              glVertex2f(645,425);

              glVertex2f(645,425);

              glVertex2f(660,390);

              glVertex2f(645,425);

              glVertex2f(630,390);

              glEnd();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0 , 0.5 , 0.0);

              glPushMatrix();

              glTranslatef(645 , 720 , 0);

              glScalef(1,0.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void ring(){

              glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

              glColor3f(255.0, 215.0, 0.0);

              glPushMatrix();

              glTranslatef(680,550,0);

              glScalef(5.0,7.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(680,550,0);

              glScalef(4.7,7.2,0);

              glutSolidSphere(8,20,20);

              glPopMatrix();

                                                       glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(680,630,0);

              glScalef(3.4,4.5,0);

 

    glutSolidSphere(5,10,20);

              glPopMatrix();

              

}

void zero(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(620 , 450 , 0);

              glColor3f(1.0 , 1.0 , 0.8);

              glScalef(1 , 2.5 ,0);

              glLineWidth(20);

              output("0");

              glPopMatrix();

}

void yellow(){

              glColor3f(1.0,1.0,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(600,450);

              glVertex2f(750,450);

              glVertex2f(750,650);

              glVertex2f(600,650);

              glEnd();

}

void van(){

              glColor3f(0.9,0.4,0.1);

              glBegin(GL_POLYGON);

              glVertex2f(600,650);

              glVertex2f(750,650);

              glVertex2f(750,500);

              glVertex2f(600,500);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(600,575);

              glVertex2f(600,500);

              glVertex2f(570,500);

              glVertex2f(570,575);

              glEnd();

              glBegin(GL_TRIANGLES);

              glVertex2f(600,650);

              glVertex2f(600,575);

              glVertex2f(570,575);

              glEnd();

              glColor3f(0.4,0.6,0.1);

              glBegin(GL_POLYGON);

              glVertex2f(570,500);

              glVertex2f(750,500);

              glVertex2f(750,480);

              glVertex2f(570,480);

              glEnd();

             

              glColor3f(0.5,0.9,1.0);

              glBegin(GL_POLYGON);

              glVertex2f(690,630);

              glVertex2f(740,630);

              glVertex2f(740,560);

              glVertex2f(690,560);

              glEnd();

 

              glColor3f(0.5,0.9,1.0);

              glBegin(GL_POLYGON);

              glVertex2f(630,630);

              glVertex2f(680,630);

              glVertex2f(680,560);

              glVertex2f(630,560);

              glEnd();

              glColor3f(0.0,0.0,0.0);

              glLineWidth(1);

              glBegin(GL_LINE_LOOP);

              glVertex2f(690,630);

              glVertex2f(740,630);

              glVertex2f(740,560);

              glVertex2f(690,560);

              glEnd();

             

              glColor3f(0.0,0.0,0.0);

              glLineWidth(1);

              glBegin(GL_LINE_LOOP);

              glVertex2f(630,630);

              glVertex2f(680,630);

              glVertex2f(680,560);

              glVertex2f(630,560);

              glEnd();

              glBegin(GL_LINE_LOOP);

              glVertex2f(621,630);

              glVertex2f(600,630);

              glVertex2f(575,559);

              glVertex2f(621,559);

              glEnd();

              glColor3f(0.5,0.9,1.0);

              glBegin(GL_POLYGON);

              glVertex2f(620,630);

              glVertex2f(600,630);

              glVertex2f(575,560);

              glVertex2f(620,560);

              glEnd();

 

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

                           glColor3f(1.0, 1.0 , 1.0);

              glPushMatrix();

              glTranslatef(610 , 480 , 0);

              glScalef(2.1 , 4.1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(610 , 480 , 0);

              glScalef(2 , 4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.5 , 0.5 , 0.5);

              glPushMatrix();

              glTranslatef(610 , 480 , 0);

              glScalef(1 , 2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

             

              glColor3f(1.0, 1.0 , 1.0);

              glPushMatrix();

              glTranslatef(710 , 480 , 0);

              glScalef(2.1 , 4.1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(710 , 480 , 0);

              glScalef(2 , 4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.5 , 0.5 , 0.5);

              glPushMatrix();

              glTranslatef(710 , 480 , 0);

              glScalef(1 , 2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

}

void watermelon(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0 , 0.7 , 0.2);

              glPushMatrix();

              glTranslatef(650 , 620 , 0);

              glRotatef(5,1.0,0.0,0.0);

              glScalef(10.5 ,10.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.7 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(650 , 620 , 0);

              glRotatef(5,1.0,0.0,0.0);

              glScalef(10 ,10,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(650 , 600 , 0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670 , 600 , 0);

              glRotatef(20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(690 , 600 , 0);

              glRotatef(20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(630 , 600 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

 

             

                           glPushMatrix();

              glTranslatef(590 , 560 , 0);

              glRotatef(20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

                           glPushMatrix();

              glTranslatef(670 , 560 , 0);

              glRotatef(20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glPushMatrix();

              glTranslatef(620 , 560 , 0);

              glRotatef(20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

                           glPushMatrix();

              glTranslatef(650 , 550 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glPushMatrix();

              glTranslatef(720 , 600 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(700 , 570 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

                           glPushMatrix();

              glTranslatef(570 , 600 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(610 , 600 , 0);

              glRotatef(-20,0.0,0.0,1.0);

              glScalef(0.2 ,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void ufo(){

              glColor3f(1.0,1.0,1.0);

              glBegin(GL_LINES);

              glVertex2f(650,690);

              glVertex2f(650,700);

              glEnd();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0 , 0.5 , 0.0);

              glPushMatrix();

              glTranslatef(650 , 530 , 0);

              glScalef(3 , 7,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(600 , 540 , 0);

                           glRotatef(-15,0.0,0.0,1.0);

              glScalef(2, 5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(700 , 540 , 0);

                           glRotatef(15,0.0,0.0,1.0);

              glScalef(2, 5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.5 , 0.9 , 1.0);

              glPushMatrix();

              glTranslatef(650 , 610 , 0);

              glScalef(5 , 8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.1 , 0.7 , 0.1);

              glPushMatrix();

              glTranslatef(650 , 550 , 0);

              glScalef(9 , 5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0 , 1.0 , 0.0);

              glPushMatrix();

              glTranslatef(590 , 550 , 0);

              glScalef(1 , 0.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

glColor3f(1.0 , 1.0 , 0.0);

              glPushMatrix();

              glTranslatef(710 , 550 , 0);

              glScalef(1 , 0.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(620 , 540 , 0);

              glScalef(1 , 0.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(1.0 , 0.0 , 0.0);

              glPushMatrix();

              glTranslatef(680 , 540 , 0);

              glScalef(1 , 0.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

                           glColor3f(1.0 , 0.5 , 0.0);

              glPushMatrix();

              glTranslatef(650 , 530 , 0);

              glScalef(1 , 0.8,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(650,708,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void xmass(){

              glLineWidth(5);

              glColor3f(1.0,1.0,1.0);

              glBegin(GL_LINES);

              glVertex2f(650,600);

              glVertex2f(550,450);

              glVertex2f(650,600);

              glVertex2f(750,450);  

              glVertex2f(550,450);  

              glVertex2f(750,450);

              glEnd();

              glColor3f(0.2,0.6,0.1);

                           glBegin(GL_TRIANGLES);

              glVertex2f(650,600);

              glVertex2f(550,450);

              glVertex2f(750,450);

              glEnd();

             

              glColor3f(1.0,1.0,1.0);

                           glBegin(GL_LINES);

              glVertex2f(650,640);

              glVertex2f(570,530);

              glVertex2f(650,640);

              glVertex2f(730,530);

              glVertex2f(570,530);

              glVertex2f(730,530);

              glEnd();

              glColor3f(0.2,0.6,0.1); glBegin(GL_TRIANGLES);

              glVertex2f(650,640);

              glVertex2f(570,530);

              glVertex2f(730,530);

              glEnd();

              glColor3f(1.0,1.0,1.0);

                           glBegin(GL_LINES);

              glVertex2f(650,680);

              glVertex2f(600,600);

              glVertex2f(650,680);

              glVertex2f(700,600);

              glVertex2f(600,600);

              glVertex2f(700,600);

              glEnd();

              glColor3f(0.2,0.6,0.1);

              glBegin(GL_TRIANGLES);

              glVertex2f(650,680);

              glVertex2f(600,600);

              glVertex2f(700,600);

              glEnd();

              glColor3f(1.0,0.0,0.0);

              glBegin(GL_QUADS);

              glVertex2f(650,630);

              glVertex2f(660,680);

              glVertex2f(670,630);

              glVertex2f(660,645);

              glVertex2f(650,630);

              glEnd();

              glBegin(GL_POLYGON);

              glVertex2f(660,645);

              glVertex2f(642,660);

              glVertex2f(678,660);

              glEnd();

             

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0,0.0,1.0);

              glPushMatrix();

              glTranslatef(610,560,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(630,650,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

 

              glColor3f(1.0,0.5,0.0);

              glPushMatrix();

              glTranslatef(640,630,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.0,0.9,1.0);

              glPushMatrix();

              glTranslatef(635,600,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(650,560,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.0,0.0,1.0);

              glPushMatrix();

              glTranslatef(660,500,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(630,490,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.6,0.0,0.8);

              glPushMatrix();

              glTranslatef(610,480,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(580,450,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(700,450,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.6,0.0,0.8);

              glPushMatrix();

              glTranslatef(710,550,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(1.0,1.0,0.0);

              glPushMatrix();            

              glTranslatef(720,470,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glColor3f(0.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(680,630,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(1.0,0.5,0.0);

              glPushMatrix();

              glTranslatef(670,580,0);

              glScalef(0.6,1.2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

              glBegin(GL_POLYGON);

              glVertex2f(638,450);

              glVertex2f(660,450);

              glVertex2f(660,400);

              glVertex2f(638,400);

 

              glEnd();

 

}

void apple(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(630,500,0);

              glRotatef(8.0,0.0,0.0,1.0);

              glScalef(5,10.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670,500,0);

              glRotatef(-8.0,0.0,0.0,1.0);

              glScalef(5,10.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.4,0.1,0);

              glBegin(GL_POLYGON);

              glVertex2f(648,585);

              glVertex2f(653,585);

              glVertex2f(660,670);

              glVertex2f(642,670);

              glEnd();

              glColor4f(1.0,1.0,1.0,0.1);

              glPushMatrix();

              glTranslatef(610,500,0);

              glRotatef(8.0,0.0,0.0,1.0);

              glScalef(2,6.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,0.8,0.3);

              glPushMatrix();

              glTranslatef(651,670,0);

              glScalef(1,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.3,0.7,0.1);

              glPushMatrix();

              glTranslatef(670,640,0);

              glRotatef(-18.0,0.0,0.0,1.0);

              glScalef(1.2,4.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glLineWidth(1);

              glColor3f(0.0,0.0,0.0);

              glBegin(GL_LINES);

              glVertex2f(662,620);

              glVertex2f(678,660);

              glVertex2f(682,680);

              glVertex2f(680 ,684);

              glEnd();

             

}

void icecream(){

              glBegin(GL_TRIANGLES);

              glColor3f(0.5,0.3,0.1);

              glVertex2f(600,550);

              glVertex2f(650,550);

              glVertex2f(625,400);

              glEnd();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

             

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(625,700,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,1.0,0.9);

              glPushMatrix();

              glTranslatef(625,630,0);

              glScalef(3.5,6,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

             

              glColor3f(0.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(625,550,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(610,550,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(595,550,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(640,550,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(655,550,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(1.0,1.0,0.0);

              glPushMatrix();

              glTranslatef(625,570,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(610,570,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(595,570,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(640,570,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(655,570,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

                           glColor3f(1.0,0.0,1.0);

              glPushMatrix();

              glTranslatef(625,590,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(610,590,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(595,590,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(640,590,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(655,590,0);

              glScalef(1,2,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

 

 

}

void egg(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0,1.0,1.0);

              glPushMatrix();

              glTranslatef(680,580,0);

              glScalef(3.5,10.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

}

void Candle(){

              glBegin(GL_POLYGON);

              glColor3f(1.0,0.9,0.9);

              glVertex2f(620,400);

              glVertex2f(640,400);

              glVertex2f(640,600);

              glVertex2f(620,600);

              glEnd();

              glColor3f(1.0,1.0,1.0);

              glBegin(GL_POLYGON);

              glVertex2f(628,600);

              glVertex2f(632,600);

              glVertex2f(632,610);

              glVertex2f(628,610);

              glEnd();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(1.0,0.6,0.0);

              glPushMatrix();

              glTranslatef(630,645,0);

              glScalef(1,3.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glMatrixMode(GL_PROJECTION);

              glColor3f(1.0,1.0,1.0);

              glLineWidth(1);

              glBegin(GL_LINES);

              glVertex2f(610,630);

              glVertex2f(600,640);

              glVertex2f(610,660);

              glVertex2f(600,670);

              glVertex2f(650,630);

              glVertex2f(660,640);

              glVertex2f(650,660);

              glVertex2f(660,670);

              glVertex2f(630,690);

              glVertex2f(630,710);

 

              glEnd();

              glFlush();

}

void flag(){

              glLineWidth(2);

              glColor3f(1.0,1.0,1.0);

              glBegin(GL_LINE_LOOP);

              glVertex2f(600,530);

              glVertex2f(740,530);

              glVertex2f(740,700);

              glVertex2f(600,700);

              glEnd();

             

 

              glBegin(GL_POLYGON);

              glColor3f(1.0,0.5,0.0);

              glVertex2f(600,644);

              glVertex2f(740,644);

              glVertex2f(740,700);

              glVertex2f(600,700);

              glEnd();

             

             

              glBegin(GL_POLYGON);

              glColor3f(1.0,1.0,1.0);

              glVertex2f(600,588);

              glVertex2f(740,588);

              glVertex2f(740,644);

              glVertex2f(600,644);

              glEnd();

             

             

              glBegin(GL_POLYGON);

              glColor3f(0.0,1.0,0.0);

              glVertex2f(600,532);

              glVertex2f(740,532);

              glVertex2f(740,588);

              glVertex2f(600,588);

              glEnd();

             

             

              glBegin(GL_POLYGON);

              glColor3f(0.3, 0.1, 0.0);

              glVertex2f(598,400);

              glVertex2f(606,400);

              glVertex2f(606,530);

              glVertex2f(598,530);

              glEnd();

             

             

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0,0.0,1.0);

              glPushMatrix();

              glTranslatef(670,618,0);

              glScalef(2,3,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

             

              glColor3f(1.0,1.0,1.0);

              glPushMatrix();

              glTranslatef(670,618,0);

              glScalef(1.7,2.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

             

              glColor3f(0.0,0.0,1.0);

              glPushMatrix();

              glTranslatef(670,618,0);

              glScalef(0.5,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

             

             

              glLineWidth(1);

              glColor3f(0.0,0.0,1.0);

              glBegin(GL_LINES);

              glVertex2f(670,590);

              glVertex2f(670,645);

              glVertex2f(650,618);

              glVertex2f(690,618);

              glVertex2f(660,640);

              glVertex2f(680,590);

              glVertex2f(680,640);

              glVertex2f(660,590);

              glEnd();

              glFlush();

}

void Doll(){

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

             

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(610,560,0);

 

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(690,560,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(610,480,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(690,480,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,1.0,1.0);

              glPushMatrix();

              glTranslatef(650,530,0);

              glScalef(4,9.5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(650,530,0);

              glScalef(2.5,5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

 

              glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(630,660,0);

              glScalef(0.5,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670,660,0);

              glScalef(0.5,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,1.0,1.0);

              glPushMatrix();

              glTranslatef(650,630,0);

              glScalef(2,5,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(642,655,0);

              glScalef(0.5,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(657,655,0);

              glScalef(0.5,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(1.0,1.0,1.0);

              glPointSize(3);

              glBegin(GL_POINTS);

              glVertex2f(641,655);

              glEnd();

             

              glColor3f(1.0,1.0,1.0);

              glPointSize(3);

              glBegin(GL_POINTS);

              glVertex2f(656,655);

              glEnd();

                           glColor3f(1.0,0.0,0.0);

              glPushMatrix();

              glTranslatef(650,630,0);

              glScalef(1,1,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glMatrixMode(GL_PROJECTION);

}

void tree(){

             

              glColor3f(0.4,0.1,0.0);

              glBegin(GL_POLYGON);

              glVertex2f(610,600);

              glVertex2f(670,600);

              glVertex2f(670,400);

              glVertex2f(610,400);

              glVertex2f(670,500);

              glVertex2f(700,520);

              glVertex2f(670,490);

              glEnd();

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glColor3f(0.0,0.5,0.0);

              glPushMatrix();

              glTranslatef(630,680,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(610,650,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(650,680,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670,670,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(615,620,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(645,620,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(670,620,0);

              glScalef(2,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glColor3f(0.2,0.1,0.0);

              glPushMatrix();

              glTranslatef(630,500,0);

              glScalef(1,4,0);

              glutSolidSphere(10,20,20);

              glPopMatrix();

              glFlush();

}

void display(){

              glClear(GL_COLOR_BUFFER_BIT);

              glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

              glEnable( GL_BLEND );

             

              glColor3f(0.9,0.9,0.9);

              glBegin(GL_POLYGON);

 

              glVertex2i(0,0);

              glVertex2i(1000,0);

              glVertex2i(1000,1000);

              glVertex2i(0,1000);

              glEnd();

              glColor3f(0.0,0.0,0.0);

              glLineWidth(3);

              glBegin(GL_LINE_LOOP);

              glVertex2i(0,1000);

              glVertex2i(150,850);

              glVertex2i(150,200);

              glVertex2i(0,0);

              glEnd();

              glBegin(GL_LINES);

              glVertex2i(150,850);

              glVertex2i(1000,850);

              glEnd();

              glBegin(GL_LINES);

              glVertex2i(150,200);

              glVertex2i(1000,200);

              glEnd();

              glColor3f(0.4, 0.2, 0.1);

              glLineWidth(10);

              glBegin(GL_LINE_LOOP);

              glVertex2i(0,0);

              glVertex2i(130,180);

              glVertex2i(130,650);

              glVertex2i(0,750);

              glEnd();

             

              //outside door

              glBegin(GL_QUADS);

              glColor3f(0.4f, 0.7f, 0.1f);

    glVertex2f(0, 0);

    glColor3f(0.4f, 0.7f, 0.1f);

              glVertex2f(130, 180);

    glColor3f(0.5f, 0.9f, 1.0f);

    glVertex2f(130, 650);

    glColor3f(0.5f, 0.9f, 1.0f);

    glVertex2f(0, 750);

    glEnd();

      

    //door

    glColor3f(0.4, 0.2, 0.1);

              glBegin(GL_POLYGON);

              glVertex2i(130,650);

              glVertex2i(30,600);

              glVertex2i(30,210);

              glVertex2i(130,180);

              glEnd();

             

              //door handle

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(40,400,0);

              glColor3f(1.0,1.0,0.0);

              glutSolidSphere(5,20,20);

              glPopMatrix();

             

              //blackboard

              glColor3f(0.0, 0.0, 0.0);

              glBegin(GL_POLYGON);

              glVertex2i(300,750);

              glVertex2i(800,750);

              glVertex2i(800,350);

              glVertex2i(300,350);

              glEnd();

             

              //blackboard border

              glColor3f(0.4, 0.2, 0.1);

              glLineWidth(15);

              glBegin(GL_LINE_LOOP);

              glVertex2i(300,750);

              glVertex2i(800,750);

              glVertex2i(800,350);

              glVertex2i(300,350);

              glEnd();

             

               //Teacher's Desk

              glColor3f(0.1, 0.0, 0.0);

              glBegin(GL_POLYGON);           

              glVertex2i(350,220);

              glVertex2i(750,220);

              glVertex2i(730,300);

              glVertex2i(370,300);

              glEnd();

              glColor3f(0.3, 0.1, 0.0);

              glBegin(GL_POLYGON);

              glVertex2i(350,220);

              glVertex2i(750,220);

              glVertex2i(750,200);

              glVertex2i(350,200);

              glEnd();

             

              glBegin(GL_POLYGON);

              glVertex2i(400,200);

              glVertex2i(410,200);

              glVertex2i(400,100);

              glVertex2i(410,100);

              glEnd();

             

              glBegin(GL_POLYGON);

              glVertex2i(700,200);

              glVertex2i(710,200);

              glVertex2i(700,100);

              glVertex2i(710,100);

              glEnd();

              //Students desk

              glColor3f(0.8, 0.5, 0.1);

              glBegin(GL_POLYGON);

              glVertex2i(300,100);

              glVertex2i(500,100);

              glVertex2i(490,150);

              glVertex2i(310,150);

              glEnd();

             

              glBegin(GL_POLYGON);

              glVertex2i(600,100);

              glVertex2i(800,100);

              glVertex2i(790,150);

              glVertex2i(610,150);

              glEnd();

              glColor3f(0.8, 0.5, 0.2);

              glBegin(GL_POLYGON);

              glVertex2i(600,100);

              glVertex2i(800,100);

              glVertex2i(800,90);

              glVertex2i(600,90);

              glEnd();

                           glColor3f(0.8, 0.5, 0.2);

              glBegin(GL_POLYGON);

              glVertex2i(300,100);

              glVertex2i(500,100);

              glVertex2i(500,90);

              glVertex2i(300,90);

              glEnd();

             

             

              glColor3f(1.0,1.0,0.7);

              glMatrixMode(GL_MODELVIEW);

              glLoadIdentity();

              glPushMatrix();

              glTranslatef(350.0,80.0,0.0);

              glScalef(0.8,1.5,0);

             glutSolidSphere(20, 50, 25);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(450.0,80.0,0.0);

              glScalef(0.8,1.5,0);

             glutSolidSphere(20, 20, 100);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(650.0,80.0,0.0);

              glScalef(0.8,1.5,0);

             glutSolidSphere(20, 20, 100);

              glPopMatrix();

              glPushMatrix();

              glTranslatef(750.0,80.0,0.0);

              glScalef(0.8,1.5,0);

             glutSolidSphere(20, 20, 100);

              glPopMatrix();

             

              glPushMatrix();

              glTranslatef(150 ,900 , 0);

              glColor3f(0.0 , 0.0 , 0.0);

              glScalef(0.15, 0.2 ,0);

              glLineWidth(3);

              output("Press corresponding Alphabet keys to change objects...");

              glPopMatrix();

             

                           //hairs

              glLineWidth(2);

              glColor3f(0.0,0.0,0.0);

              glBegin(GL_LINES);

              glVertex2f(336,110);

              glVertex2f(340,95);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(343,115);

              glVertex2f(347,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(351,115);

              glVertex2f(355,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(358,112);

              glVertex2f(362,97);

              glEnd();

 

              glBegin(GL_LINES);

              glVertex2f(436,110);

              glVertex2f(440,95);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(443,115);

              glVertex2f(447,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(451,115);

              glVertex2f(455,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(458,112);

              glVertex2f(462,97);

              glEnd();

             

             

              glColor3f(0.0,0.0,0.0);

              glBegin(GL_LINES);

              glVertex2f(636,110);

              glVertex2f(640,95);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(643,115);

              glVertex2f(647,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(651,115);

              glVertex2f(655,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(658,112);

              glVertex2f(662,97);

              glEnd();

             

              glColor3f(0.0,0.0,0.0);

              glBegin(GL_LINES);

              glVertex2f(736,110);

              glVertex2f(740,95);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(743,115);

              glVertex2f(747,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(751,115);

              glVertex2f(755,100);

              glEnd();

              glBegin(GL_LINES);

              glVertex2f(758,112);

              glVertex2f(762,97);

              glEnd();

              glColor3f(0.8,0.7,0.6);

              glBegin(GL_POLYGON);

              glVertex2i(440,790);

              glVertex2i(680,790);

              glVertex2i(680,840);

              glVertex2i(440,840);

              glEnd();

              glColor3f(1.0,1.0,1.0);

              glBegin(GL_POLYGON);

              glVertex2i(450,800);

              glVertex2i(670,800);

              glVertex2i(670,830);

              glVertex2i(450,830);

              glEnd();

 

             

              if(choice==27){

                           front();

              }

              if(choice==1){

                           displayAlphabets("A","a");

                           apple();

              }

              else if(choice==2){

                           displayAlphabets("B","b");

                           bat();

              }

              else if(choice==3){

                           displayAlphabets("C","c");

                           Candle();

              }

              else if(choice==4){

                           displayAlphabets("D","d");

                           Doll();

              }

              else if(choice==5){

                           displayAlphabets("E","e");

                           egg();

              }

              else if(choice==6){

                           displayAlphabets("F","f");

                           flag();

              }

              else if(choice==7){

                           displayAlphabets("G","g");

                           gift();

              }

              else if(choice==8){

                           displayAlphabets("H","h");

                           house();

              }

              else if(choice==24){

                           displayAlphabets("X","x");

                           xmass();

              }

              else if(choice==21){

                           displayAlphabets("U","u");

                           ufo();

              }

              else if(choice==22){

                           displayAlphabets("V","v");

                           van();

              }

              else if(choice==23){

                           displayAlphabets("W","w");

                           watermelon();

              }

              else if(choice==25){

                           displayAlphabets("Y","y");

                           yellow();

              }

              else if(choice==26){

                           displayAlphabets("Z","z");

                           zero();

              }

              else if(choice==18){

                           displayAlphabets("R","r");

                           ring();

              }

              else if(choice==10){

                           displayAlphabets("J","j");

                           jet();

              }

              else if(choice==9){

                           displayAlphabets("I","i");

                           icecream();

              }

              else if(choice==11){

                           displayAlphabets("K","k");

                           kkey();

              }

              else if(choice==20){

                           displayAlphabets("T","t");

                           tree();

              }

              else if(choice==15){

                           displayAlphabets("O","o");

                           orange();

              }

              else if(choice==19){

                           displayAlphabets("S","s");

                           star();

              }

              else if(choice==16){

                           displayAlphabets("P","p");

                           pencil();

              }

              else if(choice==17){

                           displayAlphabets("Q","q");

                           question();

              }

              else if(choice==14){

                           displayAlphabets("N","n");

                           numbers();

              }

              else if(choice==13){

                           displayAlphabets("M","m");

                           moon();

              }

              else if(choice==12){

                           displayAlphabets("L","l");

                           ladder();

              }

              glFlush();

}

 

void changeKey(unsigned char key,int x,int y){

              if(key=='1'){

                           choice=0;

                           glutPostRedisplay();

              }

              if(key=='a'){

                           choice=1;

                           glutPostRedisplay();

              }           

              if(key=='b'){

                           choice=2;

                           glutPostRedisplay();

                          

              }

              if(key=='c'){

                           choice=3;

                           glutPostRedisplay();

             

              }

              if(key=='d'){

                           choice=4;

                           glutPostRedisplay();

              }

              if(key=='e'){

              choice=5;

                           glutPostRedisplay();

              }

              if(key=='f'){

                           choice=6;

                           glutPostRedisplay();

              }

              if(key=='g'){

                           choice=7;

                           glutPostRedisplay();

              }

              if(key=='h'){

                           choice=8;

                           glutPostRedisplay();

              }

              if(key=='x'){

                           choice=24;

                           glutPostRedisplay();    

              }

              if(key=='u'){

                           choice=21;

                           glutPostRedisplay();

              }

              if(key=='v'){

                           choice=22;

                           glutPostRedisplay();

              }

              if(key=='w'){

                           choice=23;

                           glutPostRedisplay();

              }

              if(key=='y'){

                           choice=25;

                           glutPostRedisplay();

              }

              if(key=='z'){

                           choice=26;

                           glutPostRedisplay();

              }

              if(key=='r'){

                           choice=18;

                           glutPostRedisplay();

              }

              if(key=='b'){

                           choice=2;

                           glutPostRedisplay();

              }

              if(key=='j'){

                           choice=10;

                           glutPostRedisplay();

              }

              if(key=='i'){

                           choice=9;

                           glutPostRedisplay();

              }

              if(key=='k'){

                           choice=11;

                           glutPostRedisplay();

              }

              if(key=='t'){

                           choice=20;

                           glutPostRedisplay();

              }

              if(key=='o'){

                           choice=15;

                           glutPostRedisplay();

              }

              if(key=='s'){

                           choice=19;

                           glutPostRedisplay();

              }

              if(key=='p'){

                           choice=16;

                           glutPostRedisplay();

              }

              if(key=='q'){

                           choice=17;

                           glutPostRedisplay();

              }

              if(key=='n'){

                           choice=14;

                           glutPostRedisplay();

              }

              if(key=='m'){

                           choice=13;

                           glutPostRedisplay();

              }

              if(key=='l'){

                           choice=12;

                           glutPostRedisplay();

              }

}

int main(int argc,char **argv){

              glutInit(&argc,argv);

              glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

              glutInitWindowPosition(100,100);

              glutInitWindowSize(2000,700);

              glutCreateWindow("Screen 2");

              glClearColor(1.0,1.0,1.0,0.0);

              glMatrixMode(GL_PROJECTION);

              glLoadIdentity();

              glOrtho(0.0,1000.0,0.0,1000.0,0.0,1000.0);

              glutDisplayFunc(display);

              glutKeyboardFunc(changeKey);

              glutMainLoop();

}
