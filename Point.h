#ifndef __CENTER__
#define __CENTER__
#include <iostream>
#include <string>

class Point{
private:
	int x;
	int y;
public:
	int getX();
	void setX(int X);
	int getY();
	void setY(int Y);
	Point();
	~Point();

};
#endif