#include "Cirkel.h"

Cirkel::Cirkel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{
	if ((width) < (height))
		_rad = width;
	else
		_rad = height;
}

void Cirkel::draw()
{
	_cv->fill_circle(_cp.x, _cp.y, _rad, _cf);
}

Cirkel * Cirkel::copy(int mx, int my)
{
	return this;
}

bool Cirkel::hit(int mx, int my)
{
	return false;
}