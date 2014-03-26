#include "Rektangel.h"

Rektangel::Rektangel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{

}

void Rektangel::draw()
{
	_cv->fill_rect(Rectf(_ulp.x, _ulp.y, Sizef(_width, _height)), _cf);
}

Rektangel * Rektangel::copy(int mx, int my)
{
	Rektangel * copyRect = new Rektangel(*this);
	copyRect->_cp = Pointf(mx, my);
	copyRect->_ulp = Pointf((copyRect->_cp.x - (copyRect->_width/2)), (copyRect->_cp.y - (copyRect->_height/2)));
	copyRect->_lrp = Pointf((copyRect->_cp.x + (copyRect->_width/2)), (copyRect->_cp.y + (copyRect->_height/2)));
	return copyRect;
}

bool Rektangel::hit(int mx, int my)
{
	_mHit = false;
	if ((mx > _ulp.x && my > _ulp.y) && (mx < _lrp.x && my < _lrp.y))
		_mHit = true;
	else
		_mHit = false;
	return _mHit;
}