#include "Figur.h"
#include "Cirkel.h"
#include "Linje.h"
#include "Punkt.h"
#include "Rektangel.h"
#include "Kvadrat.h"
#include "displayprogram.h"
void DisplayProgram::mymain(DisplayWindow window, Canvas cv,InputDevice keyboard, InputDevice mouse,Font font)
{
	Cirkel c1(cv, 10, 10, 100, 100, Colorf(255,0, 0, 1000.0));
	Rektangel r1(cv, 10, 10, 100, 100, Colorf(255,0, 0, 1000.0));
	while (looping(keyboard,window,cv))
	{
		r1.draw();
	}
}