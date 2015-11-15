#include "stdafx.h"
#include "PointFriendly.h"
#include <math.h>

PointFriendly::PointFriendly()
{
	_x = 0;
	_y = 0;
}

PointFriendly::PointFriendly(double aX, double aY)
{
	_x = aX;
	_y = aY;
}

bool PointFriendly::equals(PointFriendly aSecond)
{
	return _x == aSecond._x && _y == aSecond._y;
}

string PointFriendly::toString()
{
	return "S:(" + to_string(_x) + "," + to_string(_y) + ")";
}

