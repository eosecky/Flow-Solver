#pragma once
class mesh
{
	float l;
	float h;
	float deltax;
	int nl;
	int nh;
public:
	float **domain;
	mesh(float, float, float, float);
	~mesh();
	
};

