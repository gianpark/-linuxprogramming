#include"mylib.hpp"
void complex::show() {
    cout << real << "+" << img << "j" << endl;
}
complex complex::operator+(complex op2) {
    this->real = this->real + op2.real;
    this->img = this->img + op2.img;
    return *this;
}
