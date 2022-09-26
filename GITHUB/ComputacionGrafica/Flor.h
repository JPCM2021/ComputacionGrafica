#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#define ROTA 35
#define NUM_SEG 8

class Flor
{
public:
	Flor() {}
	void DibujarFlor(float x, float y, float z);
};

