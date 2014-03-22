class Linje
{public:
	Linje(Canvas & cv, int ulx,int uly, int width,int height, Colorf cf);
	void update();
	void draw(Font & font);
	void setul(int x, int y);
	void setlr(int x, int y);
	Pointf getul();
	Pointf getlr();
private:;
};