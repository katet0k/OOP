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
	do
	{
		switch_on = _getch();
		switch (switch_on)
		{
		case '1':
		{

			Fraction f1(1, 2);
			Fraction f2(3, 4);

			Fraction f3 = f1 + f2;
			cout << f3 << endl;

			Fraction f4 = f1 - f2;
			cout << f4 << endl;

			Fraction f5 = f1 * f2;
			cout << f5 << endl;

			Fraction f6 = f1 / f2;
			cout << f6 << endl;

		}break;
		case '2':
		{
			// ��������� ����������� �����
			Complex z1(1, 2);
			Complex z2(3, 4);

			// ������������ �������������� ��������� ��� ������������ ��������
			Complex sum = z1 + z2;
			Complex difference = z1 - z2;
			Complex product = z1 * z2;
			Complex quotient = z1 / z2;

			// ������������ �������������� ��������� ��� ��������� �� ��������
			Complex z3 = z1;
			z3 += z2;
			Complex z4 = z1;
			z4 -= z2;

			// ������������ �������������� ��������� ��� �������� �� ������
			Complex z5 = z1;
			z5 *= z2;
			Complex z6 = z1;
			z6 /= z2;

			// ������������ ��������������� ��������� ���������� �����
			Complex z7 = -z1;

			// ��������� ����������� �����
			bool equal = (z1 == z2);
			bool notEqual = (z1 != z2);

			// ��������� ������������ ����� �� �����
			std::cout << z1 << std::endl;
		}break;
		default:
			break;
		}

	} while (true);
	return 0;
}