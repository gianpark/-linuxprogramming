#include <iostream>
using namespace std;

class complex;
complex complexadd(complex x, complex y);

class complex {
    double real, img;
public:
    complex() { real = 0; img = 0;}
    complex(double real, double img) { this->real = real; this->img = img; cout << "복소수" << real << "+" << img << "j 생성" << endl;
    }
    friend complex complexadd(complex x, complex y);
    void show() { cout << "복소수 " << real << "+" << img << "j" << endl; }
};

complex complexadd(complex x, complex y) {
    complex c;
    c.real = x.real + y.real;
    c.img = x.img + y.img;
    return c;
}
