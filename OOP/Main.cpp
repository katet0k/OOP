#include"menu.h"
#include"Classes.h"


void Print_Student(Student* student) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ПІБ  _______________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_surname() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Дата народження  ___________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_date_of_birth() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Контактний телефон _________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_contact_phone() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Місто  _____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Країна  ____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_country() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Місто та країна" << endl;
	cout << " де знаходиться навчальний заклад ___ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_city_and_country_institution() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Номер групи ________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_number_groups() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Назва навчального закладу  _________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << student->get_name_of_the_institution() << endl;

}
void Print_Tochka(Tochka* tochka) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << " Ваші координати -- > ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << ".";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << ".";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << tochka->get_z() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}
void Print_Drib(Drib* drib) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//додавання 
	cout << endl;
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " + ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res1() << endl;

	//віднімання 
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " - ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res2() << endl;

	//множення
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " * ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res3() << endl;

	//ділення 
	cout << drib->get_x();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " / ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_y();
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 9));
	cout << " = ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << drib->get_res4() << endl;

}

int main() {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

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
				cout << " Ваші координати записані у File.txt ;)";
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
		default:
			break;
		}

	} while (switch_on != '0');

	return 0;
}



