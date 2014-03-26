#ifndef __FIGUR_H_INCLUDED__
#define __FIGUR_H_INCLUDED__

#include "displayprogram.h"

class Figur
{public:
	Figur(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	~Figur();
	virtual void draw();
	virtual void copy();
	virtual void hit();

protected:
	int _height, _width;
	Colorf _cf;
	Pointf _cp;
	Canvas * _cv;
};

#endif