#include "stdafx.h"
#include "CircleFriendly.h"

CircleFriendly::CircleFriendly()
{
	_s = PointFriendly();
	_r = 0;
}

CircleFriendly::CircleFriendly(PointFriendly aS, double aR)
{
	_s = aS;
	_r = aR;
}

double CircleFriendly::distance(PointFriendly aX)
{
	double xSubstract = _s._x - aX._x;
	double ySubstract = _s._y - aX._y;

	double firstSub = pow(xSubstract, 2);
	double secondSub = pow(ySubstract, 2);

	double distance = sqrt(firstSub + secondSub);
	return distance;
}

bool CircleFriendly::ifBelongsTo(PointFriendly aX) {
	bool _ret = true;

	if (distance(aX) > _r) {
		_ret = false;
	}

	return _ret;
}

bool CircleFriendly::equals(CircleFriendly aSecond)
{
	return _s.equals(aSecond._s) && _r == aSecond._r;
}

string CircleFriendly::toString()
{
	return _s.toString() + ",R:" + to_string(_r);
}
