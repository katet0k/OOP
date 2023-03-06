#include <iostream>
using namespace std;
class Point {
private:
    int* x, * y;
    string name_of_point;
public:
    //setter & getter  
    void set_x(int x)
{
    this->x = new int{ x };
}
void set_y(int y)
{
    this->y = new int{ y };
}
void set_name(string name_of_point)
{
    if (name_of_point.empty() || name_of_point == "NULL")
        this->name_of_point = "NULL";
    else            this->name_of_point = name_of_point;
}
int get_x()
{
    if (x == nullptr)
    {
        cout << "x is empty!" << endl;
        return 0;
    }
    else {
        return *x;
    }
}
int get_y()
{
    if (x == nullptr)
    {
        cout << "y is empty!" << endl;
        return 0;
    }
    else {
        return *y;
    }
}
int* get_x_p()
{
    return x;
}
int* get_y_p()
{
    return y;
}
string get_name()
{
    return name_of_point;
}
//-------------------------   
Point() //default constructor   
{
set_x(0);
set_y(0);
set_name("NULL");
}
Point(int x, int y)
{
    set_x(x);
    set_y(y);
}
Point(int x, int y, string name) : Point(x, y)
{
    set_name(name);
}
~Point()
{
    cout << "~()" << endl;
    delete x;
    x = nullptr;
    delete y;
    y = nullptr;
    name_of_point.clear();
}
};
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