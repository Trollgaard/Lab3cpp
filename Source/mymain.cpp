#include "Figur.h"
#include "Cirkel.h"
#include "Linje.h"
#include "Punkt.h"
#include "Rektangel.h"
#include "Kvadrat.h"
#include "displayprogram.h"
#include <vector>
void DisplayProgram::mymain(DisplayWindow window, Canvas cv,InputDevice keyboard, InputDevice mouse,Font font)
{
	bool mHit = false, mCopy = false, mfHit = false;
	int fHit;
	vector<Figur*> myVec;
	myVec.push_back(new Cirkel(cv, 25, 25, 100, 30, Colorf::blueviolet));
	myVec.push_back(new Rektangel(cv, 55, 30, 200, 30, Colorf::darkorchid));
	myVec.push_back(new Kvadrat(cv, 55, 30, 300, 30, Colorf::darkgoldenrod));
	myVec.push_back(new Linje(cv, 55, 30, 400, 30, Colorf::deeppink));
	myVec.push_back(new Punkt(cv, 55, 30, 500, 30, Colorf::gainsboro));

	while (looping(keyboard,window,cv))
	{
		if(!mouse.get_keycode(mouse_left) )
		{
			mCopy = true;
			if (mfHit == false)
				mHit = true;
		}
		

		if(mouse.get_keycode(mouse_left))
		{
			if (mHit)
			{
				for (int i = 0; i < myVec.size(); i++)
				{
					mfHit = myVec[i]->hit(mouse.get_x(),mouse.get_y());
					if (mfHit)
					{
						mHit = false;
						mCopy = false;
						fHit = i;
						break;
					}
				}
			}
			else if (mCopy)
			{
				myVec.push_back(myVec[fHit]->copy(mouse.get_x(),mouse.get_y()));
				mHit = false;
				mCopy = false;
				mfHit = false;
			}
		}
		for (int i = 0; i < myVec.size(); i++)
		{
			myVec[i]->draw();
		}
	}
}