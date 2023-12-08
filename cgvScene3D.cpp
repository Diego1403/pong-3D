#include <cstdlib>
#include <stdio.h>

#include "cgvScene3D.h"
#include <iostream>


// Constructor methods -----------------------------------

/**
 * Constructor method. Initially, it defines the vector of boxes with three of them. 
 */
cgvScene3D::cgvScene3D () {
	// TODO: Modify the constructor to assign adequate color to the boxes to be able to use the color buffer technique. 

	axes = true;


	GLubyte c[3] = {0,0,0};
	boxes.push_back(cgvBox(c));
	boxes.push_back(cgvBox(c));
	boxes.push_back(cgvBox(c));

}



// Public methods ----------------------------------------

void cgvScene3D::drawplayer1() {
	float x = gameInstance->getPlayer1()->getX();
	float y = gameInstance->getPlayer1()->getY();
	float z = gameInstance->getPlayer1()->getZ();
	float height = gameInstance->getPlayer1()->getHeight();
	float width = gameInstance->getPlayer1()->getWidth();
	glPushMatrix();
	glTranslatef(x, y, z);

	// Draw player one as a box
	glPushMatrix();
	glScalef(width, height, 0.1f);  // Use width and height for scaling
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();



}

void cgvScene3D::drawplayer2() {
	float x = gameInstance->getPlayer2()->getX();
	float y = gameInstance->getPlayer2()->getY();
	float z = gameInstance->getPlayer2()->getZ();
	float height = gameInstance->getPlayer2()->getHeight();
	float width = gameInstance->getPlayer2()->getWidth();
	glPushMatrix();
	glTranslatef(x, y, z);

	// Draw player one as a box
	glPushMatrix();
	glScalef(width, height, 0.1f);  // Use width and height for scaling
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();

}
void cgvScene3D::drawball() {
	float radius = gameInstance->getBall()->getRadius();
	float x = gameInstance->getBall()->getPosX();
	float y = gameInstance->getBall()->getPosX();
	float z = gameInstance->getBall()->getPosZ();

	glPushMatrix();
	glTranslatef(x, y, z);

	glutSolidSphere(radius, 32, 32);

	glPopMatrix();


}

/**
 * This method is called to render the scene
 * @param mode Identifier of the scene to be rendered
 * @pre It is assumed that the value of the parameter is valid 
 * @post Render the scene normally (CGV_DISPLAY) or for selection using the color buffer technique (CGV_SELECT)
 */
void cgvScene3D::render(RenderMode mode) {

	// lights
	GLfloat light0[4]={5.0,5.0,5.0,1}; // point light source  
	glLightfv(GL_LIGHT0,GL_POSITION,light0); // this light is placed here and it remains still 
        glEnable(GL_LIGHT0);
  
	// create the model
	glPushMatrix(); // store the model matrices

	  // draw the axes
	if ((axes)&&(mode == CGV_DISPLAY)) draw_axes();

	drawplayer1();
	drawplayer2();
	drawball();


	glPopMatrix (); // restore the modelview matrix 
  
}

/**
 * Select a box from the vector of boxes if needed
 * @param _c RBG color
 * @pre It is assumed that the parameters are valid
 * @post The boxes that correspond to the color _c as identifier are marked as selected, the rest as not selected. 
 */
void cgvScene3D::assignSelection(GLubyte _c[3]) {
		for (auto& box : boxes) {
			box.select(_c);
		}
}

/**
 * Method to render the axes
 */
void cgvScene3D::draw_axes(void) {
  GLfloat red[]={1,0,0,1.0};
  GLfloat green[]={0,1,0,1.0};
  GLfloat blue[]={0,0,1,1.0};

	glBegin(GL_LINES);
    glMaterialfv(GL_FRONT,GL_EMISSION,red);
		glVertex3f(1000,0,0);
		glVertex3f(-1000,0,0);

    glMaterialfv(GL_FRONT,GL_EMISSION,green);
		glVertex3f(0,1000,0);
		glVertex3f(0,-1000,0);

    glMaterialfv(GL_FRONT,GL_EMISSION,blue);
		glVertex3f(0,0,1000);
		glVertex3f(0,0,-1000);

	glEnd();
}

