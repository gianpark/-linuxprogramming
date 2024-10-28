#include <iostream>
using namespace std;
class complex { //클래스 선언
    double real, img;
public:
    complex() { real = 0; img = 0; } //자동생성자
    complex(double real, double img) {//생성자
        this->real = real;
        this->img = img;
    }
    void show() const { cout << real << "+" << img << "j" << endl; } //결과값출력
    friend class complexmanager;//접근을 위한 클래스프렌드선언
};
class complexmanager {//연산클래스 선언
public:
    complex complexadd(const complex& x, const complex& y) { //덧셈함수
        return complex(x.real + y.real, x.img + y.img);
    }

    complex complexsub(const complex& x, const complex& y) { //뺄셈함수
        return complex(x.real - y.real, x.img - y.img);
    }
};