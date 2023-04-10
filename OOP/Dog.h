#include "Pet.h"

class Dog : virtual public Pet {
private:
	string color;
public:
	Dog(string name, string breed, string color) : Pet(name, breed) {
		this->color = color;
	}
	~Dog() {
		cout << "Dog destructor" << endl;
	}
	void Print_info() override {
		cout << "Name: " << name << endl;
		cout << "Breed: " << breed << endl;
		cout << "Color: " << color << endl;
	}

};