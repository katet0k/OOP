#include"Library.h"

class Book
{
private:
    string author;
    string name;
    string publisher;
    int year;
    int number;
    int pages;
public:
    explicit Book(string author, string name, string publisher, int year, int number, int pages)
    {
        this->author = author;
        this->name = name;
        this->number = number;
        this->publisher = publisher;
        this->year = year;
        this->pages = pages;
    }

    string getAuthor() const
    {
        return author;
    }
    string getName() const
    {
        return name;
    }
    string getPublisher() const
    {
        return publisher;
    }
    int getYear() const
    {
        return year;
    }
    int getNumber() const
    {
        return number;
    }
    int getPages() const
    {
        return pages;
    } 
    void d() const
    {
        cout << " Author: " << author << endl;
        cout << " Name: " << name << endl;
        cout << " Publisher: " << publisher << endl;
        cout << " Year: " << year << endl;
        cout << " Number: " << number << endl;
        cout << " Pages: " << pages << endl;
        cout << endl;
    }

    Book() {
        this->author = "Null";
        this->name = "Null";
        this->publisher = "Null";
        this->number = 0;
        this->year = 0;
        this->pages = 0;
    }
    
};

class Worker {
private:
    string Name;
    string Position;
    string Year;
    string Salary;
public:

    void set_Name(string Name) {
        this->Name = Name;
    }
    void set_Position(string Position) {
        this->Position = Position;
    }
    void set_Year(string Year) {
        this->Year = Year;
    }
    void set_Salary(string Salary) {
        this->Salary = Salary;
    }

    string get_Name() {
        return Name;
    }
    string get_Position() {
        return Position;
    }
    string get_Year() {
        return Year;
    }
    string get_Salary() {
        return Salary;
    }

    Worker() {
        set_Name("Null");
        set_Position("Null");
        set_Year("Null");
        set_Salary("Null");
    }
};