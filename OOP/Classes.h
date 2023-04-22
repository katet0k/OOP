#include"Library.h"

class Array {
private:
    int* data;
    int size;
public:
    Array(int s) : size(s), data(new int[s]) {}
    ~Array() { delete[] data; }

    int& operator[](int i) { return data[i]; }
    const int& operator[](int i) const { return data[i]; }

    void operator()(int x) {
        for (int i = 0; i < size; i++) {
            data[i] += x;
        }
    }

    operator int() const {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return sum;
    }

    operator char* () const {
        std::ostringstream oss;
        for (int i = 0; i < size; i++) {
            oss << data[i];
        }
        string str = oss.str();
        char* cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        return cstr;
    }
};

class var {
private:
    int m_int; // The integer value of the variable
    double m_double; // The double value of the variable
    string m_string; // The string value of the variable
public:
    // Enumeration type for identifying the type of the variable
    enum Type { UNDEFINED, INT, DOUBLE, STRING };

    // Default constructor creates an undefined variable
    var() : m_type(UNDEFINED) {}

    // Constructors for the different types of variables
    var(int value) : m_type(INT), m_int(value) {}
    var(double value) : m_type(DOUBLE), m_double(value) {}
    var(const string& value) : m_type(STRING), m_string(value) {}

    // Copy constructor for creating a new variable from an existing one
    var(const var& other) : m_type(other.m_type) {
        switch (m_type) {
        case INT:
            m_int = other.m_int;
            break;
        case DOUBLE:
            m_double = other.m_double;
            break;
        case STRING:
            m_string = other.m_string;
            break;
        default:
            break;
        }
    }

    // Assignment operator for assigning one variable to another
    var& operator=(const var& other) {
        m_type = other.m_type;
        switch (m_type) {
        case INT:
            m_int = other.m_int;
            break;
        case DOUBLE:
            m_double = other.m_double;
            break;
        case STRING:
            m_string = other.m_string;
            break;
        default:
            break;
        }
        return *this;
    }

    // Method for getting the type of the variable
    Type getType() const {
        return m_type;
    }

    // Methods for getting the value of the variable
    int getInt() const {
        if (m_type == INT) {
            return m_int;
        }
        else {
            throw runtime_error("Variable is not of type int");
        }
    }

    double getDouble() const {
        if (m_type == DOUBLE) {
            return m_double;
        }
        else {
            throw runtime_error("Variable is not of type double");
        }
    }

    string getString() const {
        if (m_type == STRING) {
            return m_string;
        }
        else {
            throw runtime_error("Variable is not of type string");
        }
    }
    Type m_type; // The type of the variable
};
