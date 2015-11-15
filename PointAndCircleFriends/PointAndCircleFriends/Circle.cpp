#include "stdafx.h"
#include "Circle.h"

Circle::Circle()
{
	_s = Point();
	_r = 0;
}

Circle::Circle(Point aS, double aR)
{
	_s = aS;
	_r = aR;
}

void Circle::shift(double dx, double dy)
{
	_s.shift(dx, dy);
}

double Circle::distance(Point aX)
{
	return _s.distance(aX);
}

bool Circle::ifBelongsTo(Point aX) {
	bool _ret = true;

	if (_s.distance(aX) > _r) {
		_ret = false;
	}

	return _ret;
}

bool Circle::equals(Circle aSecond)
{
	return _s.equals(aSecond._s) && _r==aSecond._r;
}

string Circle::toString()
{
	return _s.toString() + ",R:" + to_string(_r);
}
