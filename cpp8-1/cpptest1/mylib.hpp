// **********************************************
// 제 목 : shape클래스를 상속한 cirle, rect, triangle 클래스 함수작성 x, y는 private
// 날 짜 : 2024년 11월 07일
// 작성자 : 2001186 박기안
// **********************************************

#ifndef _MYLIB_HPP_ // 중복 방지
#define _MYLIB_HPP_

#include <iostream>
using namespace std;

class Shape { //shape 클래스 생성
private:
    int x, y;

public:
    void set(int x, int y); //생성자 매개변수 접근을 위한 함수
    void showShape(); //좌표값 출력 함수선언
};

class Circle : public Shape {  //circle클래스 생성 shape상속
    int z;

public:
    void setCircle(int x, int y, int z); //생성자 
    void show(); //결과값출력 함수 선언
};

class Rect : public Shape {  //Rect클래스 생성 shape상속
    int a, b;

public:
    void setRect(int x, int y, int a, int b);//생성자 
    void show();//결과값출력 함수 선언
};

class Triangle : public Shape { //Triangle클래스 생성 shape상속
    int a, b;

public:
    void setTriangle(int x, int y, int a, int b);//생성자 
    void show();//결과값출력 함수 선언
};

#endif
