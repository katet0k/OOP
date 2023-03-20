#include "PointProvider.h"

class Screen
{
public:
	static void Home()
	{
		Point* point_1 = new Point();
		cin >> *point_1;
		Point* point_2 = new Point();
		*point_2 = *point_1;
		cout << *point_1 << endl;
		cout << *point_2 << endl;

	}
};
