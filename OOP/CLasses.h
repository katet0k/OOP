template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;

        Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
    };

    Node* frontNode;
    Node* backNode;
    int size;

public:
    Queue() : frontNode(nullptr), backNode(nullptr), size(0) {}

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() const {
        return size == 0;
    }

    int getSize() const {
        return size;
    }

    void enqueue(const T& value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            frontNode = newNode;
            backNode = newNode;
        }
        else {
            newNode->prev = backNode;
            backNode->next = newNode;
            backNode = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        Node* nodeToRemove = frontNode;
        frontNode = frontNode->next;

        if (frontNode != nullptr) {
            frontNode->prev = nullptr;
        }
        else {
            backNode = nullptr;
        }

        delete nodeToRemove;
        size--;
    }

    T& getFront() const {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            throw std::out_of_range("Queue is empty.");
        }

        return frontNode->data;
    }

    T& getBack() const {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            throw std::out_of_range("Queue is empty.");
        }

        return backNode->data;
    }
};

template <typename T>
class DoublyLinkedList {
public:
    struct Node {
        T data;
        Node* prev;
        Node* next;

        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    ~DoublyLinkedList() {
        while (!isEmpty()) {
            removeFront();
        }
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void addToFront(const T& value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void removeFront() {
        if (isEmpty()) {
            std::cout << "List is empty. Cannot remove front." << std::endl;
            return;
        }

        Node* nodeToRemove = head;

        if (head == tail) {
            head = nullptr;
            tail = nullptr;
        }
        else {
            head = head->next;
            head->prev = nullptr;
        }

        delete nodeToRemove;
    }

    Node* clone() const {
        DoublyLinkedList<T> newList;

        Node* currentNode = head;
        while (currentNode != nullptr) {
            newList.addToFront(currentNode->data);
            currentNode = currentNode->next;
        }

        return newList.head;
    }

    Node* operator+(const DoublyLinkedList<T>& otherList) const {
        DoublyLinkedList<T> newList;

        Node* currentNode = head;
        while (currentNode != nullptr) {
            newList.addToFront(currentNode->data);
            currentNode = currentNode->next;
        }

        currentNode = otherList.head;
        while (currentNode != nullptr) {
            newList.addToFront(currentNode->data);
            currentNode = currentNode->next;
        }

        return newList.head;
    }

    Node* operator*(const DoublyLinkedList<T>& otherList) const {
        DoublyLinkedList<T> newList;

        Node* currentNode = head;
        while (currentNode != nullptr) {
            Node* otherNode = otherList.head;
            while (otherNode != nullptr) {
                if (currentNode->data == otherNode->data) {
                    newList.addToFront(currentNode->data);
                    break;
                }
                otherNode = otherNode->next;
            }
            currentNode = currentNode->next;
        }

        return newList.head;
    }
};

