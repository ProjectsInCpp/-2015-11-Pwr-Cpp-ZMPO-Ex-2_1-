#include "stdafx.h"
#include "Point.h"
#include <math.h>

Point::Point()
{
	_x = 0;
	_y = 0;
}

Point::Point(double aX, double aY)
{
	_x = aX;
	_y = aY;
}

bool Point::equals(Point aSecond)
{
	return _x == aSecond._x && _y == aSecond._y;
}

void Point::shift(double dx, double dy)
{
	_x += dx;
	_y += dy;
}

double Point::distance(Point aSecond)
{
	double xSubstract = aSecond._x - _x;
	double ySubstract = aSecond._y - _y;

	double firstSub = pow(xSubstract, 2);
	double secondSub = pow(ySubstract, 2);

	double distance = sqrt(firstSub + secondSub);
	return distance;
}

string Point::toString()
{
	return "S:(" + to_string(_x) + "," + to_string(_y) + ")";
}

