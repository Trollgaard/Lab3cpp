#ifndef __KVADRAT_H_INCLUDED__
#define __KVADRAT_H_INCLUDED__

#include "Rektangel.h"

class Kvadrat : public Rektangel
{public:
	Kvadrat(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};

#endif