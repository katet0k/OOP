#include "Library.h"

class Student {
private:
    char* name;
    int age;

public:
    // Конструктор за замовчуванням
    Student() : name(nullptr), age(0) {}

    // Конструктор з параметрами
    Student(const char* name, int age) : age(age) {
        int nameLength = strlen(name) + 1;
        this->name = new char[nameLength];
        strcpy(this->name, name);
    }

    // Конструктор копіювання
    Student(const Student& other) : age(other.age) {
        int nameLength = strlen(other.name) + 1;
        name = new char[nameLength];
        strcpy(name, other.name);
    }

    // Конструктор переміщення
    Student(Student&& other) noexcept : name(other.name), age(other.age) {
        other.name = nullptr;
        other.age = 0;
    }

    // Деструктор
    ~Student() {
        delete[] name;
    }

    // Оператор присвоєння копіювання
    Student& operator=(const Student& other) {
        if (this != &other) {
            delete[] name;
            int nameLength = strlen(other.name) + 1;
            name = new char[nameLength];
            strcpy(name, other.name);
            age = other.age;
        }
        return *this;
    }

    // Оператор присвоєння переміщення
    Student& operator=(Student&& other) noexcept {
        if (this != &other) {
            delete[] name;
            name = other.name;
            age = other.age;
            other.name = nullptr;
            other.age = 0;
        }
        return *this;
    }

    // Геттер для поля "name"
    const char* getName() const {
        return name;
    }

    // Геттер для поля "age"
    int getAge() const {
        return age;
    }
};
class Human {
private:
    char* name;
    int age;

public:
    // Конструктор переміщення
    Human(Human&& other) {
        name = other.name;
        age = other.age;

        other.name = nullptr;
        other.age = 0;
    }

    // Конструктор за замовчуванням
    Human() : name(nullptr), age(0) {}

    // Деструктор
    ~Human() {
        delete[] name;
    }

    // Методи доступу до полів класу
    const char* getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void setName(const char* newName) {
        delete[] name;
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    void setAge(int newAge) {
        age = newAge;
    }
};
class Apartment {
private:
    int number;
    int floor;
    Human* owner;

public:
    // Конструктор переміщення
    Apartment(Apartment&& other) {
        number = other.number;
        floor = other.floor;
        owner = other.owner;

        other.number = 0;
        other.floor = 0;
        other.owner = nullptr;
    }

    // Конструктор за замовчуванням
    Apartment() : number(0), floor(0), owner(nullptr) {}

    // Деструктор
    ~Apartment() {
        delete owner;
    }

    // Методи доступу до полів класу
    int getNumber() const {
        return number;
    }

    int getFloor() const {
        return floor;
    }

    Human* getOwner() const {
        return owner;
    }

    void setNumber(int newNumber) {
        number = newNumber;
    }

    void setFloor(int newFloor) {
        floor = newFloor;
    }

    void setOwner(Human* newOwner) {
        delete owner;
        owner = newOwner;
    }
};
class House {
private:
    int address;
    Apartment* apartments;
    int apartmentCount;

public:
    // Конструктор переміщення
    House(House&& other) {
        address = other.address;
        apartments = other.apartments;
        apartmentCount = other.apartmentCount;

        other.address = 0;
        other.apartments = nullptr;
        other.apartmentCount = 0;
    }

    // Конструктор за замовчуванням
    House() : address(0), apartments(nullptr), apartmentCount(0) {}

    // Деструктор
    ~House() {
        delete[] apartments;
    }

    // Методи доступу до полів класу
    int getAddress() const {
        return address;
    }

    Apartment* getApartments() const {
        return apartments;
    }

    int getApartmentCount() const {
        return apartmentCount;
    }

    void setAddress(int newAddress) {
        address = newAddress;
    }
    void setApartments(Apartment* newApartments, int count) {
        // Deallocate the old apartments array
       

        // Allocate a new apartments array
        apartments = new Apartment[count];
        apartmentCount = count;

        // Copy the new apartments into the new array
        for (int i = 0; i < count; i++) {
            apartments[i] = newApartments[i];
        }
    }
    // Додавання квартири до будинку
    void addApartment(const Apartment& apartment) {

        Apartment* newApartments = new Apartment[apartmentCount + 1];

        for (int i = 0; i < apartmentCount; i++) {
            newApartments[i] = move(apartments[i]);
        }
        newApartments[apartmentCount] = apartment;


        apartments = newApartments;
        apartmentCount++;
    }
};
