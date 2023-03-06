#include"library.h"
#include"Point.h"

void print_poitn(Point* point)
{
    if (point != nullptr)
    {
        cout << point->get_name() << endl;
        cout << point->get_x() << endl;
        cout << point->get_y() << endl;
    }
    else {
        cout << "Object is empty!" << endl;
    }
}
int main()
{
    Point* p_1 = new Point(0, 0, "");
    print_poitn(p_1);
    delete p_1;
    p_1 = nullptr;
    print_poitn(p_1);
    return 0;
}