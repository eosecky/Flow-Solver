#include "stdafx.h"
#include "mesh.h"
#include "math.h"

mesh::mesh(float l, float h, float dx, float inlet)
{
	nl = (int)round(l / dx);
	nh = (int)round(h / dx);
	domain = new float*[nl];
	for (int i = 0; i < (nl- 1); i++) {
		domain[i] = new float[nh];
	}
	for (int i = 0; i < nl - 1; i++) {
		for (int j = 0; j < nh; j++) {

				domain[i][j] = inlet;
			
		}
	}
	for (int i = 0; i < (nl - 1); i++) {
		domain[i][0] = 0;
		domain[i][nh - 1] = 0;
	}
}


mesh::~mesh()
{
}


