#include"mylib.hpp" //헤더파일 호출
void complex::show() {
    cout << real << "+" << img << "j" << endl; //결과값 출력
}
complex complex::operator*(complex op2) {
    complex tmp;
    tmp.real = (this->real * op2.real)+(-(this->img*op2.img)); //실수 곱
    tmp.img = (this->img * op2.real)+(this->real*op2.img); //허수 곱
    return tmp;
}
