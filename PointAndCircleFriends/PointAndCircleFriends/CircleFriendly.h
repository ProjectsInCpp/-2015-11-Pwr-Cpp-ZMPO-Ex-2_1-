#pragma once
#include "PointFriendly.h"

class CircleFriendly
{
private:
	PointFriendly _s;
	double _r;

public:
	CircleFriendly();
	CircleFriendly(PointFriendly aA, double aR);
	double distance(PointFriendly aX);
	bool ifBelongsTo(PointFriendly aX);
	bool equals(CircleFriendly aSecond);
	string toString();
};

