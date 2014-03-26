#include "Figur.h"

Figur::Figur(Canvas & cv, int width, int height, int cpx, int cpy, Colorf cf): _cv(&cv)
{
	_cp.x = cpx;
	_cp.y = cpy;
	_width = width;
	_height = height;
	_cf = cf;
}

void Figur::draw()
{
	
}

void Figur::copy()
{

}

void Figur::hit()
{

}