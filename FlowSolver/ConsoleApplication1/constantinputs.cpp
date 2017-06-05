#include "stdafx.h"
#include "constantinputs.h"
#include "constcontain.h"
#include <iostream>
using namespace std;

constantinputs::constantinputs()
{
	h = -1;
	l = -1;
	deltax = -1;
	density = -1;
	viscosity = -1;
	vinlet = -1;
	pinlet = -1;
}


constantinputs::~constantinputs()
{
}

constcontain constantinputs::getinputs() {
	constcontain inputs;
	float h;
	float l;
	float deltax;
	float density;
	float viscosity;
	float vinlet;
	float pinlet;
	// Prompt user for various model inputs and put them in a constcontain container
	printf("Enter Channel Height (m): \n");
	cin >> h;
	inputs.seth(h);

	printf("Enter Channel Length (m) \n");
	cin >> l;
	inputs.setl(l);

	printf("Enter cell size (m) \n");
	cin >> deltax;
	inputs.setdx(deltax);

	printf("Enter Fluid Density (kg/m^3) \n");
	cin >> density;
	inputs.setdensity(density);

	printf("Enter Fluid Viscosity (Pas) \n");
	cin >> viscosity;
	inputs.setviscosity(viscosity);

	printf("Enter Inlet Velocity (m/s) \n");
	cin >> vinlet;
	inputs.setvinlet(vinlet);

	printf("Enter Inlet Pressure (Pa) \n");
	cin >> pinlet;
	inputs.setpintlet(pinlet);

	return inputs;
}