#ifndef _mylib_HPP_
#define _mylib_HPP_

#include<iostream>
using namespace std;
class complex {
    int real;
    int img;
public:
    complex(int real = 0, int img = 0) {
        this->real = real; this->img = img;
    }
    void show();
    complex& operator+(complex op2);

};
#endif