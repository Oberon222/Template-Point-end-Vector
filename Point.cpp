#include "Point.h"
#include <iostream>
using namespace std;

void Point::Print() const
{
	cout << "Coord. X " << x << endl;
	cout << "Coord. Y " << y << endl;
}

Point Point::operator++()
{
		this->x++;
		this->y++;

	return *this;
}

Point Point::operator--()
{
		this->x--;
		this->y--;
	return *this;
}

Point Point::operator!()
{
	this->x * (-1);
	this->y * (-1);

	return *this;
}

bool Point::operator>(const Point& other) const
{

	return (this->x>other.x && this->y>other.y);
}

bool Point::operator<(const Point& other) const
{
	return (this->x<other.x && this->y< other.y);
}

Vector::Vector(const Vector& other) // copy c-tor
{

		this->countPoints = other.countPoints;
		this->points = new Point[other.countPoints];
		for (int i = 0; i < other.countPoints; i++) {
			this->points[i] = other.points[i];
		}

}

Vector::Vector(Vector&& other)
{
	this->countPoints = other.countPoints;
	this->points = other.points;
	other.points = nullptr;
	other.countPoints = 0;
}

void Vector::AddPoint(Point newPoint)
{
	Point* tmp = new Point[countPoints + 1];
	for (int i = 0; i < countPoints; i++) {
		tmp[i] = points[i];
	}
	tmp[countPoints] = newPoint;
	delete[] points;
	points = tmp;
	countPoints++;
}

void Vector::Print() const
{
	if (points != nullptr) {
		for (int i = 0; i < countPoints; i++) {
			cout <<i+1<<") "<<"X = "<< points[i].x << "; " <<"Y = "<< points[i].y << endl;
		}
	}
}
