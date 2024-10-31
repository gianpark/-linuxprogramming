#ifndef _mylib_HPP_ //중복금지
#define _mylib_HPP_

#include<iostream>
using namespace std;
class complex {
    int real;
    int img;
public:
    complex(int real = 0, int img = 0) { //생성자
        this->real = real; this->img = img;
    }
    void show();
    complex operator+(complex op2); //+연산자함숨=수 선언

};
#endif