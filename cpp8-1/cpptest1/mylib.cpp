#include "mylib.hpp"

void Shape::set(int x=0, int y=0) { //클래스 접근을 위한 함수 정의
    this->x = x;
    this->y = y;
}

void Shape::showShape() {
    cout << "좌표(" << x << "," << y << ")"; //좌표값 출력
}

void Circle::setCircle(int x=0, int y=0, int z=0) { //좌표값 + 반지름 정의
    set(x, y);//함수로 접근
    this->z = z;
}

void Circle::show() { //결과값 출력
    showShape();
    cout << "에 반지름 " << z << "인 원" << endl;
}

void Rect::setRect(int x=0, int y=0, int a=0, int b=0) { //좌표값 + 폭 + 높이 값 정의
    set(x, y);
    this->a = a;
    this->b = b;
}

void Rect::show() {//결과값 출력
    showShape();
    cout << "에 폭 " << a << ", 높이 " << b << "인 직사각형" << endl;
}

void Triangle::setTriangle(int x=0, int y=0, int a=0, int b=0) {// 좌표값 + 밑변 + 높이 값 정의
    set(x, y);
    this->a = a;
    this->b = b;
}

void Triangle::show() {//결과값 출력
    showShape();
    cout << "에 밑변 " << a << ", 높이 " << b << "인 삼각형" << endl;
}
