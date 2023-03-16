#include"menu.h"
#include"Classes.h"

void Print_Worker(Worker * worker)
{
    cout << " PIB: " << worker->get_Name() << endl;
    cout << " Position: " << worker->get_Position << endl;
    cout << " Year: " << worker->get_Year << endl;
    cout << " Salary: " << worker->Salary << endl;
    cout << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    Menu* menu = new Menu;
    menu->Vmenu();

    char switch_on;
    switch_on = _getch();

    do {
        switch (switch_on)
        {
        case '1':
        {
            const int Books = 5;
            Book books[Books] = {
              Book("J.K. Rowling", "Harry Potter and the Philosopher's Stone", "Bloomsbury Publishing", 1997, 500, 223),
              Book("J.K. Rowling", "Harry Potter and the Chamber of Secrets", "Bloomsbury Publishing", 1998, 600, 251),
              Book("J.R.R. Tolkien", "The Hobbit", "George Allen & Unwin", 1937, 300, 310),
              Book("J.R.R. Tolkien", "The Lord of the Rings", "George Allen & Unwin", 1954, 1500, 1000),
              Book("George Orwell", "1984", "Secker and Warburg", 1949, 1000, 328),
            };
            string author_name = "J.K. Rowling";
            cout << "Books by " << author_name << ":" << endl;
            for (const auto& book : books) {
                if (book.getAuthor() == author_name) {
                    book.d();
                    cout << endl;
                }
            }
            string publisher_name = "George Allen & Unwin";
            cout << "Books published by " << publisher_name << ":" << endl;
            for (const auto& book : books) {
                if (book.getPublisher() == publisher_name) {
                    book.d();
                    cout << endl;
                }
            }
            int year_published = 1950;
            cout << "Books published after " << year_published << ":" << endl;
            for (const auto& book : books) {
                if (book.getYear() > year_published) {
                    book.d();
                    cout << endl;
                }
            }

        }break;
        case '2': {
            Worker* worker = new Worker;
        }break;
        default:
            break;
        }

    } while (switch_on != '0');

   
    return 0;
}