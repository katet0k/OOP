#include"Librery.h"

class Square {
protected:
    double side;

public:
    Square(double s) : side(s) {}
    double area() const { return side * side; }
};

class Circle : public Square {
public:
    Circle(double s) : Square(s) {}
    double area() const { return M_PI * side * side / 4; }
};

class Wheels {
protected:
    int number;

public:
    Wheels(int n) : number(n) {}
    int getNumber() const { return number; }
};

class Engine {
protected:
    int power;

public:
    Engine(int p) : power(p) {}
    int getPower() const { return power; }
};

class Doors {
protected:
    int number;

public:
    Doors(int n) : number(n) {}
    int getNumber() const { return number; }
};

class Car : public Wheels, public Engine, public Doors {
public:
    Car(int wn, int ep, int dn) : Wheels(wn), Engine(ep), Doors(dn) {}
};
