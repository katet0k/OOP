#include"menu.h"
#include"Classes.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	Menu* menu = new Menu;
	
	char switch_on;
	do
	{
		system("cls");
		menu->Vmenu();
		cout << "\n --> ";
		switch_on = _getch();
		system("cls");
		cout << endl;
		switch (switch_on)
		{
		case '1': {
			cout << "Triangle area (base=5, height=7): " << Geometry::triangleArea(5, 7) << endl;
			cout << "Triangle area (a=3, b=4, c=5): " << Geometry::triangleArea(3, 4, 5) << endl;
			cout << "Rectangle area (width=6, height=8): " << Geometry::rectangleArea(6, 8) << endl;
			cout << "Square area (side=4): " << Geometry::squareArea(4) << endl;
			cout << "Rhombus area (diagonal1=6, diagonal2=8): " << Geometry::rhombusArea(6, 8) << endl;
			cout << "Number of area calculations: " << Geometry::getCount() << endl;
			system("pause");
		}break;
		case '2': {
			system("pause");
		}break;
		case '3': {
			String s1;
			std::cout << "Number of strings created so far: " << String::getCount() << std::endl;

			String s2(50);
			std::cout << "Number of strings created so far: " << String::getCount() << std::endl;

			String s3("Hello, world!");
			std::cout << "Number of strings created so far: " << String::getCount() << std::endl;

			String s4(s3);
			std::cout << "Number of strings created so far: " << String::getCount() << std::endl;

			s1.input();
			s1.output();

			s2.input();
			s2.output();

			s3.output();
			s4.output();

			return 0;
			system("pause");

		}break;
		default:
			break;
		}
	} while (switch_on != '0');

	return 0;
}