#pragma once
class constcontain
{
public:
	float h;
	float l;
	float dx;
	float density;
	float viscosity;
	float vinlet;
	float pinlet;
	constcontain();
	~constcontain();
	void setl(float);
	void seth(float);
	void setdx(float);
	void setdensity(float);
	void setviscosity(float);
	void setvinlet(float);
	void setpintlet(float);
	
};

