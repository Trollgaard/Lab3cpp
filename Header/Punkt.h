class Punkt : public Figur
{public:
	Punkt(Canvas & cv, int width, int height, Pointf cp, Colorf cf);
	void draw(Font & font);
	void copy();
	void hit();

private:;
};