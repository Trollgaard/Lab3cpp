class Figur
{public:
	virtual void draw();
	virtual void copy();
	virtual void hit();

protected:
	int _height, _width;
	Colorf _cf;
	Pointf cp;
};