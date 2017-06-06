#include "stdafx.h"
#include "pmesh.h"
#include "mesh.h"
#include "constcontain.h"



pmesh::pmesh(constcontain* constants) : mesh(constants)
{

}


pmesh::~pmesh()
{
}

void pmesh::piterate()
{
	for (int i = 1; i < nl - 1; i++) {
		for (int j = 0; j < nh; j++) {
			domain[i][j] = domain[i - 1][j] - ( 3 * (constants->getVinlet()) * (constants->getViscosity()) * (constants->getDx()) / 2 / (constants->getH()) / (constants->getH())) ;
	
		}
	}
}
