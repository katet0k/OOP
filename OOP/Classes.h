#include"library.h"

class Person {
private:
    string surname = "Костюченко Катерина Вадимівна";
    string date_of_birth = "08.06.2000";
    string contact_phone = "097 368 02 37";
    string city = "Вінниця";
    string country = "Україна";
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

    Person() {
        set_surname(surname);
        set_date_of_birth(date_of_birth);
        set_contact_phone(contact_phone);
        set_city(city);
        set_country(country);
    }

    Person(string surname, string date_of_birth, string contact_phone, string city, string country) {
        set_surname(surname);
        set_date_of_birth(date_of_birth);
        set_contact_phone(contact_phone);
        set_city(city);
        set_country(country);
    }
};
class Apartment {
private:
    Person* person;
    int k;
public:
    void set_k(int k) {
            this->k = k;
    }
    int get_k() {
            return k; 
    }

    Apartment() {
        set_k(k);
    }
    Apartment(int k) {
        set_k(k);
    }

};
class House {
private:
    Apartment* apartment;

public:

};
