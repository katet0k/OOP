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
            Overcoat oc1("wool", 200.0);
            Overcoat oc2("wool", 150.0);
            Overcoat oc3("trench", 300.0);

            std::cout << std::boolalpha;
            std::cout << "oc1 == oc2: " << (oc1 == oc2) << '\n'; // true
            std::cout << "oc1 == oc3: " << (oc1 == oc3) << '\n'; // false

            oc2 = oc1;
            std::cout << "oc1 == oc2: " << (oc1 == oc2) << '\n'; // true

            std::cout << "oc1 > oc2: " << (oc1 > oc2) << '\n'; // false
            std::cout << "oc2 > oc1: " << (oc2 > oc1) << '\n'; // true
            std::cout << "oc1 > oc3: "; (oc1 > oc3);

        } break;

        case '2':
        {
            Flat flat1(50, 100000);
            Flat flat2(80, 150000);

            cout << "Flat 1: " << flat1 << endl;
            cout << "Flat 2: " << flat2 << endl;

            // Check for equality of areas
            if (flat1 == flat2) {
                std::cout << "The flats have the same area" << std::endl;
            }
            else {
                std::cout << "The flats have different areas" << std::endl;
            }

            // Assign flat2 to flat1
            flat1 = flat2;
            std::cout << "Flat 1 after assignment: " << flat1 << std::endl;

            // Compare flats by price
            if (flat1 > flat2) {
                std::cout << "Flat 1 is more expensive than flat 2" << std::endl;
            }
            else {
                std::cout << "Flat 2 is more expensive than flat 1" << std::endl;
            }

        }break;
        default:
            break;
        }
    } while (switch_on != '0');
   
	return 0;
}