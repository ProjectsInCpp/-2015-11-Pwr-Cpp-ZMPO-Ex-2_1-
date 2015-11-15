#pragma once
#include "Point.h"

class Circle
{
private:
	Point _s;
	double _r;

public:
	Circle();
	Circle(Point aA, double aR);
	void shift(double dx, double dy);
	double distance(Point aX);
	bool ifBelongsTo(Point aX);
	bool equals(Circle aSecond);
	string toString();
};

