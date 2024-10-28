# -linuxprogramming

실습과제1

#include <iostream>

using namespace std;

class complex; //클래스선언

complex complexadd(complex x, complex y);//덧셈전역함수선언

class complex {//클래스정의
    double real, img;
public:
    complex() { real = 0; img = 0;}
    complex(double real, double img) { this->real = real; this->img = img; cout << "복소수" << real << "+" << img << "j 생성" << endl;
    }
    friend complex complexadd(complex x, complex y);//프렌드선언
    void show() { cout << "복소수 " << real << "+" << img << "j" << endl; }//결과값출력
};

complex complexadd(complex x, complex y) {//덧셈함수
    complex c;
    c.real = x.real + y.real;
    c.img = x.img + y.img;
    return c;
}

실습과제2

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

실습과제3

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
