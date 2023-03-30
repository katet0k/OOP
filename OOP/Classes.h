#include"Library.h"

class Book {
public:
    explicit Book(const std::string& author, const std::string& title,
        const std::string& publisher, int year, int pages, int quantity)
        : author_(author), title_(title), publisher_(publisher),
        year_(year), pages_(pages), quantity_(quantity) {}

    const std::string& author() const { return author_; }
    const std::string& title() const { return title_; }
    const std::string& publisher() const { return publisher_; }
    int year() const { return year_; }
    int pages() const { return pages_; }
    int quantity() const { return quantity_; }

private:
    std::string author_;
    std::string title_;
    std::string publisher_;
    int year_;
    int pages_;
    int quantity_;
};
class Worker {
public:
    explicit Worker(const std::string& name, const std::string& position, int startYear, int salary)
        : name_(name), position_(position), startYear_(startYear), salary_(salary) {}

    const std::string& getName() const { return name_; }
    const std::string& getPosition() const { return position_; }
    int getStartYear() const { return startYear_; }
    int getSalary() const { return salary_; }

private:
    std::string name_;
    std::string position_;
    int startYear_;
    int salary_;
};
class Reservoir {
public:
    explicit Reservoir(const std::string& name = "", double length = 0, double width = 0, double maxDepth = 0)
        : name_(name), length_(length), width_(width), maxDepth_(maxDepth) {}

    Reservoir(const Reservoir& other) : name_(other.name_), length_(other.length_), width_(other.width_), maxDepth_(other.maxDepth_) {}

    ~Reservoir() {}

    double approximateVolume() const { return length_ * width_ * maxDepth_; }

    double waterSurfaceArea() const { return length_ * width_; }

    bool sameType(const Reservoir& other) const {
        if (this->isSea() && other.isSea()) {
            return true;
        }
        else if (this->isLake() && other.isLake()) {
            return true;
        }
        else if (this->isPond() && other.isPond()) {
            return true;
        }
        return false;
    }

    bool operator<(const Reservoir& other) const {
        return this->waterSurfaceArea() < other.waterSurfaceArea();
    }

    Reservoir& operator=(const Reservoir& other) {
        if (this != &other) {
            name_ = other.name_;
            length_ = other.length_;
            width_ = other.width_;
            maxDepth_ = other.maxDepth_;
        }
        return *this;
    }

    const std::string& getName() const { return name_; }
    void setName(const std::string& name) { name_ = name; }

    double getLength() const { return length_; }
    void setLength(double length) { length_ = length; }

    double getWidth() const { return width_; }
    void setWidth(double width) { width_ = width; }

    double getMaxDepth() const { return maxDepth_; }
    void setMaxDepth(double maxDepth) { maxDepth_ = maxDepth; }

    bool isSea() const { return maxDepth_ >= 200; }
    bool isLake() const { return maxDepth_ >= 6 && maxDepth_ < 200; }
    bool isPond() const { return maxDepth_ < 6; }

    void display() const {
        std::cout << "Reservoir Name: " << name_ << std::endl;
        std::cout << "Length: " << length_ << " meters" << std::endl;
        std::cout << "Width: " << width_ << " meters" << std::endl;
        std::cout << "Max Depth: " << maxDepth_ << " meters" << std::endl;
        std::cout << "Approximate Volume: " << approximateVolume() << " cubic meters" << std::endl;
        std::cout << "Water Surface Area: " << waterSurfaceArea() << " square meters" << std::endl;
        std::cout << std::endl;
    }

private:
    std::string name_;
    double length_;
    double width_;
    double maxDepth_;
};