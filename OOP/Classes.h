#include"Library.h"

class Reservoir {
private:
    string name;
    float width;
    float length;
    float depth;
public:
    // ������������
    Reservoir() {}
    Reservoir(const string& _name, float _width, float _length, float _depth)
        : name(_name), width(_width), length(_length), depth(_depth) {}
    Reservoir(const Reservoir& other) : name(other.name), width(other.width), length(other.length), depth(other.depth) {}

    // ����������
    ~Reservoir() {}

    // ������ ��� ���������� ������ �� �����
    float getVolume() const { return width * length * depth; }
    float getSurfaceArea() const { return width * length; }

    // ����� ��� ��������� ���� ������
    bool sameType(const Reservoir& other) const {
        // �������, �� ������� ������ ����, ���� ���� ����� �������� �������
        return depth == other.depth;
    }

    // ����� ��� ��������� ����� ������ ���������
    bool operator<(const Reservoir& other) const {
        return getSurfaceArea() < other.getSurfaceArea();
    }

    // ����� ���������
    Reservoir& operator=(const Reservoir& other) {
        if (this == &other) return *this;
        name = other.name;
        width = other.width;
        length = other.length;
        depth = other.depth;
        return *this;
    }

    // ������ set �� get
    void setName(const string& _name) { name = _name; }
    string getName() const { return name; }
    void setWidth(float _width) { width = _width; }
    float getWidth() const { return width; }
    void setLength(float _length) { length = _length; }
    float getLength() const { return length; }
    void setDepth(float _depth) { depth = _depth; }
    float getDepth() const { return depth; }

    // ������� ��� ������ ��'���� � ��������� ����
    void saveToTextFile(ofstream& fout) const {
        fout << name << " " << width << " " << length << " " << depth << endl;
    }

    // ������� ��� ������ ��'���� � ������� ����
    void saveToBinaryFile(ofstream& fout) const {
        fout.write((char*)&width, sizeof(width));
        fout.write((char*)&length, sizeof(length));
        fout.write((char*)&depth, sizeof(depth));
        int nameLength = name.length();
        fout.write((char*)&nameLength, sizeof(nameLength));
        fout.write(name.c_str(), nameLength);
    }

    // ������� ��� ���������� ��'���� � ���������� �����
    void loadFromTextFile(ifstream& fin) {
        fin >> name >> width >> length >> depth;
    }

    // ������� ��� ���������� ��'���� � �������� �����
    void loadFromBinaryFile(ifstream& fin) {
        fin.read((char*)&width, sizeof(width));
        fin.read((char*)&length, sizeof(length));
        fin.read((char*)&depth, sizeof(depth));
        int nameLength;
        fin.read((char*)&nameLength, sizeof(nameLength));
        char* buffer = new char[nameLength + 1];
        fin.read(buffer, nameLength);
        buffer[nameLength] = '\0';
        name = buffer;
        delete[] buffer;
    }
};
