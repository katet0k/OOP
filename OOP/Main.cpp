#include"menu.h"

class Phone {};
class Computer {};
class Toy {};
class Flower {};

int main() {
    map<string, type_index> class_map;

    class_map.emplace("Phone", typeid(Phone));
    class_map.emplace("Computer", typeid(Computer));
    class_map.emplace("Toy", typeid(Toy));
    class_map.emplace("Flower", typeid(Flower));

    // Example usage:
    cout << "The type of Phone is " << class_map["Phone"].name() << endl;

    return 0;
}