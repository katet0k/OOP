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


