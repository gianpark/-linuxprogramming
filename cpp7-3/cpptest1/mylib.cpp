#include"mylib.hpp" //헤더파일 호출
void complex::show() {
    cout << real << "+" << img << "j" << endl; //결과값 출력
}
complex complex::operator+(complex op2) {
    this->real = this->real + op2.real; //실수 덧셈
    this->img = this->img + op2.img; //허수 덧셈
    return *this;
}
