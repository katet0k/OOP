#include"menu.h"
#include "CLasses.h"
int main() {
    Queue<int> queue;

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
        case '1':{
            queue.enqueue(10);
            queue.enqueue(20);
            queue.enqueue(30);

            std::cout << "Front: " << queue.getFront() << std::endl;
            std::cout << "Back: " << queue.getBack() << std::endl;

            queue.dequeue();

            std::cout << "Front after dequeue: " << queue.getFront() << std::endl;
            std::cout << "Back after dequeue: " << queue.getBack() << std::endl;

            }break;
        case '2': {
            DoublyLinkedList<int> list1;
            list1.addToFront(1);
            list1.addToFront(2);
            list1.addToFront(3);

            DoublyLinkedList<int> list2;
            list2.addToFront(4);
            list2.addToFront(2);
            list2.addToFront(5);

            DoublyLinkedList<int>::Node* cloneHead = list1.clone();
            DoublyLinkedList<int>::Node* mergedHead = list1 + list2;
            DoublyLinkedList<int>::Node* commonHead = list1 * list2;

            std::cout << "Clone: ";
            DoublyLinkedList<int>::Node* cloneNode = cloneHead;
            while (cloneNode != nullptr) {
                std::cout << cloneNode->data << " ";
                cloneNode = cloneNode->next;
            }
            std::cout << std::endl;

            std::cout << "Merged: ";
            DoublyLinkedList<int>::Node* mergedNode = mergedHead;
            while (mergedNode != nullptr) {
                std::cout << mergedNode->data << " ";
                mergedNode = mergedNode->next;
            }
            std::cout << std::endl;

            std::cout << "Common: ";
            DoublyLinkedList<int>::Node* commonNode = commonHead;
            while (commonNode != nullptr) {
                std::cout << commonNode->data << " ";
                commonNode = commonNode->next;
            }
            std::cout << std::endl;

        }break;
        default:
            break;
        }
    } while (switch_on != '0');
   
    return 0;
}