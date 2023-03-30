#include"menu.h"
#include"Classes.h"

int main() {
    // ��������� ��'��� ����� Reservoir
    Reservoir r1("Lake One", 1000, 2000, 10);
    // �������� ���������� ��� ��'���
    cout << "Name: " << r1.getName() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Depth: " << r1.getDepth() << endl;
    cout << "Volume: " << r1.getVolume() << endl;
    cout << "Surface area: " << r1.getSurfaceArea() << endl;

    // ��������� ��'��� � ����� � �� � ����� ��'�����
    cout << "Same type: " << r1.sameType(r1) << endl;
    Reservoir r2("Lake Two", 500, 500, 10);
    cout << "Same type: " << r1.sameType(r2) << endl;

    // �������� ��'��� � ��������� ����
    ofstream fout("reservoir.txt");
    r1.saveToTextFile(fout);
    fout.close();

    // ������� ��'��� � ���������� �����
    ifstream fin("reservoir.txt");
    Reservoir r3;
    r3.loadFromTextFile(fin);
    fin.close();
    cout << "Name: " << r3.getName() << endl;
    cout << "Width: " << r3.getWidth() << endl;
    cout << "Length: " << r3.getLength() << endl;
    cout << "Depth: " << r3.getDepth() << endl;

    // �������� ��'��� � ������� ����
    ofstream fbout("reservoir.bin", ios::binary);
    r1.saveToBinaryFile(fbout);
    fbout.close();

    // ������� ��'��� � �������� �����
    ifstream fbin("reservoir.bin", ios::binary);
    Reservoir r4;
    r4.loadFromBinaryFile(fbin);
    fbin.close();
    cout << "Width: " << r4.getWidth() << endl;
    cout << "Length: " << r4.getLength() << endl;
    cout << "Depth: " << r4.getDepth() << endl;

    return 0;
}