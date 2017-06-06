#pragma once
#include "mesh.h"
#include "constcontain.h"
class pmesh :
	public mesh
{


public:
	pmesh(constcontain*);
	~pmesh();
	void piterate();
};

