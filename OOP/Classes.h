#include"library.h"

class Student {
private:
    string* surname = new string{ "���������� �������� ��������" };
    string date_of_birth = "08.06.2000";
    string contact_phone = "097 368 02 37";
    string city = "³�����";
    string country = "������";
    string name_of_the_institution = "����'������ ������� STEP";
    string city_and_country_institution = "³�����,������";
    string number_groups = "��211";
public:
   
    inline string get_surname() {
        return *surname;
    }
    inline string get_date_of_birth() {
        return date_of_birth;
    }
    inline string get_contact_phone() {
        return contact_phone;
    }
    inline string get_city() {
        return city;
    }
    inline string get_country() {
        return country;
    }
    inline string get_name_of_the_institution() {
        return name_of_the_institution;
    }
    inline string get_city_and_country_institution() {
        return city_and_country_institution;
    }
    inline string get_number_groups() {
        return number_groups;
    }
    Student() {
       
    }
    ~Student() {
        cout << "Resource is acquired" << endl;
    }
};
class Tochka {
private:
    int x, y, z;
public:
    void set_x(int X) {
        cout << " ������ x -- > ";
        cin >> X;
        this->x = X;
    }
    void set_y(int Y) {
        cout << " ������ y -- > ";
        cin >> Y;
        this->y = Y;
    }
    void set_z(int Z) {
        cout << " ������ z -- > ";
        cin >> Z;
        this->z = Z;
    }
    inline int get_x() {
        return x;
    }
    inline int get_y() {
        return y;
    }
    inline int get_z() {
        return z;
    }
    Tochka() {
        set_x(0);
        set_y(0);
        set_z(0);
    }
    Tochka(int X, int Y, int Z) {
        set_x(X);
        set_y(Y);
        set_z(Z);
    }
};
class Drib
{
private:
    double x, y;
public:
    void set_x(double X)
    {
        cout << "������ ����� --> ";
        cin >> X;
        this->x = X;
    }
    void set_y(double Y)
    {
        cout << "������ ����� --> ";
        cin >> Y;
        this->y = Y;
    }
    inline double get_x()
    {
        return x;
    }
    inline double get_y()
    {
        return y;
    }

    inline double get_res1()
    {
        return x + y;
    }
    inline double get_res2()
    {
        return x - y;
    }
    inline double get_res3()
    {
        return x * y;
    }
    inline double get_res4()
    {
        return x / y;
    }
    Drib() {
        set_x(0);
        set_y(0);
    }
    Drib(int X, int Y) {
        set_x(X);
        set_y(Y);
    }
};