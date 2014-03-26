#ifndef __LINJE_H_INCLUDED__
#define __LINJE_H_INCLUDED__

#include "Figur.h"

class Linje : public Figur
{public:
	Linje(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};

#endif