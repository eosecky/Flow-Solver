#pragma once
#include "constcontain.h"

class mesh
{
private:

protected:
	constcontain * constants;

public:
	float **domain;
	int nl;
	int nh;
	mesh(constcontain*);
	~mesh();

};

