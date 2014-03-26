#include "Kvadrat.h"

Kvadrat::Kvadrat(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Rektangel(cv, width, height, cpx, cpy, cf)
{
	if ((width) < (height))
		_side = width;
	else
		_side = height;
}

void Kvadrat::draw()
{
	_cv->fill_rect(Rectf(_ulp.x, _ulp.y, Sizef(_side, _side)), _cf);
}

Kvadrat * Kvadrat::copy(int mx, int my)
{
	return this;
}

bool Kvadrat::hit(int mx, int my)
{
	return false;
}