
class Student {
private:
    char* name;
    int age;

public:
    // ����������� �� �������������
    Student() : name(nullptr), age(0) {}

    // ����������� � �����������
    Student(const char* name, int age) : age(age) {
        int nameLength = strlen(name) + 1;
        this->name = new char[nameLength];
        strcpy(this->name, name);
    }

    // ����������� ���������
    Student(const Student& other) : age(other.age) {
        int nameLength = strlen(other.name) + 1;
        name = new char[nameLength];
        strcpy(name, other.name);
    }

    // ����������� ����������
    Student(Student&& other) noexcept : name(other.name), age(other.age) {
        other.name = nullptr;
        other.age = 0;
    }

    // ����������
    ~Student() {
        delete[] name;
    }

    // �������� ��������� ���������
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

    // �������� ��������� ����������
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

    // ������ ��� ���� "name"
    const char* getName() const {
        return name;
    }

    // ������ ��� ���� "age"
    int getAge() const {
        return age;
    }
};

class Building {
public:
    // ����������� ����������
    Building(Building&& other) {
        // ��������� ���� ���� � ��'���� other � �������� ��'���
        // ϳ��� �����, ��'��� other ���� ��������
        m_address = other.m_address;
        m_number_of_floors = other.m_number_of_floors;
        other.m_address = nullptr;
        other.m_number_of_floors = 0;
    }

    // ����������� �� �������������
    Building() {
        m_address = nullptr;
        m_number_of_floors = 0;
    }

    // ����������
    ~Building() {
        delete[] m_address;
    }

private:
    char* m_address; // ������ �������
    int m_number_of_floors; // ʳ������ ��������
};

class Apartment {
private:
    int m_number; // ����� ��������
    int m_number_of_rooms; // ʳ������ �����
public:
    // ����������� ����������
    Apartment(Apartment&& other) {
        // ��������� ���� ���� � ��'���� other � �������� ��'���
        // ϳ��� �����, ��'��� other ���� ��������
        m_number = other.m_number;
        m_number_of_rooms = other.m_number_of_rooms;
        other.m_number = 0;
        other.m_number_of_rooms = 0;
    }

    // ����������� �� �������������
    Apartment() {
        m_number = 0;
        m_number_of_rooms = 0;
    }

    // ����������
    ~Apartment() {}

};

class Person {
private:
    char* m_name; // ��'� ������
    int m_age; // ³� ������
public:
    // ����������� ����������
    Person(Person&& other) {
        // ��������� ���� ���� � ��'���� other � �������� ��'���
        // ϳ��� �����, ��'��� other ���� ��������
        m_name = other.m_name;
        m_age = other.m_age;
        other.m_name = nullptr;
        other.m_age = 0;
    }

    // ����������� �� �������������
    Person() {
        m_name = nullptr;
        m_age = 0;
    }

    // ����������
    ~Person() {
        delete[] m_name;
    }

};
