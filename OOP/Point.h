#include "library.h"

//

class Point
{
private:
	int x;
	int y;
	friend istream& operator >> (istream& input, Point& point);
public:
	inline void setX(int x)
	{
		this->x = x;
	}
	inline void setY(int y)
	{
		this->y = y;
	}
	inline int getX() const
	{
		return x;
	}
	inline int getY() const
	{
		return y;
	}
	Point()
	{
		setX(0);
		setY(0);
	}
	Point(int x, int y)
	{
		setX(x);
		setY(y);
	}
	Point(Point& point)
	{
		cout << "Copy construct " << endl;
		setX(point.x);
		setY(point.y);
	}
	~Point()
	{
		setX(0);
		setY(0);
	}
	Point operator + (Point object_r)
	{
		Point p;
		p.setX(this->getX() + object_r.getX());
		p.setY(this->getY() + object_r.getY());
		return p;
	}
	Point operator - (Point object_r)
	{
		Point p;
		p.setX(this->getX() - object_r.getX());
		p.setY(this->getY() - object_r.getY());
		return p;
	}
	Point operator / (Point object_r)
	{
		Point p;
		p.setX(this->getX() / object_r.getX());
		p.setY(this->getY() / object_r.getY());
		return p;
	}
	Point operator * (Point object_r)
	{
		Point p;
		p.setX(this->getX() * object_r.getX());
		p.setY(this->getY() * object_r.getY());
		return p;
	}
	Point& operator++()
	{
		++x; ++y; return *this;
	}
	Point& operator--()
	{
		--x; --y; return *this;
	}
	const Point operator++(int)
	{
		Point point{ x, y };
		++(*this);
		return point;
	}
	const Point operator--(int)
	{
		Point point{ x, y };
		--(*this);
		return point;
	}
	Point& operator = (const Point& point)
	{
		if (this == &point)
			return *this;
		this->setX(point.x + 2);
		this->setY(point.y + 2);
		return *this;
	}


};
