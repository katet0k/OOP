#include "Pet.h"

class Parrot : virtual public Pet {
private:
	string color;
public:
	Parrot(string name, string breed, string color) : Pet(name, breed) {
		this->color = color;
	}
	~Parrot() {
		cout << "Parrot destructor" << endl;
	}
	void Print_info() override {
		cout << "Name: " << name << endl;
		cout << "Breed: " << breed << endl;
		cout << "Color: " << color << endl;
	}

};
