#include <iostream>

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& d) : data(d), next(nullptr) {}
    };
    Node* top_;
    size_t size_;
    size_t capacity_;
    void resize() {
        capacity_ *= 2;
        Node** temp = new Node * [capacity_];
        Node* current = top_;
        for (size_t i = 0; i < size_; ++i) {
            temp[i] = current;
            current = current->next;
        }
        delete[] top_;
        top_ = temp[0];
        for (size_t i = 0; i < size_ - 1; ++i) {
            temp[i]->next = temp[i + 1];
        }
        temp[size_ - 1]->next = nullptr;
        delete[] temp;
    }
public:
    Stack() : top_(nullptr), size_(0), capacity_(1) {}
    ~Stack() {
        Node* current = top_;
        while (current) {
            Node* temp = current->next;
            delete current;
            current = temp;
        }
    }
    bool empty() const {
        return size_ == 0;
    }
    size_t size() const {
        return size_;
    }
    T& top() const {
        if (empty()) {
            throw std::out_of_range("stack is empty");
        }
        return top_->data;
    }
    void push(const T& value) {
        if (size_ == capacity_) {
            resize();
        }
        Node* node = new Node(value);
        node->next = top_;
        top_ = node;
        ++size_;
    }
    void pop() {
        if (empty()) {
            throw std::out_of_range("stack is empty");
        }
        Node* temp = top_;
        top_ = top_->next;
        delete temp;
        --size_;
    }
};
#include <iostream>

using namespace std;

template<typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;

        Node(T data, Node* next = nullptr) {
            this->data = data;
            this->next = next;
        }
    };

    Node* head;
    int size;

public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        size = 0;
    }

    void push_front(T data) {
        head = new Node(data, head);
        size++;
    }

    void print() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    LinkedList<T>* clone() const {
        LinkedList<T>* clonedList = new LinkedList<T>();
        Node* current = head;
        while (current != nullptr) {
            clonedList->push_front(current->data);
            current = current->next;
        }
        return clonedList;
    }

    LinkedList<T>* operator+(const LinkedList<T>& other) const {
        LinkedList<T>* newList = new LinkedList<T>();
        Node* current = head;
        while (current != nullptr) {
            newList->push_front(current->data);
            current = current->next;
        }
        current = other.head;
        while (current != nullptr) {
            newList->push_front(current->data);
            current = current->next;
        }
        return newList;
    }

    LinkedList<T>* operator*(const LinkedList<T>& other) const {
        LinkedList<T>* newList = new LinkedList<T>();
        Node* current = head;
        while (current != nullptr) {
            Node* otherCurrent = other.head;
            while (otherCurrent != nullptr) {
                if (current->data == otherCurrent->data) {
                    newList->push_front(current->data);
                    break;
                }
                otherCurrent = otherCurrent->next;
            }
            current = current->next;
        }
        return newList;
    }
};
