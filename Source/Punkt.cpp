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
	Punkt * copyPoint = new Punkt(*this);
	copyPoint->_cp = Pointf(mx, my);
	return copyPoint;
}

bool Punkt::hit(int mx, int my)
{
	_mHit = false;
	if ((mx >= (_cp.x-2) && my >= (_cp.y-2)) && (mx <= (_cp.x+2) && my <= (_cp.y+2)))
		_mHit = true;
	else
		_mHit = false;
	return _mHit;
}