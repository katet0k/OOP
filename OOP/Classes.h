
class Overcoat {
private:
    string type_;
    double price_;
public:
    Overcoat(const string& type = "", double price = 0)
        : type_(type), price_(price) {}

    string getType() const { return type_; }
    void setType(const string& type) { type_ = type; }

    double getPrice() const { return price_; }
    void setPrice(double price) { price_ = price; }

    bool operator==(const Overcoat& other) const {
        return type_ == other.type_;
    }

    Overcoat& operator=(const Overcoat& other) {
        type_ = other.type_;
        price_ = other.price_;
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        if (type_ != other.type_) {
            std::cerr << "Error: cannot compare prices of different types of overcoats.\n";
            return false;
        }
        return price_ > other.price_;
    }

};

class Flat {
private:
    double area_;
    double price_;
public:
    Flat(double area = 0, double price = 0)
        : area_(area), price_(price) {}

    double getArea() const { return area_; }
    void setArea(double area) { area_ = area; }

    double getPrice() const { return price_; }
    void setPrice(double price) { price_ = price; }

    bool operator==(const Flat& other) const {
        return area_ == other.area_;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area_ = other.area_;
            price_ = other.price_;
        }
        return *this;
    }

    bool operator>(const Flat& other) const {
        return price_ > other.price_;
    }

    friend std::ostream& operator<<(std::ostream& os, const Flat& flat) {
        os << "Area: " << flat.area_ << " square meters, Price: " << flat.price_ << " dollars";
        return os;
    }

};

