#include <windows.h>
#include <stdio.h>
#include <glut.h>
#include <gl.h>
#include <glu.h>
#include <glaux.h>

#include "Header.h"


int myCubos()
{
	int indice;
	indice = glGenLists(1);
	glNewList(indice, GL_COMPILE);
	glBegin(GL_TRIANGLES);


	//GRANDE
	//tapa superior
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, 0.6f, 0.6f);


	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, 0.6f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, 0.6f, 0.6f);

	//Frente
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, 0.6f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, 0.6f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, 0.6f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, 0.6f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.6f, 0.6f, 0.6f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, 0.6f);

	//Izquierda
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, 0.6f);

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-0.6f, 0.6f, 0.6f);

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.6f, 0.6f, -0.6f);

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.6f, 0.6f, -0.6f);

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, -0.6f);

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, 0.6f);

	//Derecha
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, 0.6f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, 0.6f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, -0.6f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, -0.6f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, -0.6f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, 0.6f);

	//Atras
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, -0.6f);

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.6f, 0.6f, -0.6f);

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, -0.6f);

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, -0.6f);

	//Tapa inferior
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(0.6f, -0.6f, 0.6f);

	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.6f, -0.6f, 0.6f);

	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.6f, -0.6f, -0.6f);

	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.6f, -0.6f, -0.6f);

	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(0.6f, -0.6f, -0.6f);

	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(1.00f, 1.0f);
	glVertex3f(0.6f, -0.6f, 0.6f);


	glEnd();
	glEndList();
	return indice;
}

int mySuelo() {
	int indice;
	indice = glGenLists(1);
	glNewList(indice, GL_COMPILE);
	glBegin(GL_TRIANGLES);

	//Triangulo Superior Derecha
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(.5f, 0.0f, .5f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(.5f, 0.0f, 0.0f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 1.00000f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	//Triangulo Inferior Izquierda
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, .5f);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(.5f, 0.0f, .5f);


	glEnd();
	glEndList();
	return indice;
}

int myCharco() {
	int indice;
	indice = glGenLists(1);
	glNewList(indice, GL_COMPILE);
	glBegin(GL_TRIANGLES);

	//Triangulo superior derecho
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(5.0f, 0.0f);
	glVertex3f(TAMCHARCO, 0.0f, -TAMCHARCO);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(5.0f, 5.0f);
	glVertex3f(TAMCHARCO, 0.0f, -TAMCHARCO * 3);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 5.0f);
	glVertex3f(-TAMCHARCO, 0.0f, -TAMCHARCO * 3);

	//Triangulo inferior izquierdo
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 5.0f);
	glVertex3f(-TAMCHARCO, 0.0f, -TAMCHARCO * 3);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-TAMCHARCO, 0.0f, -TAMCHARCO);

	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(5.0f, 0.0f);
	glVertex3f(TAMCHARCO, 0.0f, -TAMCHARCO);


	glEnd();
	glEndList();
	return indice;
}