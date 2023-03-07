#include"library.h"

class Student {
private:
    string surname = "Костюченко Катерина Вадимівна";
    string date_of_birth = "08.06.2000";
    string contact_phone = "097 368 02 37";
    string city = "Вінниця";
    string country = "Україна";
    string name_of_the_institution = "Комп'ютерна Академія STEP";
    string city_and_country_institution = "Вінниця,Україна";
    string number_groups = "БВ211";
public:
    void set_surname(string s) {
        this->surname = s;
    }
    void set_date_of_birth(string d) {
        this->date_of_birth = d;
    }
    void set_contact_phone(string c) {
        this->contact_phone = c;
    }
    void set_city(string c) {
        this->city = c;
    }
    void set_country(string c) {
        this->country = c;
    }
    void set_name_of_the_institution(string n) {
        this->name_of_the_institution = n;
    }
    void set_city_and_country_institution(string c) {
        this->city_and_country_institution = c;
    }
    void set_number_groups(string n) {
        this->number_groups = n;
    }

    string get_surname() {
        return surname;
    }
    string get_date_of_birth() {
        return date_of_birth;
    }
    string get_contact_phone() {
        return contact_phone;
    }
    string get_city() {
        return city;
    }
    string get_country() {
        return country;
    }
    string get_name_of_the_institution() {
        return name_of_the_institution;
    }
    string get_city_and_country_institution() {
        return city_and_country_institution;
    }
    string get_number_groups() {
        return number_groups;
    }
    Student() {
        set_surname(surname);
        set_date_of_birth(date_of_birth);
        set_contact_phone(contact_phone);
        set_city(city);
        set_country(country);
        set_name_of_the_institution(name_of_the_institution);
        set_city_and_country_institution(city_and_country_institution);
        set_number_groups(number_groups);

    }
};
class Tochka {
private:
    int x, y, z;
public:
    void set_x(int X) {
        cout << " Введіть x -- > ";
        cin >> X;
        this->x = X;
    }
    void set_y(int Y) {
        cout << " Введіть y -- > ";
        cin >> Y;
        this->y = Y;
    }
    void set_z(int Z) {
        cout << " Введіть z -- > ";
        cin >> Z;
        this->z = Z;
    }

    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
    int get_z() {
        return z;
    }
    Tochka() {
        set_x(x);
        set_y(y);
        set_z(z);
    }
};
class Drib
{
private:
    double x, y;
public:
    void set_x(double X)
    {
        cout << "Введіть число --> ";
        cin >> X;
        this->x = X;
    }
    void set_y(double Y)
    {
        cout << "Введіть число --> ";
        cin >> Y;
        this->y = Y;
    }
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }

    double get_res1()
    {
        return x + y;
    }
    double get_res2()
    {
        return x - y;
    }
    double get_res3()
    {
        return x * y;
    }
    double get_res4()
    {
        return x / y;
    }
    Drib() {
        set_x(x);
        set_y(y);
    }
};