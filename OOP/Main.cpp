#include"menu.h"
#include"Classes.h"

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    // Create some people
    Person* person1 = new Person("John", "Doe", "Smith");
    Person* person2 = new Person("Mary", "Johnson", "Jones");
    Person* person3 = new Person("Bob", "Brown", "Taylor");

    // Create some apartments
    Apartment* apartment1 = new Apartment();
    apartment1->addResident(person1);
    apartment1->addResident(person2);

    Apartment* apartment2 = new Apartment();
    apartment2->addResident(person3);

    // Create a house and add the apartments
    House* house = new House();
    house->addApartment(apartment1);
    house->addApartment(apartment2);

    // Print the number of residents in the house
    cout << "Number of residents in the house: " << house->getNumResidents() << endl;

    // Cleanup
    delete house;
    delete person1;
    delete person2;
    delete person3;

    return 0;
}