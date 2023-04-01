
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

class Building {
public:
    // Конструктор переміщення
    Building(Building&& other) {
        // Переміщуємо вміст полів з об'єкта other в поточний об'єкт
        // Після цього, об'єкт other буде недійсним
        m_address = other.m_address;
        m_number_of_floors = other.m_number_of_floors;
        other.m_address = nullptr;
        other.m_number_of_floors = 0;
    }

    // Конструктор за замовчуванням
    Building() {
        m_address = nullptr;
        m_number_of_floors = 0;
    }

    // Деструктор
    ~Building() {
        delete[] m_address;
    }

private:
    char* m_address; // Адреса будинку
    int m_number_of_floors; // Кількість поверхів
};

class Apartment {
private:
    int m_number; // Номер квартири
    int m_number_of_rooms; // Кількість кімнат
public:
    // Конструктор переміщення
    Apartment(Apartment&& other) {
        // Переміщуємо вміст полів з об'єкта other в поточний об'єкт
        // Після цього, об'єкт other буде недійсним
        m_number = other.m_number;
        m_number_of_rooms = other.m_number_of_rooms;
        other.m_number = 0;
        other.m_number_of_rooms = 0;
    }

    // Конструктор за замовчуванням
    Apartment() {
        m_number = 0;
        m_number_of_rooms = 0;
    }

    // Деструктор
    ~Apartment() {}

};

class Person {
private:
    char* m_name; // Ім'я людини
    int m_age; // Вік людини
public:
    // Конструктор переміщення
    Person(Person&& other) {
        // Переміщуємо вміст полів з об'єкта other в поточний об'єкт
        // Після цього, об'єкт other буде недійсним
        m_name = other.m_name;
        m_age = other.m_age;
        other.m_name = nullptr;
        other.m_age = 0;
    }

    // Конструктор за замовчуванням
    Person() {
        m_name = nullptr;
        m_age = 0;
    }

    // Деструктор
    ~Person() {
        delete[] m_name;
    }

};
