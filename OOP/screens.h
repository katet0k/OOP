#include "PointProvider.h"

class Screen
{
public:
	static void Home()
	{
		Point point_1(2, 3);
		PointProvider::show_point(point_1);
		Point point_2(3, 4);
		PointProvider::show_point(point_2);
		Point point_3 = point_1 / point_2;
		PointProvider::show_point(point_3);
	}
};
