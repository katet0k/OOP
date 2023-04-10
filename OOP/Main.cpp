#include"menu.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

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
			Pet* pet = new Pet;
			Dog *dog = new Dog("Sharik", "German Shepherd", "Black");
			Cat *cat = new Cat("Murzik", "Persian", "White");
			Parrot *parrot = new Parrot("Kesha", "African Grey", "Green");
			cout << "Dog: " << endl;
			dog->Print_info();
			cout << "Cat: " << endl;
			cat->Print_info();
			cout << "Parrot: " << endl;
			parrot->Print_info();
			delete pet;
			delete dog;
			delete cat;
			delete parrot;


		}break;
		default:
			break;
		}
	} while (true);
	return 0;
}