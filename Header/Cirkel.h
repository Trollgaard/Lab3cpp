//Detta är en cirkel som tillhör en figur i den fin soppa på facebook, alltså digitalsoppa!
class Cirkel : public Figur
{public:
	Cirkel(Canvas & cv, int width, int height, Pointf cp, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};
