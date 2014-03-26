#ifndef __CIRKEL_H_INCLUDED__
#define __CIRKEL_H_INCLUDED__

#include "Figur.h"

class Cirkel : public Figur
{public:
	Cirkel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw();
	Cirkel * copy(int mx, int my);
	bool hit(int mx, int my);

private:
	int _rad;
};

#endif