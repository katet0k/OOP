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
			system("pause");
		}break;
		case '2': {
			system("pause");
		}break;
		case '3': {
			system("pause");

		}break;
		default:
			break;
		}
	} while (switch_on != '0');

	return 0;
}