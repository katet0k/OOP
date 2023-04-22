#include"menu.h"
#include "Classes.h"
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	Menu* menu = new Menu;
	menu->Vmenu(); 
	char switch_on;
	do
	{
		switch_on = _getch();
		switch (switch_on)
		{
		case '1':
		{
			// Конструктор за замовчуванням
			Student student1;

			// Конструктор з параметрами
			Student student2("John", 20);

			// Конструктор копіювання
			Student student3 = student2;

			// Оператор присвоєння копіювання
			Student student4;
			student4 = student2;

			// Конструктор переміщення
			Student student5 = std::move(student4);

			// Оператор присвоєння переміщення
			Student student6;
			student6 = std::move(student5);

			std::cout << "Student 1: " << student1.getName() << ", " << student1.getAge() << std::endl;
			std::cout << "Student 2: " << student2.getName() << ", " << student2.getAge() << std::endl;
			std::cout << "Student 3: " << student3.getName() << ", " << student3.getAge() << std::endl;
			std::cout << "Student 4: " << student4.getName() << ", " << student4.getAge() << std::endl;
			std::cout << "Student 5: " << student5.getName() << ", " << student5.getAge() << std::endl;
			std::cout << "Student 6: " << student6.getName() << ", " << student6.getAge() << std::endl;

		}break;
		case '2':
		{
			// Створення будинку
			House house;
			house.setAddress(1);
			// Створення людей
			Human* human1 = new Human();
			human1->setName("John");
			human1->setAge(30);

			Human* human2 = new Human();
			human2->setName("Jane");
			human2->setAge(25);

			// Створення квартир і додавання їх до будинку
			Apartment apartment1;
			apartment1.setNumber(1);
			apartment1.setFloor(1);
			apartment1.setOwner(human1);

			house.addApartment(apartment1);

			Apartment apartment2;
			apartment2.setNumber(2);
			apartment2.setFloor(2);
			apartment2.setOwner(human2);

			house.addApartment(apartment2);

			// Виведення інформації про будинок та його квартири
			std::cout << "House address: " << house.getAddress() << std::endl;

			Apartment* apartments = house.getApartments();
			int apartmentCount = house.getApartmentCount();

			for (int i = 0; i < apartmentCount; i++) {
				std::cout << "Apartment number: " << apartments[i].getNumber() << std::endl;
				std::cout << "Apartment floor: " << apartments[i].getFloor() << std::endl;

				Human* owner = apartments[i].getOwner();

				if (owner != nullptr) {
					std::cout << "Apartment owner: " << owner->getName() << ", " << owner->getAge() << " years old" << std::endl;
				}
			}

			// Вивільнення пам'яті
			delete human1;
			delete human2;


		}break;
		default:
			break;
		}
	} while (switch_on != '0');
	
	return 0;
}