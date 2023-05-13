#include <iostream>

template <typename T>
class SmartUniquePtr {
public:
    explicit SmartUniquePtr(T* ptr = nullptr) : ptr_(ptr) {}
    ~SmartUniquePtr() { delete ptr_; }

    SmartUniquePtr(const SmartUniquePtr&) = delete;
    SmartUniquePtr& operator=(const SmartUniquePtr&) = delete;

    SmartUniquePtr(SmartUniquePtr&& other) noexcept : ptr_(other.ptr_) {
        other.ptr_ = nullptr;
    }

    SmartUniquePtr& operator=(SmartUniquePtr&& other) noexcept {
        if (this != &other) {
            delete ptr_;
            ptr_ = other.ptr_;
            other.ptr_ = nullptr;
        }
        return *this;
    }

    T& operator*() const { return *ptr_; }
    T* operator->() const { return ptr_; }
    T* get() const noexcept { return ptr_; }
    explicit operator bool() const noexcept { return ptr_ != nullptr; }

private:
    T* ptr_;
};

template <typename T>
class SmartSharedPtr {
public:
    explicit SmartSharedPtr(T* ptr = nullptr) : ptr_(ptr), ref_count_(new size_t(1)) {}
    ~SmartSharedPtr() {
        if (--(*ref_count_) == 0) {
            delete ref_count_;
            delete ptr_;
        }
    }

    SmartSharedPtr(const SmartSharedPtr& other) : ptr_(other.ptr_), ref_count_(other.ref_count_) {
        ++(*ref_count_);
    }

    SmartSharedPtr& operator=(const SmartSharedPtr& other) {
        if (this != &other) {
            if (--(*ref_count_) == 0) {
                delete ref_count_;
                delete ptr_;
            }
            ptr_ = other.ptr_;
            ref_count_ = other.ref_count_;
            ++(*ref_count_);
        }
        return *this;
    }

    SmartSharedPtr(SmartSharedPtr&& other) noexcept : ptr_(other.ptr_), ref_count_(other.ref_count_) {
        other.ptr_ = nullptr;
        other.ref_count_ = nullptr;
    }

    SmartSharedPtr& operator=(SmartSharedPtr&& other) noexcept {
        if (this != &other) {
            if (--(*ref_count_) == 0) {
                delete ref_count_;
                delete ptr_;
            }
            ptr_ = other.ptr_;
            ref_count_ = other.ref_count_;
            other.ptr_ = nullptr;
            other.ref_count_ = nullptr;

        }
        return *this;
    }

    T& operator*() const { return *ptr_; }
    T* operator->() const { return ptr_; }
    T* get() const noexcept { return ptr_; }
    size_t use_count() const noexcept { return ref_count_ ? *ref_count_ : 0; }
    explicit operator bool() const noexcept { return ptr_ != nullptr; }
private:
    T* ptr_;
    size_t* ref_count_;
};

class MyClass {
public:
    MyClass() { std::cout << "MyClass constructed" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructed" << std::endl; }
    void doSomething() { std::cout << "Doing something" << std::endl; }
};

void testSmartUniquePtr() {
    std::cout << "--- Testing SmartUniquePtr ---" << std::endl;
    {
        SmartUniquePtr<MyClass> ptr(new MyClass());
        ptr->doSomething();
        (*ptr).doSomething();
    }
    std::cout << "--- End of SmartUniquePtr test ---" << std::endl;
}

void testSmartSharedPtr() {
    std::cout << "--- Testing SmartSharedPtr ---" << std::endl;
    {
        SmartSharedPtr<MyClass> ptr1(new MyClass());
        {
            SmartSharedPtr<MyClass> ptr2(ptr1);
            std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl;
            std::cout << "ptr2 use count: " << ptr2.use_count() << std::endl;
        }
        std::cout << "ptr1 use count after ptr2 destruction: " << ptr1.use_count() << std::endl;
    }
    std::cout << "--- End of SmartSharedPtr test ---" << std::endl;
}
