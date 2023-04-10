#include "Pet.h"

class Cat : virtual public Pet {
private:
	string color;
public:
	Cat(string name, string breed, string color) : Pet(name, breed) {
		this->color = color;
	}
	~Cat() {
		cout << "Cat destructor" << endl;
	}
	void Print_info() override {
		cout << "Name: " << name << endl;
		cout << "Breed: " << breed << endl;
		cout << "Color: " << color << endl;
	}
};