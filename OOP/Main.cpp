#include"menu.h"
#include"Classes.h"

int main() {

    char switch_on;

    do {
        switch_on = _getch();
        switch (switch_on)
        {
        case '1':
        {
            vector<Book> books = {
        Book("J.K. Rowling", "Harry Potter and the Philosopher's Stone",
             "Bloomsbury", 1997, 223, 10),
        Book("J.K. Rowling", "Harry Potter and the Chamber of Secrets",
             "Bloomsbury", 1998, 251, 7),
        Book("J.K. Rowling", "Harry Potter and the Prisoner of Azkaban",
             "Bloomsbury", 1999, 317, 15),
        Book("J.K. Rowling", "Harry Potter and the Goblet of Fire",
             "Bloomsbury", 2000, 636, 12),
        Book("J.K. Rowling", "Harry Potter and the Order of Phoenix",
             "Bloomsbury", 2003, 766, 9),
        Book("J.K. Rowling", "Harry Potter and the Half-Blood Prince",
             "Bloomsbury", 2005, 607, 11),
        Book("J.K. Rowling", "Harry Potter and the Deathly Hallows",
             "Bloomsbury", 2007, 607, 13),
        Book("J.R.R. Tolkien", "The Hobbit",
             "George Allen & Unwin", 1937, 310, 5),
        Book("J.R.R. Tolkien", "The Lord of the Rings",
             "George Allen & Unwin", 1954, 1483, 3),
        Book("J.R.R. Tolkien", "The Silmarillion",
             "George Allen & Unwin", 1977, 365, 8),
            };
            // Список книг заданого автора
            cout << "Books by J.K. Rowling:\n";
            for (const auto& book : books) {
                if (book.author() == "J.K. Rowling") {
                    cout << book.title() << endl;
                }
            }
            cout << '\n';

            // Список книг, випущених заданим видавництвом
            cout << "Books published by Bloomsbury:\n";
            for (const auto& book : books) {
                if (book.publisher() == "Bloomsbury") {
                    cout << book.title() << endl;
                }
            }
            cout << '\n';

            // Список книг, випущених після заданого року
            int year = 1999;
            cout << "Books published after " << year << ":\n";
            for (const auto& book : books) {
                if (book.year() > year) {
                    cout << book.title() << endl;
                }
            }

        } break;
        case '2':
        {
            vector<Worker> workers = {
                Worker("Ivan Ivanov", "Manager", 2010, 5000),
                Worker("Petro Petrenko", "Accountant", 2005, 4000),
                Worker("Vasyl Vasylenko", "Developer", 2015, 8000),
                Worker("Anna Ivanova", "Designer", 2012, 6000),
                Worker("Maria Petrivna", "Manager", 2008, 4500)
            };

            // список працівників, стаж роботи яких на цьому підприємстві перевищує задане число років
            int yearsOfWork = 10;
            cout << "Workers with more than " << yearsOfWork << " years of work experience:" << endl;
            for (const auto& worker : workers) {
                if (2023 - worker.getStartYear() > yearsOfWork) {
                    cout << worker.getName() << " - " << worker.getPosition() << endl;
                }
            }
            cout << endl;

            // список працівників, зарплата яких перевищує задану
            int salary = 5500;
            cout << "Workers with a salary greater than " << salary << ":" << endl;
            for (const auto& worker : workers) {
                if (worker.getSalary() > salary) {
                    cout << worker.getName() << " - " << worker.getPosition() << endl;
                }
            }
            cout << endl;

            // список працівників, які займають задану посаду
            string position = "Manager";
            cout << "Workers with the position of " << position << ":" << endl;
            for (const auto& worker : workers) {
                if (worker.getPosition() == position) {
                    cout << worker.getName() << " - " << worker.getStartYear() << " - " << worker.getSalary() << endl;
                }
            }

        }break;
        case '3':
        {
            vector<Reservoir> reservoirs = {
        Reservoir("Lake Ontario", 311, 85, 244),
        Reservoir("Lake Superior", 563, 257, 406),
        Reservoir("Lake Erie", 388, 92, 64),
        Reservoir("Lake Huron", 332, 229, 229),
        Reservoir("Lake Michigan", 494, 190, 281),
        Reservoir("Great Salt Lake", 120, 48, 10),
        Reservoir("Lake Tahoe", 35, 19, 501),
        Reservoir("Lake Baikal", 636, 80, 1637),
        Reservoir("Caspian Sea", 1199, 393, 1025),
        Reservoir("Dead Sea", 67, 18, 304)
            };


            for (const auto& r : reservoirs) {
                r.display();
            }


            ofstream outfile("reservoirs.txt");
            if (outfile.is_open()) {
                for (const auto& r : reservoirs) {
                    outfile << r.getName() << "," << r.getLength() << "," << r.getWidth() << "," << r.getMaxDepth() << "\n";
                }
                outfile.close();
            }
            else {
                cout << "Unable to open file" << endl;
            }

        }break;
        default:
            break;
        }
    } while (switch_on != '0');

    return 0;
}