#include "stdafx.h"
#include "vmesh.h"
#include "mesh.h"
#include "math.h"
#include "constcontain.h"

vmesh::vmesh(constcontain* constants) : mesh(constants)
{
	int nl;
	int nh;

	nl = (int)round(constants->getL() / constants->getDx());
	nh = (int)round(constants->getH() / constants->getDx());
	for (int i = 0; i < (nl - 1); i++) {
		domain[i][0] = 0;
		domain[i][nh - 1] = 0;
	}
	for (int i = 0; i < (nl - 1); i++) {
		for (int j = 1; j < (nh - 2); j++) {
			domain[i][j] = constants->getVinlet();
		}
	}
}


vmesh::~vmesh()
{
}

void vmesh::viterate(pmesh* pressure)
{
	float deltax = constants->getDx();
	float visc = constants->getViscosity();
	float dens = constants->getDensity();

	for (int i = 1; i < nl - 2; i++) {
		for (int j = 1; j < nh - 2; j++) {
			domain[i][j] = domain[i][j] + deltax * (((pressure->domain[i][j] - pressure->domain[i - 1][j]) / deltax + visc / (deltax * deltax)*(domain[i + 1][j] + domain[i - 1][j])) / (2 * visc / (deltax *deltax) + 2 * visc / (deltax *deltax) - dens / deltax*domain[i - 1][j] + dens / deltax*domain[i][j]));
		}
	}
}
