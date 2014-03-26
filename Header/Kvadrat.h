#ifndef __KVADRAT_H_INCLUDED__
#define __KVADRAT_H_INCLUDED__

#include "Rektangel.h"

class Kvadrat : public Rektangel
{public:
	Kvadrat(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf);
	void draw();
	Kvadrat * copy(int mx, int my);
	bool hit(int mx, int my);

private:
	int _side;
};

#endif