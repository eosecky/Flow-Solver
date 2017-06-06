#include "stdafx.h"
#include "constcontain.h"
using namespace std;

constcontain::constcontain(float h, float l, float dx, float density, float viscosity, float vinlet, float pinlet)
{
	this->h = h;
	this->l = l;
	this->dx = dx;
	this->density = density;
	this->viscosity = viscosity;
	this->vinlet = vinlet;
	this->pinlet = pinlet;
}


constcontain::~constcontain()
{
}


float constcontain::getH() { return h; }

float constcontain::getL() { return l; }
float constcontain::getDx() { return dx; }
float constcontain::getDensity() { return density; }
float constcontain::getViscosity() {
	return viscosity;
}
float constcontain::getVinlet() {
	return vinlet;
}
float constcontain::getPinlet() {
	return pinlet;
}
