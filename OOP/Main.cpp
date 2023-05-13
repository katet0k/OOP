#include"menu.h"
#include"Classes.h"


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    Menu* menu = new Menu;

    LinkedList<int> list1;
    list1.push_front(1);
    list1.push_front(2);
    list1.push_front(3);
    cout << "List 1: ";
    list1.print();

    LinkedList<int>* list2 = list1.clone();
    cout << "Cloned list: ";
    list2->print();

    LinkedList<int> list3;
    list3.push_front(4);
    list3.push_front(5);
    list3.push_front(6);
    cout << "List 2: ";
    list3.print();

    LinkedList<int>* list4 = (*list2) + list3;
    cout << "List 1 + List 2: ";
    list4->print();

    LinkedList<int>* list5 = (*list2) * list3;
    cout << "List 1 * List 2: ";
    list5->print();

    delete list2;
    delete list4;
    delete list5;

    return 0;
}
