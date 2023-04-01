#include "library.h"

class Circle {
private:
    double radius;
    double M_PI = 3.14;
public:
    Circle(double r = 0.0) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getArea() const {
        return M_PI * radius * radius;
    }

    double getCircumference() const {
        return 2 * M_PI * radius;
    }

    bool operator==(const Circle& other) const {
        return radius == other.radius;
    }

    bool operator>(const Circle& other) const {
        return radius > other.radius;
    }

    Circle& operator+=(double r) {
        radius += r;
        return *this;
    }

    Circle& operator-=(double r) {
        radius -= r;
        return *this;
    }
};

class Airplane {
private:
    string type;
    int maxPassengers;
    int currentPassengers;

public:
    Airplane(string type = "", int maxPassengers = 0, int currentPassengers = 0) :
        type(type), maxPassengers(maxPassengers), currentPassengers(currentPassengers) {}

    bool operator==(const Airplane& other) const {
        return (type == other.type);
    }

    Airplane& operator++() {
        currentPassengers++;
        return *this;
    }

    Airplane& operator--() {
        if (currentPassengers > 0) {
            currentPassengers--;
        }
        return *this;
    }

    bool operator>(const Airplane& other) const {
        return (maxPassengers > other.maxPassengers);
    }

    void display() const {
        cout << "Type: " << type << endl;
        cout << "Max passengers: " << maxPassengers << endl;
        cout << "Current passengers: " << currentPassengers << endl;
    }
};