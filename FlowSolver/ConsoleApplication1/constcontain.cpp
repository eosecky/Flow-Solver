#include "stdafx.h"
#include "constcontain.h"
using namespace std;

constcontain::constcontain()
{
}


constcontain::~constcontain()
{
}

void constcontain::setl(float lin)
{
	l = lin;
}

void constcontain::seth(float hin)
{
	h = hin;
}

void constcontain::setdx(float dxin)
{
	dx = dxin;
}

void constcontain::setdensity(float densityin)
{
	density = densityin;
}
void constcontain::setviscosity(float viscin)
{
	viscosity = viscin;
}

void constcontain::setvinlet(float vinletin)
{
	vinlet = vinletin;
}

void constcontain::setpintlet(float pinletin)
{
	pinlet = pinletin;
}
