#include "Library.h"

class Person {
private:
     string name;
     string surname;
     string patronymic;
public:
    Person(const string& name, const string& surname, const string& patronymic)
        : name(name), surname(surname), patronymic(patronymic) {}
    Person(const Person& person)
        : name(person.name), surname(person.surname), patronymic(person.patronymic) {}
    ~Person() {}
    string getFullName() const { return surname + " " + name + " " + patronymic; }
};

class Apartment {
private:
    vector<Person*> residents;
public:
    Apartment() {}
    Apartment(const Apartment& apartment) : residents(apartment.residents.size()) {
        for (size_t i = 0; i < apartment.residents.size(); ++i) {
            residents[i] = new Person(*apartment.residents[i]);
        }
    }
    ~Apartment() {
        for (auto& person : residents) {
            delete person;
        }
    }
    void addResident(Person* person) { residents.push_back(person); }
    size_t getNumResidents() const { return residents.size(); }
};

class House {
private:
    vector<Apartment*> apartments;
public:
    House() {}
    House(const House& house) : apartments(house.apartments.size()) {
        for (size_t i = 0; i < house.apartments.size(); ++i) {
            apartments[i] = new Apartment(*house.apartments[i]);
        }
    }
    ~House() {
        for (auto& apartment : apartments) {
            delete apartment;
        }
    }
    void addApartment(Apartment* apartment) { apartments.push_back(apartment); }
    size_t getNumApartments() const { return apartments.size(); }
    size_t getNumResidents() const {
        size_t numResidents = 0;
        for (auto& apartment : apartments) {
            numResidents += apartment->getNumResidents();
        }
        return numResidents;
    }
};

