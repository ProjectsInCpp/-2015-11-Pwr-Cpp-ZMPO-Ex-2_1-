#pragma once

#include <string>

using namespace std;


class Point
{
private:
	double _x;
	double _y;
public:
	Point();
	Point(double aX, double aY);
	bool equals(Point aSecond);
	void shift(double dx, double dy);
	double distance(Point aSecond);
	string toString();
};

