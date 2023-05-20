#include"Classes.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    Menu* menu = new Menu;
    menu->Vmenu();

    std::vector<int> numbers = { 5, 2, 8, 1, 9 };
    LambdaSort sorter(numbers);

    std::cout << "Original data: ";
    sorter.printData();

    std::cout << "Sorting in ascending order: ";
    sorter.sortAscending();
    sorter.printData();

    std::cout << "Sorting in descending order: ";
    sorter.sortDescending();
    sorter.printData();

    return 0;
}
