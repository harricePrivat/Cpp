#ifndef __CERCLE__
#define __CERCLE__
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;
class Cercle{
private:
	int rayon;
	Point centre;
	string color;
public:
	int getRayon();
	void setRayon(int r);
	string getColor();
	int getCentreX();
	int getCentreY();
	void setCentreX(int X);
	void setCentreY(int Y);
	void setColor(int x);

	Cercle();
	~Cercle();

};
#endif