// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constantinputs.h"
#include "constcontain.h"
#include "mesh.h"
using namespace std;


int main()
{
	constantinputs modelinputs;
	constcontain constants;
	constants = modelinputs.getinputs();

	mesh velmesh(constants.l, constants.h, constants.dx, constants.vinlet);

	cout << velmesh.domain[0][0];
	int test;
	cin >> test;
    return 0;
}

