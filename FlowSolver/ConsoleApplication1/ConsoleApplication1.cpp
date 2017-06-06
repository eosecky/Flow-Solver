// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constantinputs.h"
#include "constcontain.h"
#include "mesh.h"
#include "pmesh.h"
#include "vmesh.h"
#include <fstream>
using namespace std;


int main()
{
	//define classes
	constantinputs modelinputs;
	constcontain *constants;
	
	// get inputs for model
	constants = modelinputs.getinputs();
	

	//initialize velocity and pressure meshes
	vmesh velmesh(constants);

	pmesh *presmesh = new pmesh(constants);


	//start solver iterations
	presmesh->piterate();

	for (int k = 0; k < 1000; k++) {
		velmesh.viterate(presmesh);
	}




	ofstream output;
	output.open ("output.txt");
			for (int i = 0; i < (constants->getL() / constants->getDx()-1);i++ ) {
				for (int j = 0; j < (constants->getH() / constants->getDx()-1); j++) {
					output << velmesh.domain[i][j] << " ";
				}
				output << "\n";
			}
	int test;
	cin >> test;
    return 0;
}

