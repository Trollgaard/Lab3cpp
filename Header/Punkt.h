#ifndef __PUNKT_H_INCLUDED__
#define __PUNKT_H_INCLUDED__

#include "Figur.h"

class Punkt : public Figur
{public:
	Punkt(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw();
	Punkt * copy(int mx, int my);
	bool hit(int mx, int my);

private:;
};

#endif