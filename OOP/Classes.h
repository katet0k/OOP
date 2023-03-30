#include"Library.h"

class Fraction {
private:
    int num_;
    int denom_;
public:
    Fraction(int num = 0, int denom = 1) : num_(num), denom_(denom) {}

    int getNum() const { return num_; }
    void setNum(int num) { num_ = num; }

    int getDenom() const { return denom_; }
    void setDenom(int denom) { denom_ = denom; }

    Fraction operator+(const Fraction& other) const {
        int newNum = num_ * other.denom_ + denom_ * other.num_;
        int newDenom = denom_ * other.denom_;
        return Fraction(newNum, newDenom);
    }

    Fraction operator-(const Fraction& other) const {
        int newNum = num_ * other.denom_ - denom_ * other.num_;
        int newDenom = denom_ * other.denom_;
        return Fraction(newNum, newDenom);
    }

    Fraction operator*(const Fraction& other) const {
        int newNum = num_ * other.num_;
        int newDenom = denom_ * other.denom_;
        return Fraction(newNum, newDenom);
    }

    Fraction operator/(const Fraction& other) const {
        int newNum = num_ * other.denom_;
        int newDenom = denom_ * other.num_;
        return Fraction(newNum, newDenom);
    }

};

std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    os << fraction.getNum() << "/" << fraction.getDenom();
    return os;
}

class Complex {
private:
    double real_;
    double imaginary_;
public:
    Complex(double real = 0, double imaginary = 0)
        : real_(real), imaginary_(imaginary) {}

    double getReal() const { return real_; }
    void setReal(double real) { real_ = real; }

    double getImaginary() const { return imaginary_; }
    void setImaginary(double imaginary) { imaginary_ = imaginary; }

    Complex operator+(const Complex& other) const {
        return Complex(real_ + other.real_, imaginary_ + other.imaginary_);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real_ - other.real_, imaginary_ - other.imaginary_);
    }

    Complex operator*(const Complex& other) const {
        double real = real_ * other.real_ - imaginary_ * other.imaginary_;
        double imaginary = real_ * other.imaginary_ + imaginary_ * other.real_;
        return Complex(real, imaginary);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.real_ * other.real_ + other.imaginary_ * other.imaginary_;
        double real = (real_ * other.real_ + imaginary_ * other.imaginary_) / denominator;
        double imaginary = (imaginary_ * other.real_ - real_ * other.imaginary_) / denominator;
        return Complex(real, imaginary);
    }

    Complex& operator+=(const Complex& other) {
        real_ += other.real_;
        imaginary_ += other.imaginary_;
        return *this;
    }

    Complex& operator-=(const Complex& other) {
        real_ -= other.real_;
        imaginary_ -= other.imaginary_;
        return *this;
    }

    Complex& operator*=(const Complex& other) {
        double real = real_ * other.real_ - imaginary_ * other.imaginary_;
        double imaginary = real_ * other.imaginary_ + imaginary_ * other.real_;
        real_ = real;
        imaginary_ = imaginary;
        return *this;
    }

    Complex& operator/=(const Complex& other) {
        double denominator = other.real_ * other.real_ + other.imaginary_ * other.imaginary_;
        double real = (real_ * other.real_ + imaginary_ * other.imaginary_) / denominator;
        double imaginary = (imaginary_ * other.real_ - real_ * other.imaginary_) / denominator;
        real_ = real;
        imaginary_ = imaginary;
        return *this;
    }

    Complex operator-() const {
        return Complex(-real_, -imaginary_);
    }

    bool operator==(const Complex& other) const {
        return real_ == other.real_ && imaginary_ == other.imaginary_;
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real_ << " + " << c.imaginary_ << "i";
        return os;
    }

};