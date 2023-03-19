#include"Library.h"

class Menu {
public:
	void Vmenu() {
		cout << " #===============================# " << endl;
		cout << "  |                             |  " << endl;
		cout << "  |      1 - class Точка        |  " << endl;
		cout << "  |                             |  " << endl;
		cout << "  |      2 - class Дріб         |  " << endl;
		cout << "  |                             |  " << endl;
		cout << "  |      3 - class Студент      |  " << endl;
		cout << "  |                             |  " << endl;
		cout << "  |     4 - Телефонна книга     |  " << endl;
		cout << "  |                             |  " << endl;
		cout << " #===============================# " << endl;
	}
	void MenuPhone() {
		cout << endl;
		cout << "                                                  " << endl;
		cout << "     Для додання нового абонента натисніть -- 1   " << endl;
		cout << "                                                  " << endl;
		cout << "     Для Видалення абонента натисніть -- 2        " << endl;
		cout << "                                                  " << endl;
		cout << "     Для пошуку абонента натисніть -- 3           " << endl;
		cout << "                                                  " << endl << endl;
	}
	void DeleteMenu() {
		cout << "               " << endl;
		cout << "    1 -- Bob   " << endl;
		cout << "    2 -- Daria " << endl;
		cout << "    3 -- Tom   " << endl;
		cout << "               " << endl;
	}
	void DeleteMenu1() {
		cout << "    1 --       " << endl;
		cout << "    2 -- Bob   " << endl;
		cout << "    3 -- Daria " << endl;
		cout << "    4 -- Tom   " << endl;
		cout << "               " << endl;
	}
};