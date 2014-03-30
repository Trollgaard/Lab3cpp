#ifndef __LINJE_H_INCLUDED__
#define __LINJE_H_INCLUDED__

#include "Figur.h"

class Linje : public Figur
{public:
	Linje(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw();
	Linje * copy(int mx, int my);
	bool hit(int mx, int my);

private:
	Pointf _start, _end;
	double _k;
};

#endif