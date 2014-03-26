#ifndef __CIRKEL_H_INCLUDED__
#define __CIRKEL_H_INCLUDED__

#include "Figur.h"

class Cirkel : public Figur
{public:
	Cirkel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};

#endif