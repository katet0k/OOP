#include "Library.h"
class CharStack {
private:
    char* data; // масив для зберігання символів
    int size;   // розмір стеку
    int top;    // індекс верхнього елементу стеку
public:
    CharStack(int s) {
        size = s;
        data = new char[size];
        top = -1;
    }
    ~CharStack() {
        delete[] data;
    }
    void push(char c) {
        if (isFull()) {
            cout << "Stack is full" << endl;
            return;
        }
        data[++top] = c;
    }
    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        return data[top--];
    }
    int count() {
        return top + 1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == size - 1;
    }
    void clear() {
        top = -1;
    }
    char peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        return data[top];
    }
};

class DynamicStack {
private:
    char* items;
    int top;
    int capacity;

public:
    DynamicStack(int capacity) {
        this->capacity = capacity;
        items = new char[capacity];
        top = -1;
    }

    ~DynamicStack() {
        delete[] items;
    }

    void push(char item) {
        if (isFull()) {
            int newCapacity = capacity * 2;
            char* newItems = new char[newCapacity];
            memset(newItems, 0, newCapacity * sizeof(char)); // ініціалізуємо новий масив нулями
            for (int i = 0; i <= top; i++) {
                newItems[i] = items[i];
            }
            delete[] items;
            items = newItems;
            capacity = newCapacity;
        }
        top++;
        items[top] = item;
    }

    char pop() {
        if (isEmpty()) {
            throw "Stack is empty";
        }
        char item = items[top];
        top--;
        return item;
    }

    char peek() {
        if (isEmpty()) {
            throw "Stack is empty";
        }
        return items[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    int count() {
        return top + 1;
    }

    void clear() {
        top = -1;
    }
};

