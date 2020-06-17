#pragma once
#include <iostream>
using namespace std;
class Vector;
class Point
{
	int x;
	int y;

public:
	friend class Vector;

	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void Print()const;

	Point operator++();
	Point operator--();
	Point operator!();

	bool operator >(const Point& other) const;
	bool operator <(const Point& other) const;
};

class Vector
{
	Point* points;
	int countPoints;

public:
	Vector()
	{
		points = nullptr;
		countPoints = 0;
	}

	Vector(const Vector& other); //copy c-tor

	Vector(Vector&& other); // move c-tor

	~Vector()
	{
		if (points != nullptr) delete[] points;
	}
		
	void AddPoint(Point newPoint);

	void Print()const;


};

