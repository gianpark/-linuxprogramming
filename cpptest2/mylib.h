#include<iostream>
using namespace std;

class complex { //클래스 선언
    double real, img;
public:
    complex() { real = 0; img = 0; }
    complex(double real, double img) { this->real = real; this->img = img; cout << "복소수" << real << "+" << img << "j 생성" << endl;
    }
    void show() { cout << "복소수 " << real << "+" << img << "j" << endl; } //결과값 출력

    friend class complexmanager;//접근을 위한 클래스 프렌드 선언
};

class complexmanager { //덧셈 함수가있는 클래스 생성
public:
    complex complexadd(complex x, complex y) { //덧셈함수
        complex c;
        c.real = x.real + y.real;
        c.img = x.img + y.img;
        return c;
    }
};