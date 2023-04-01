#include "menu.h"
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
		Date d1(15, 3, 2022);
		Date d2(10, 4, 2022);
		cout << "d1 = " << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear() << endl;
		cout << "d2 = " << d2.getDay() << "/" << d2.getMonth() << "/" << d2.getYear() << endl;

		int daysBetween = d2 - d1;
		cout << "Days between d2 and d1: " << daysBetween << endl;

		Date d3 = d1 + 20;
		cout << "d3 = " << d3.getDay() << "/" << d3.getMonth() << "/" << d3.getYear() << endl;

		Date d4 = d2 - 15;
		cout << "d4 = " << d4.getDay() << "/" << d4.getMonth() << "/" << d4.getYear() << endl;

	}break;
	case '2':
	{
		String s1("sdqcg");
		String s2("rgfas34");

		String s3 = s1 * s2;

		s3.display();
	}break;
	default:
		break;
	}
	} while (switch_on != '0');
	
	return 0;
}