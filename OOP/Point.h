#include "library.h"


class Point
{
private:
	int x;
	int y;
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
	//write overload operator + for object








};
