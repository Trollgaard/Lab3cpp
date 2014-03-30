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
	Kvadrat * copySquare = new Kvadrat(*this);
	copySquare->_cp = Pointf(mx, my);
	copySquare->_ulp = Pointf((copySquare->_cp.x - (copySquare->_side/2)), (copySquare->_cp.y - (copySquare->_side/2)));
	copySquare->_lrp = Pointf((copySquare->_cp.x + (copySquare->_side/2)), (copySquare->_cp.y + (copySquare->_side/2)));
	return copySquare;
}

bool Kvadrat::hit(int mx, int my)
{
	_mHit = false;
	if ((mx > _ulp.x && my > _ulp.y) && (mx < _lrp.x && my < _lrp.y))
		_mHit = true;
	else
		_mHit = false;
	return _mHit;
}