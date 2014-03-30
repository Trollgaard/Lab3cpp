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
	Cirkel * copyCircle = new Cirkel(*this);
	copyCircle->_cp = Pointf(mx, my);
	return copyCircle;
}

bool Cirkel::hit(int mx, int my)
{
	float xHit = powf((float)mx - _cp.x, 2);
	float yHit = powf((float)my - _cp.y,2);
	int radS = pow(_rad,2);
	if ((powf((float)mx - _cp.x, 2) + powf((float)my - _cp.y,2)) <= pow(_rad,2))
		_mHit = true;
	else
		_mHit = false;
	return _mHit;
}