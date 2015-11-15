#pragma once

#include <string>

using namespace std;

class PointFriendly
{
private:
	friend class CircleFriendly;
	double _x;
	double _y;
public:
	PointFriendly();
	PointFriendly(double aX, double aY);
	bool equals(PointFriendly aSecond);
	string toString();
};

