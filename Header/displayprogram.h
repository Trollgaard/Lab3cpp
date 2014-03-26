#ifndef __DISPLAYPROGRAM_H_INCLUDED__
#define __DISPLAYPROGRAM_H_INCLUDED__

#include <ClanLib/core.h>
#include <ClanLib/display.h>
#include <ClanLib/gl.h>
#include <ClanLib/swrender.h>
#include <ClanLib/application.h>

using namespace clan;
#include <string>
#include <vector>
using namespace std;

class DisplayProgram
{
public:
	static int main(const std::vector<string> &args);
	static void mymain(DisplayWindow window, Canvas cv,InputDevice keyboard, InputDevice mouse,Font font);
	static int looping(InputDevice keyboard,DisplayWindow window, Canvas cv);
	static void waiting(InputDevice keyboard,DisplayWindow window, Canvas cv);
};

#endif