#include"menu.h"
#include"Classes.h"
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	Menu* menu = new Menu;
	menu->Vmenu();
	char switch_on;
	do {
		switch_on = _getch();

		switch (switch_on)
		{
		case '1': {
			Circle c(1.0);
			double area = c.area();
		}break;
		case '2':
		{
			Car c (4, 200, 4);
			int wheels = c.getNumber(); // 4
			int power = c.getPower(); // 200
			int doors = c.getNumber(); // 4
		}

		default:
			break;
		}
	} while (switch_on != '0');
	return 0;
}