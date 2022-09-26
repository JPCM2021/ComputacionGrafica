#include "Flor.h"
void Flor::DibujarFlor(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glPushMatrix();
	glTranslatef(-1, 0, 0);
	glRotatef((GLfloat)ROTA, 0, 0, 1);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScalef(1, 0.4, 1);
	glutSolidCube(1);
	glPopMatrix();

	for (int i = 0; i < NUM_SEG; i++) {
		glTranslatef(0.5, 0, 0);
		glRotatef((GLfloat)ROTA, 0, 0, 1);
		glTranslatef(0.5, 0, 0);
		glPushMatrix();
		glScalef(1, 0.4, 1);
		glutSolidCube(1);
		glPopMatrix();
	}
	glPopMatrix();
	glPopMatrix();
}