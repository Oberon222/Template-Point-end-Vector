#include <iostream>
#include"Point.h"
using namespace std;

int main() {
	Vector v1;
	v1.AddPoint(Point(3, 4));
	v1.AddPoint(Point(8, 2));
	v1.AddPoint(Point(1, 7));
	v1.Print();

	Point p1(4, 7);
	Point p2(2, 8);	
	p1.operator++();
	p1.Print();



	system("pause");
	return 0;
}