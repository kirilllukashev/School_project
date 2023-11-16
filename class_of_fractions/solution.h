#pragma once
#include <exception>
#include <algorithm>
#include <iostream>

int gcd(int first_number, int second_number) {
    first_number = abs(first_number);
    second_number = abs(second_number);
    while (first_number != 0 && second_number != 0) {
        std::swap(first_number, second_number);
        first_number %= second_number;
    }
    return (first_number + second_number);
}

class Fraction {
 public:
    Fraction() : num_(0), den_(1) {}
    Fraction(int num, int den) {
        if (den == 0) {
            throw std::runtime_error("Check failed");
        }
        int gcd_val = gcd(num, den);
        num_ = num / gcd_val;
        den_ = den / gcd_val;
    }
    explicit Fraction(int num) : num_(num), den_(1) {}
    Fraction(const Fraction& other);
    ~Fraction() {}

    int num() const { return num_; }
    int den() const { return den_; }

    Fraction operator+() {
        return *this;
    }

    Fraction operator-() {
        return Fraction(-num_, den_);
    }

    Fraction operator++() {
        num_ += den_;
        return *this;
    }

    Fraction operator++(int) {
        Fraction oldFraction(num_, den_);
        num_ += den_;
        return oldFraction;
    }

    Fraction operator--() {
        num_ -= den_;
        return *this;
    }

    Fraction operator--(int) {
        Fraction oldFraction(num_, den_);
        num_ -= den_;
        return oldFraction;
    }

    Fraction operator=(const Fraction& rhs) {
        if (this == &rhs) {
            return *this;
        }
        num_ = rhs.num_;
        den_ = rhs.den_;
        return *this;
    }

    Fraction operator=(const int& rhs) {
        num_ = rhs;
        den_ = 1;
        return *this;
    }

    Fraction operator+=(const Fraction& rhs) {
        int qf = num_ * rhs.den_;
        int qs = rhs.num_ * den_;
        int com_num = qf + qs;
        int com_den = den_ * rhs.den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator-=(const Fraction& rhs) {
        int qf = num_ * rhs.den_;
        int qs = rhs.num_ * den_;
        int com_num = qf - qs;
        int com_den = den_ * rhs.den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator*=(const Fraction& rhs) {
        int com_num = num_ * rhs.num_;
        int com_den = den_ * rhs.den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator/=(const Fraction& rhs) {
        int com_num = num_ * rhs.den_;
        int com_den = den_ * rhs.num_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator+=(const int& rhs) {
        int qf = num_;
        int qs = rhs * den_;
        int com_num = qf + qs;
        int com_den = den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator-=(const int& rhs) {
        int qf = num_;
        int qs = rhs * den_;
        int com_num = qf - qs;
        int com_den = den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator*=(const int& rhs) {
        int com_num = num_ * rhs;
        int com_den = den_;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    Fraction operator/=(const int& rhs) {
        int com_num = num_;
        int com_den = den_ * rhs;
        int gcd_val = gcd(com_num, com_den);
        com_num /= gcd_val;
        com_den /= gcd_val;
        num_ = com_num;
        den_ = com_den;
        return *this;
    }

    friend bool operator<(Fraction lhs, Fraction rhs);
    friend bool operator<=(Fraction lhs, Fraction rhs);
    friend bool operator>(Fraction lhs, Fraction rhs);
    friend bool operator>=(Fraction lhs, Fraction rhs);
    friend bool operator==(Fraction lhs, Fraction rhs);
    friend bool operator!=(Fraction lhs, Fraction rhs);

    friend bool operator<(Fraction lhs, int rhs);
    friend bool operator<=(Fraction lhs, int rhs);
    friend bool operator>(Fraction lhs, int rhs);
    friend bool operator>=(Fraction lhs, int rhs);
    friend bool operator==(Fraction lhs, int rhs);
    friend bool operator!=(Fraction lhs, int rhs);

    friend bool operator<(int lhs, Fraction rhs);
    friend bool operator<=(int lhs, Fraction rhs);
    friend bool operator>(int lhs, Fraction rhs);
    friend bool operator>=(int lhs, Fraction rhs);
    friend bool operator==(int lhs, Fraction rhs);
    friend bool operator!=(int lhs, Fraction rhs);

    friend Fraction operator+(Fraction lhs, Fraction rhs);
    friend Fraction operator-(Fraction lhs, Fraction rhs);
    friend Fraction operator*(Fraction lhs, Fraction rhs);
    friend Fraction operator/(Fraction lhs, Fraction rhs);

    friend Fraction operator+(Fraction lhs, int rhs);
    friend Fraction operator-(Fraction lhs, int rhs);
    friend Fraction operator*(Fraction lhs, int rhs);
    friend Fraction operator/(Fraction lhs, int rhs);

    friend Fraction operator+(int lhs, Fraction rhs);
    friend Fraction operator-(int lhs, Fraction rhs);
    friend Fraction operator*(int lhs, Fraction rhs);
    friend Fraction operator/(int lhs, Fraction rhs);

    friend std::ostream& operator<<(std::ostream& out, const Fraction& fract);

 private:
    int num_, den_;
};

Fraction::Fraction(const Fraction &other) {
    num_ = other.num_;
    den_ = other.den_;
}

std::ostream& operator<<(std::ostream& out, const Fraction& fract) {
    return out << fract.num_ << '/' << fract.den_;
}

bool operator<(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf < qs;
}

bool operator<=(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf <= qs;
}

bool operator>(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf > qs;
}

bool operator>=(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf >= qs;
}

bool operator==(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf == qs;
}

bool operator!=(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    return qf != qs;
}

bool operator<(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf < qs;
}

bool operator<=(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf <= qs;
}

bool operator>(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf > qs;
}

bool operator>=(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf >= qs;
}

bool operator==(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf == qs;
}

bool operator!=(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    return qf != qs;
}

bool operator<(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf < qs;
}

bool operator<=(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf <= qs;
}

bool operator>(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf > qs;
}

bool operator>=(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf >= qs;
}

bool operator==(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf == qs;
}

bool operator!=(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    return qf != qs;
}

Fraction operator+(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    int com_num = qf + qs;
    int com_den = lhs.den_ * rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator-(Fraction lhs, Fraction rhs) {
    int qf = lhs.num_ * rhs.den_;
    int qs = rhs.num_ * lhs.den_;
    int com_num = qf - qs;
    int com_den = lhs.den_ * rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator*(Fraction lhs, Fraction rhs) {
    int com_num = lhs.num_ * rhs.num_;
    int com_den = lhs.den_ * rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator/(Fraction lhs, Fraction rhs) {
    int com_num = lhs.num_ * rhs.den_;
    int com_den = lhs.den_ * rhs.num_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator+(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    int com_num = qf + qs;
    int com_den = lhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator-(Fraction lhs, int rhs) {
    int qf = lhs.num_;
    int qs = rhs * lhs.den_;
    int com_num = qf - qs;
    int com_den = lhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator*(Fraction lhs, int rhs) {
    int com_num = lhs.num_ * rhs;
    int com_den = lhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator/(Fraction lhs, int rhs) {
    int com_num = lhs.num_;
    int com_den = lhs.den_ * rhs;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator+(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    int com_num = qf + qs;
    int com_den = rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator-(int lhs, Fraction rhs) {
    int qf = lhs * rhs.den_;
    int qs = rhs.num_;
    int com_num = qf - qs;
    int com_den = rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator*(int lhs, Fraction rhs) {
    int com_num = lhs * rhs.num_;
    int com_den = rhs.den_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}

Fraction operator/(int lhs, Fraction rhs) {
    int com_num = lhs * rhs.den_;
    int com_den = rhs.num_;
    int gcd_val = gcd(com_num, com_den);
    com_num /= gcd_val;
    com_den /= gcd_val;
    Fraction newFraction(com_num, com_den);
    return newFraction;
}
