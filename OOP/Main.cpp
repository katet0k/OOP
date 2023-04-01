#include"menu.h"
#include"CLasses.h"
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
			Circle c1(5.0);
			Circle c2(10.0);

			cout << "c1 radius: " << c1.getRadius() << endl;
			cout << "c2 radius: " << c2.getRadius() << endl;

			if (c1 == c2) {
				cout << "The circles have the same radius" << endl;
			}
			else {
				cout << "The circles have different radii" << endl;
			}

			if (c1 > c2) {
				cout << "c1 is bigger than c2" << endl;
			}
			else {
				cout << "c2 is bigger than c1" << endl;
			}

			c1 += 2.0;
			cout << "c1 new radius: " << c1.getRadius() << endl;

			c2 -= 3.0;
			cout << "c2 new radius: " << c2.getRadius() << endl;

		}break;
		case '2':
		{
			Airplane a1("Boeing 747", 400, 200);
			Airplane a2("Airbus A320", 180, 150);
			Airplane a3("Boeing 747", 400, 250);

			// Check if airplanes are of the same type
			if (a1 == a3) {
				cout << "Airplanes are of the same type." << endl;
			}
			else {
				cout << "Airplanes are not of the same type." << endl;
			}

			// Increase and decrease passengers
			++a2;
			--a1;

			// Compare airplanes based on max passengers
			if (a1 > a2) {
				cout << "Airplane 1 has a greater max passenger capacity than airplane 2." << endl;
			}
			else {
				cout << "Airplane 2 has a greater max passenger capacity than airplane 1." << endl;
			}

			// Display airplane information
			a1.display();
			a2.display();
			a3.display();

		}break;
		default:
			break;
		}
	} while (switch_on != '0');
	return 0;
}