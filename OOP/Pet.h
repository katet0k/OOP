#pragma once
#include "Library.h"

class Pet {
protected:
	string name;
	string breed;
public:
	Pet() {
		this->name = "No name";
		this->breed = "No breed";
	}
	Pet(string name, string breed) {
		this->name = name;
		this->breed = breed;
	}
	~Pet() {
		cout << "Pet destructor" << endl;
	}
	virtual void Print_info() {

	}

};