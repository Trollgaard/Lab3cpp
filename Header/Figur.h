#ifndef __FIGUR_H_INCLUDED__
#define __FIGUR_H_INCLUDED__

#include "displayprogram.h"

class Figur
{public:
	Figur(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	//~Figur();
	virtual void draw();
	virtual Figur * copy(int mx, int my);
	virtual bool hit(int mx, int my);

protected:
	int _height, _width;
	bool _mHit;
	Colorf _cf;
	Pointf _cp, _ulp, _lrp;
	Canvas * _cv;
};

#endif