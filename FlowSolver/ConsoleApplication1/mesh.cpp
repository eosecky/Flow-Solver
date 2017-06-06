#include "stdafx.h"
#include "mesh.h"
#include "math.h"
#include "constcontain.h"

mesh::mesh(constcontain* constin)
{
	constants = constin;
	nl = (int)round(constants->getL() / constants->getDx());
	nh = (int)round(constants->getH() / constants->getDx());
	domain = new float*[nl];
	for (int i = 0; i < (nl - 1); i++) {
		domain[i] = new float[nh];
	}
	for (int i = 0; i < nl - 1; i++) {
		for (int j = 0; j < nh; j++) {

			domain[i][j] = 0;

		}
	}
}


mesh::~mesh()
{
}




