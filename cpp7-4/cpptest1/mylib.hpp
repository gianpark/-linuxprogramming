// **********************************************
// 제 목 : 복소수 전위 증가,후위 감소연산자 구현문제
// 날 짜 : 2024년 11월04일
// 작성자 : 2001186 박기안
// **********************************************


#ifndef _MYLIB_HPP_ //중복방지
#define _MYLIB_HPP_

#include<iostream>
using namespace std;
class complex { //클래스선언
    int real;
    int img;
public:
    complex(int real = 0, int img = 0) { //생성자
        this->real = real; this->img = img;
        cout<<"복소수"<<real<<"+"<<img<<"j 생성"<<endl;
    }
    void show(); //결과값 출력함수 선언
    complex& operator++(); //++전위 연산자 함수 선언
    complex operator--(int x); //--전위 연산자 함수 선언

};
#endif