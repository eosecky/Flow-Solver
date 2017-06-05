#pragma once
#include "constcontain.h"
class constantinputs
{
	float h;
	float l;
	float deltax;
	float density;
	float viscosity;
	float vinlet;
	float pinlet;
public:
	constantinputs();
	~constantinputs();
	constcontain getinputs();
};

