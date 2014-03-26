#include "Punkt.h"

Punkt::Punkt(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{

}

void Punkt::draw()
{
	_cv->draw_point(_cp, _cf);
}

Punkt * Punkt::copy(int mx, int my)
{
	return this;
}

bool Punkt::hit(int mx, int my)
{
	return false;
}