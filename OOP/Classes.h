#include "Library.h"

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2021) {
        day = d;
        month = m;
        year = y;
    }

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    int daysBetween(const Date& d) const {
        int days = 0;
        int day1 = day, day2 = d.day;
        int month1 = month, month2 = d.month;
        int year1 = year, year2 = d.year;

        if (day2 < day1) {
            day2 += daysInMonth(month2, year2);
            month2--;
        }

        if (month2 < month1) {
            month2 += 12;
            year2--;
        }

        days = day2 - day1;
        days += (month2 - month1) * daysInMonth(month1, year1);
        days += (year2 - year1) * 365;

        return days;
    }

    Date operator+(int days) const {
        Date result = *this;

        if (days < 0) {
            return result - (-days);
        }

        result.day += days;

        while (result.day > daysInMonth(result.month, result.year)) {
            result.day -= daysInMonth(result.month, result.year);
            result.month++;

            if (result.month > 12) {
                result.month = 1;
                result.year++;
            }
        }

        return result;
    }

    Date operator-(int days) const {
        Date result = *this;

        if (days < 0) {
            return result + (-days);
        }

        result.day -= days;

        while (result.day < 1) {
            result.month--;

            if (result.month < 1) {
                result.month = 12;
                result.year--;
            }

            result.day += daysInMonth(result.month, result.year);
        }

        return result;
    }

    friend int operator-(const Date& d1, const Date& d2) {
        return abs(d1.daysBetween(d2));
    }

private:
    int daysInMonth(int month, int year) const {
        switch (month) {
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                return 29;
            }
            else {
                return 28;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;

        default:
            return 31;
            break;
        }
    }
};
class String {
private:
    char* str;
    int len;

public:
    String(const char* s = "") {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    String(const String& s) {
        len = s.len;
        str = new char[len + 1];
        std::strcpy(str, s.str);
    }

    ~String() {
        delete[] str;
    }

    void display() const {
        cout << str << endl;
    }

    String operator*(const String& s) const {
        int newLen = 0;
        char* newStr;

        for (int i = 0; i < len; i++) {
            for (int j = 0; j < s.len; j++) {
                if (str[i] == s.str[j]) {
                    newLen++;
                }
            }
        }

        newStr = new char[newLen + 1];

        int k = 0;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < s.len; j++) {
                if (str[i] == s.str[j]) {
                    newStr[k++] = str[i];
                }
            }
        }

        newStr[k] = '\0';

        String result(newStr);
        delete[] newStr;

        return result;
    }
};