#include"menu.h"
#include"Classes.h"
#include"Print.h"

int main() {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i = 0;
	int a = 0;
	char switch_on;
	do
	{
		system("cls");
		Menu* menu = new Menu;
		menu->Vmenu();
		cout << "\n --> ";
		switch_on = _getch();
		system("cls");
		cout << endl;

		switch (switch_on)
		{
		case '0': {
			break;
		}break;

		case '1': {

			Tochka* tochka = new Tochka;
			Print_Tochka(tochka);

			string path = "File.txt";
			fstream File;
			File.open(path, ios::out);

			if (!File.is_open()) {
				cout << endl;
				cout << " Error " << endl;
			}
			else {
				cout << endl;
				cout << " ???? ?????????? ???????? ? File.txt ;)";
				File << tochka->get_x() << "." << tochka->get_y() << "." << tochka->get_z() << endl;
			}

			File.close();
			cout << endl << endl;
			cout << " ";
			system("pause");
		}break;
		case '2': {

			Drib* drib = new Drib;
			Print_Drib(drib);

			cout << endl;
			cout << " ";
			system("pause");
		}break;
		case '3': {

			Student* student = new Student;
			Print_Student(student);

			cout << endl;
			cout << " ";
			system("pause");
		}break;
		case '4': {

			char switch_on1 = '0';
			Phone_book* phone_book = new Phone_book;
			cout << phone_book->get_Name() << endl;
			do
			{
				Print_Phanebookk(phone_book, i, a);
				menu->MenuPhone();
				cout << "-->";
				switch_on1 = _getch();

				system("cls");

				switch (switch_on1)
				{
				case '1':
				{
					Print_Phanebook(phone_book, i++, a);
					system("pause");
					system("cls");
				}break;
				case '2':
				{
					if (i >= 1) {
						menu->DeleteMenu1();
						cout << "?????? ??????? ???? ?????? ????????? -->";
						cin >> a;
					}
					else {
						menu->DeleteMenu();
						cout << "?????? ??????? ???? ?????? ????????? -->";
						cin >> a;
					}
					system("pause");
					system("cls");
				}break;
				case '3':
				{
					string PIB;
					cout << " ?????? ??????? ???? ?????? ?????? --> ";
					cin >> PIB;
					Print_PIB(phone_book, PIB);
					system("pause");
					system("cls");

				}break;
				default:
					break;
				}
			} while (switch_on1 != '0');

		}break;
		default:
			break;
		}

	} while (switch_on != '0');

	return 0;
}


