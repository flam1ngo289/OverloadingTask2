#include <iostream>

class Fraction {
public:
    int numerator_;
    int denominator_;

    Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {}

    Fraction operator+(const Fraction& other) {
        int newNumerator = numerator_ * other.denominator_ + other.numerator_ * denominator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-(const Fraction& other) {
        int newNumerator = numerator_ * other.denominator_ - other.numerator_ * denominator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator*(const Fraction& other) {
        int newNumerator = numerator_ * other.numerator_;
        int newDenominator = denominator_ * other.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator/(const Fraction& other) {
        int newNumerator = numerator_ * other.denominator_;
        int newDenominator = denominator_ * other.numerator_;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-() {
        return Fraction(-numerator_, denominator_);
    }

    Fraction operator++() {
        numerator_ += denominator_;
        return *this;
    }

    Fraction operator++(int) {
        Fraction temp = *this;
        numerator_ += denominator_;
        return temp;
    }

    Fraction operator--() {
        numerator_ -= denominator_;
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp = *this;
        numerator_ -= denominator_;
        return temp;
    }

    void Print() {
        std::cout << numerator_ << "/" << denominator_ << std::endl;
    }
};

int main() {
    int num1, den1, num2, den2;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num1;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> den1;
    
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num2;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> den2;
    
    Fraction f1(num1, den1);
    Fraction f2(num2, den2);
    
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction mult = f1 * f2;
    Fraction div = f1 / f2;
    
    std::cout << f1.numerator_ << "/" << f1.denominator_ << " + " << f2.numerator_ << "/" << f2.denominator_
    << " = ";
    sum.Print();
    
    std::cout << f1.numerator_ << "/" << f1.denominator_ << " - " << f2.numerator_ << "/" << f2.denominator_
    << " = ";
    diff.Print();
    
    std::cout << f1.numerator_ << "/" << f1.denominator_ << " * " << f2.numerator_ << "/" << f2.denominator_
    << " = ";
    mult.Print();
    
    std::cout << f1.numerator_ << "/" << f1.denominator_ << " / " << f2.numerator_ << "/" << f2.denominator_
    << " = ";
    div.Print();
    
    std::cout << "++" << f1.numerator_ << "/" << f1.denominator_ << " = ";
    (++f1).Print();
    
    std::cout << f1.numerator_ << "/" << f1.denominator_ << "-- * " << f2.numerator_ << "/" << f2.denominator_
                  << " = ";
        (f1-- * f2).Print();

        std::cout << "Значение дроби 1 = ";
        f1.Print();

        return 0;
    }


