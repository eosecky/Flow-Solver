#pragma once
#include "mesh.h"
#include "constcontain.h"
#include"pmesh.h"


class vmesh :
	public mesh
{
public:
	vmesh(constcontain*);
	~vmesh();
	void viterate(pmesh*);
};

