#include "Point.h"

class PointProvider
{
public:
	static void show_point(Point* object, string name = "Point")
	{
		cout << name << "[ " << object->getX() << " : " << object->getY() << " ]" << endl;
	}
	static void show_point(Point object, string name = "Point")
	{
		cout << name << "[ " << object.getX() << " : " << object.getY() << " ]" << endl;
	}
};

bool operator ==(const Point& point1, const Point& point2)
{
	return (point1.getX() == point2.getX() && point1.getY() == point2.getY()) ? true : false;
}
bool operator != (const Point& point1, const Point& point2)
{
	return !(point1.getX() == point2.getX() && point1.getY() == point2.getY());
}
bool operator > (const Point& point1, const Point& point2)
{
	return point1 > point2;
}

ostream& operator << (ostream& output, const Point& point)
{
	output << "[ " << point.getX() << " : " << point.getY() << " ]";
	return output;
}
istream& operator >> (istream& input, Point& point)
{
	cout << "Point[" << (long long)&point << "]:" << endl;
	cout << "Input x: ";
	input >> point.x;
	input.ignore(1);
	cout << "Input y: ";
	input >> point.y;
	return input;
}


