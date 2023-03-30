#include"menu.h"
#include"Classes.h"

int main() {
    // створюємо об'єкт класу Reservoir
    Reservoir r1("Lake One", 1000, 2000, 10);
    // виводимо інформацію про об'єкт
    cout << "Name: " << r1.getName() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Depth: " << r1.getDepth() << endl;
    cout << "Volume: " << r1.getVolume() << endl;
    cout << "Surface area: " << r1.getSurfaceArea() << endl;

    // порівнюємо об'єкт з собою ж та з іншим об'єктом
    cout << "Same type: " << r1.sameType(r1) << endl;
    Reservoir r2("Lake Two", 500, 500, 10);
    cout << "Same type: " << r1.sameType(r2) << endl;

    // записуємо об'єкт у текстовий файл
    ofstream fout("reservoir.txt");
    r1.saveToTextFile(fout);
    fout.close();

    // зчитуємо об'єкт з текстового файлу
    ifstream fin("reservoir.txt");
    Reservoir r3;
    r3.loadFromTextFile(fin);
    fin.close();
    cout << "Name: " << r3.getName() << endl;
    cout << "Width: " << r3.getWidth() << endl;
    cout << "Length: " << r3.getLength() << endl;
    cout << "Depth: " << r3.getDepth() << endl;

    // записуємо об'єкт у бінарний файл
    ofstream fbout("reservoir.bin", ios::binary);
    r1.saveToBinaryFile(fbout);
    fbout.close();

    // зчитуємо об'єкт з бінарного файлу
    ifstream fbin("reservoir.bin", ios::binary);
    Reservoir r4;
    r4.loadFromBinaryFile(fbin);
    fbin.close();
    cout << "Width: " << r4.getWidth() << endl;
    cout << "Length: " << r4.getLength() << endl;
    cout << "Depth: " << r4.getDepth() << endl;

    return 0;
}