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


		}break;
		default:
			break;
		}
	} while (switch_on != '0');
	
	return 0;
}