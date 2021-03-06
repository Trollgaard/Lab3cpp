#ifndef __REKTANGEL_H_INCLUDED__
#define __REKTANGEL_H_INCLUDED__

#include "Figur.h"

class Rektangel : public Figur
{public:
	Rektangel(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw();
	Rektangel * copy(int mx, int my);
	bool hit(int mx, int my);

private:;
};

#endif