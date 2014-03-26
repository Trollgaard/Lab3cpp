#include "Linje.h"

Linje::Linje(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{
	_k = (height / width);
}

void Linje::draw()
{
	_cv->draw_line(_ulp, _lrp, _cf);
}

Linje * Linje::copy(int mx, int my)
{
	return this;
}

bool Linje::hit(int mx, int my)
{
	return false;
}