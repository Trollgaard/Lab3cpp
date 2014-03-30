#include "Linje.h"

Linje::Linje(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf):Figur(cv, width, height, cpx, cpy, cf)
{
	_k = (double)height / (double)width;
}

void Linje::draw()
{
	_cv->draw_line(_ulp, _lrp, _cf);
}

Linje * Linje::copy(int mx, int my)
{
	Linje * copyLine = new Linje(*this);
	copyLine->_cp = Pointf(mx, my);
	copyLine->_ulp = Pointf((copyLine->_cp.x - (copyLine->_width/2)), (copyLine->_cp.y - (copyLine->_height/2)));
	copyLine->_lrp = Pointf((copyLine->_cp.x + (copyLine->_width/2)), (copyLine->_cp.y + (copyLine->_height/2)));
	return copyLine;
}

bool Linje::hit(int mx, int my)
{
	_mHit = false;
	int yTest;
	yTest = _k * (mx-_ulp.x)+_ulp.y;
	/*for (int xTest = _ulp.x; xTest < _lrp.x; xTest++)
	{
		if (mx >= (xTest-2) && (mx <= xTest+2))
		{
			yTest = _k * (xTest-_ulp.x)+_ulp.y;
			if (my >= (yTest-2) && my <= (yTest+2))
			{
				_mHit = true;
				break;
			}
		}
	}*/
	if (my >= (yTest-2) && my <= (yTest+2))
		_mHit = true;
	else
		_mHit = false;
	return _mHit;
}