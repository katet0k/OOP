#include"menu.h"
#include "Classes.h"

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
		case '0':
		{
			break;
		}break;
		case '1':
		{
			CharStack stack(5);
			stack.push('a');
			stack.push('b');
			stack.push('c');
			stack.push('d');
			stack.push('e');

			cout << "Count: " << stack.count() << endl;
			cout << "Is empty? " << stack.isEmpty() << endl;
			cout << "Is full? " << stack.isFull() << endl;

			while (!stack.isEmpty()) {
				cout << stack.pop() << " ";
			}
			cout << endl;

			stack.push('f');
			stack.push('g');
			cout << "Peek: " << stack.peek() << endl;
			stack.pop();
			cout << "Peek: " << stack.peek() << endl;

			stack.clear();
			cout << "Count: " << stack.count() << endl;
			cout << "Is empty? " << stack.isEmpty() << endl;
			cout << "Is full? " << stack.isFull() << endl;

		}break;
		case '2':
		{
			DynamicStack stack(5);

			stack.push('a');
			stack.push('b');
			stack.push('c');
			stack.push('d');
			stack.push('e');
			stack.push('f');
			stack.push('g');

			cout << "Count: " << stack.count() << endl;
			cout << "Is empty? " << stack.isEmpty() << endl;
			cout << "Is full? " << stack.isFull() << endl;

			while (!stack.isEmpty()) {
				cout << stack.pop() << " ";
			}
			cout << endl;

			cout << "Peek: " << stack.peek() << endl;
			stack.pop();
			cout << "Peek: " << stack.peek() << endl;

			stack.clear();
			cout << "Count: " << stack.count() << endl;
			cout << "Is empty? " << stack.isEmpty() << endl;
			cout << "Is full? " << stack.isFull() << endl;

		}break;
		}
		

	} while (switch_on != '0');
	return 0;
}