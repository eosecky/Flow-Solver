#pragma once
#include "constcontain.h"
class constantinputs
{

public:
	float h;
	float l;
	float deltax;
	float density;
	float viscosity;
	float vinlet;
	float pinlet;
	constantinputs();
	~constantinputs();
	constcontain* getinputs();
};

