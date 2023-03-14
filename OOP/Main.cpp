#include"menu.h"
#include"Classes.h"

void Print_Person(Person* person) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " ПІБ  _______________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << person->get_surname() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Дата народження  ___________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << person->get_date_of_birth() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Контактний телефон _________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << person->get_contact_phone() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Місто  _____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << person->get_city() << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	cout << " Країна  ____________________________ ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << person->get_country() << endl;
}
void Print_Apartment(Apartment* apartment) {

	for (size_t i = 0; i < 3; i++)
	{
		int k = rand() % 60 + 1;
		apartment->set_k(k);
		if (apartment->get_k() < 10) {
			cout << " Квартира - 0" << apartment->get_k() << endl;
		}
		else {
			cout << " Квартира - " << apartment->get_k() << endl;
		}
	}
}
int main() {

	srand(time(0));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	Menu* menu = new Menu;

	Person* person = new Person;
	Print_Person(person);

	cout << endl;

	Apartment* apartment = new Apartment;
	Print_Apartment(apartment);
	return 0;
}