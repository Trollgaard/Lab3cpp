#include "Rektangel.h"

Rektangel::Rektangel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{
	ulP.x = (cpx - (width/2));
	ulP.y = (cpy - (height/2));
}

void Rektangel::draw()
{
	_cv->fill_rect(Rectf(ulP.x, ulP.y, Sizef(_width, _height)), _cf);
}

void Rektangel::copy()
{

}

void Rektangel::hit()
{

}