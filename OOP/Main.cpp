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
        case '0': {
            break;
        }break;

        case '1': {

            Array arr(5);
            arr[0] = 1;
            arr[1] = 2;
            arr[2] = 3;
            arr[3] = 4;
            arr[4] = 5;

            std::cout << "arr[2] = " << arr[2] << std::endl;

            arr(2);

            std::cout << "arr[2] after operator(): " << arr[2] << std::endl;

            int sum = static_cast<int>(arr);
            std::cout << "sum of elements in arr: " << sum << std::endl;

            char* str = static_cast<char*>(arr);
            std::cout << "arr as a string: " << str << std::endl;
            delete[] str;

        }break;
        case '2': {

        }break;

        default:
            break;
        }

    } while (switch_on != '0');
	return 0;
}