class Kvadrat: public Rektangel
{public:
	Kvadrat(Canvas & cv, int width, int height, Pointf cp, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};