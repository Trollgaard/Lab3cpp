#include "Figur.h"

Figur::Figur(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf): _cv(&cv)
{
	_cp.x = cpx;
	_cp.y = cpy;
	_width = width;
	_height = height;
	_cf = cf;
	_ulp.x = (cpx - (width/2));
	_ulp.y = (cpy - (height/2));
	_lrp.x = (cpx + (width/2));
	_lrp.y = (cpy + (height/2));
}

void Figur::draw()
{
	
}

Figur * Figur::copy(int mx, int my)
{
	return this;
}

bool Figur::hit(int mx, int my)
{
	return false;
}