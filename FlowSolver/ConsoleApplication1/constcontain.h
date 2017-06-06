#pragma once
class constcontain
{
private:
	float h;
	float l;
	float dx;
	float density;
	float viscosity;
	float vinlet;
	float pinlet;

public:
	constcontain(float h, float l, float dx, float density, float viscosity, float vinlet, float pinlet);
	~constcontain();
	float getH();
	float getL();
	float getDx();
	float getDensity();
	float getViscosity();
	float getVinlet();
	float getPinlet();
	
};

