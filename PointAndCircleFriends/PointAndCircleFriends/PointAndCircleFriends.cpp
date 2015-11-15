// PointAndCircleFriends.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include "CircleFriendly.h"
#include "PointFriendly.h"
#include <iostream>

using namespace std;

int main()
{
	double cX, cY, r;
	double pX, pY;

	int aVal;

#pragma region ************************ UnFriendly **************************************
#pragma region ************************ HardCoded **************************************	
	//Circle testCircle1(Point(2, 2), 1);
	//Point testPoint1(0,0);

	//cout << "Circle1: " << testCircle1.toString() << endl;
	//cout << "Point1: " << testPoint1.toString() << endl;
	//cout << "Point1 Outside Circle1 belongs to it : " << testCircle1.ifBelongsTo(testPoint1) << endl;
	//cout << "Point1 distance from Circle1 : " << testCircle1.distance(testPoint1) << endl << endl << endl;

	//Circle testCircle2(Point(2, 2), 1);
	//Point testPoint2(2, 3);

	//cout << "Circle2: " << testCircle2.toString() << endl;
	//cout << "Point2: " << testPoint2.toString() << endl;
	//cout << "Point2 on Circumference Circle1 belongs to it : " << testCircle2.ifBelongsTo(testPoint2) << endl;
	//cout << "Point2 distance from Circle2 : " << testCircle2.distance(testPoint2) << endl << endl << endl;

	//Circle testCircle3(Point(2, 2), 1);
	//Point testPoint3(2, 2);

	//cout << "Circle3: " << testCircle3.toString() << endl;
	//cout << "Point3: " << testPoint3.toString() << endl;
	//cout << "Point3 In Centre Of Circle3 belongs to it : " << testCircle3.ifBelongsTo(testPoint3) << endl;
	//cout << "Point3 distance from Circle1Circle3 : " << testCircle3.distance(testPoint3) << endl << endl << endl;

	//Circle testCircle4(Point(5, -3), sqrt(10));
	//Point testPoint4(6, 0);

	//cout.precision(16);
	//cout << "Circle4: " << testCircle4.toString() << endl;
	//cout << "Point4: " << testPoint4.toString() << endl;
	//cout << "Point4 Inside Circle4 belongs to it : " << testCircle4.ifBelongsTo(testPoint4) << endl;
	//cout<< "Point4 distance from Circle4 : " << testCircle4.distance(testPoint4) << endl << endl << endl;
#pragma endregion
#pragma region ************************ User Experience *********************************
	
	//do
	//{
	//	system("cls");
	//	aVal = 1;
	//	cout << "Circle1" << endl;
	//	cout << "Centre X:"; cin >> cX; cout << endl; fflush(stdin);
	//	cout << "Centre Y:"; cin >> cY; cout << endl; fflush(stdin);
	//	cout << "Radious r:"; cin >> r; cout << endl; fflush(stdin);

	//	cout << "Point1" << endl;
	//	cout << "Point A.X:"; cin >> pX; cout << endl; fflush(stdin);
	//	cout << "Point A.Y:"; cin >> pY; cout << endl; fflush(stdin);

	//	Circle* testCircle1 = new Circle(Point(cX, cY), r);
	//	Point* testPoint1 = new Point(pX, pY);

	//	cout << "Point1 Outside Circle1 belongs to it : " << testCircle1->ifBelongsTo(*testPoint1) << endl;
	//	cout << "Point1 distance from Circle1 : " << testCircle1->distance(*testPoint1) << endl << endl << endl;
	//	cout << "Press 0 to End , or Repeat all " << endl;
	//	cin >> aVal;
	//} while (aVal != 0);

#pragma endregion
#pragma endregion

#pragma region ************************ Friendly **************************************
#pragma region ************************ HardCoded **************************************	
	
	//CircleFriendly testCircle1(PointFriendly(2, 2), 1);
	//PointFriendly testPoint1(0,0);

	//cout << "Circle1: " << testCircle1.toString() << endl;
	//cout << "Point1: " << testPoint1.toString() << endl;
	//cout << "Point1 Outside Circle1 belongs to it : " << testCircle1.ifBelongsTo(testPoint1) << endl;
	//cout << "Point1 distance from Circle1 : " << testCircle1.distance(testPoint1) << endl << endl << endl;

	//CircleFriendly testCircle2(PointFriendly(2, 2), 1);
	//PointFriendly testPoint2(2, 3);

	//cout << "Circle2: " << testCircle2.toString() << endl;
	//cout << "Point2: " << testPoint2.toString() << endl;
	//cout << "Point2 on Circumference Circle1 belongs to it : " << testCircle2.ifBelongsTo(testPoint2) << endl;
	//cout << "Point2 distance from Circle2 : " << testCircle2.distance(testPoint2) << endl << endl << endl;

	//CircleFriendly testCircle3(PointFriendly(2, 2), 1);
	//PointFriendly testPoint3(2, 2);

	//cout << "Circle3: " << testCircle3.toString() << endl;
	//cout << "Point3: " << testPoint3.toString() << endl;
	//cout << "Point3 In Centre Of Circle3 belongs to it : " << testCircle3.ifBelongsTo(testPoint3) << endl;
	//cout << "Point3 distance from Circle1Circle3 : " << testCircle3.distance(testPoint3) << endl << endl << endl;

	//CircleFriendly testCircle4(PointFriendly(5, -3), sqrt(10));
	//PointFriendly testPoint4(6, 0);

	//cout.precision(16);
	//cout << "Circle4: " << testCircle4.toString() << endl;
	//cout << "Point4: " << testPoint4.toString() << endl;
	//cout << "Point4 Inside Circle4 belongs to it : " << testCircle4.ifBelongsTo(testPoint4) << endl;
	//cout<< "Point4 distance from Circle4 : " << testCircle4.distance(testPoint4) << endl << endl << endl;

#pragma endregion
#pragma region ************************ User Experience *********************************

	//do
	//{
	//	system("cls");
	//	aVal = 1;
	//	cout << "Circle1" << endl;
	//	cout << "Centre X:"; cin >> cX; cout << endl; fflush(stdin);
	//	cout << "Centre Y:"; cin >> cY; cout << endl; fflush(stdin);
	//	cout << "Radious r:"; cin >> r; cout << endl; fflush(stdin);

	//	cout << "Point1" << endl;
	//	cout << "Point A.X:"; cin >> pX; cout << endl; fflush(stdin);
	//	cout << "Point A.Y:"; cin >> pY; cout << endl; fflush(stdin);

	//	CircleFriendly* testCircle1 = new CircleFriendly(PointFriendly(cX, cY), r);
	//	PointFriendly* testPoint1 = new PointFriendly(pX, pY);

	//	cout << "Point1 Outside Circle1 belongs to it : " << testCircle1->ifBelongsTo(*testPoint1) << endl;
	//	cout << "Point1 distance from Circle1 : " << testCircle1->distance(*testPoint1) << endl << endl << endl;
	//	cout << "Press 0 to End , or Repeat all " << endl;
	//	cin >> aVal;
	//} while (aVal != 0);

#pragma endregion
#pragma endregion
	
	system("Pause");
    return 0;
}

