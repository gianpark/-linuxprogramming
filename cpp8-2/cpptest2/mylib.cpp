#include "mylib.hpp"
Shape::Shape(){cout<<"Shape생성, ";}
Shape::~Shape(){cout<<"Shape소멸"<<endl;}
Shape::Shape(int x,int y){
    this->x=x;
    this->y=y;
    cout<<"Shape생성, ";
}
void Shape::set(int x=0, int y=0) { //클래스 접근을 위한 함수 정의
    this->x = x;
    this->y = y;
}
Circle::Circle():Shape(){cout<<"Circle 생성, "<<endl;} //기본생성자
Circle::~Circle(){cout<<"Circle 소멸, ";} //소멸자
void Shape::showShape() {
    cout << "좌표(" << x << "," << y << ")"; //좌표값 출력
}

Circle::Circle(int x=0, int y=0, int z=0):Shape(){ //좌표값 + 반지름 정의
    set(x, y);//함수로 접근
    this->z = z;
    cout<<"Circle 생성"<<endl;
}

void Circle::show() { //결과값 출력
    showShape();
    cout << "에 반지름 " << z << "인 원" << endl;
}
Rect::Rect(): Shape(){cout<<"Rect 생성"<<endl;}
Rect::~Rect(){cout<<"Rect 소멸, ";}
Rect::Rect(int x=0, int y=0, int a=0, int b=0) :Shape(){ //좌표값 + 폭 + 높이 값 정의
    set(x, y);
    this->a = a;
    this->b = b;
    cout<<"Rect 생성"<<endl;
}

void Rect::show() {//결과값 출력
    showShape();
    cout << "에 폭 " << a << ", 높이 " << b << "인 직사각형" << endl;
}
Triangle::Triangle():Shape(){cout<<"Triangle 생성"<<endl;}
Triangle::~Triangle(){cout<<"Triangle 소멸, ";}
Triangle::Triangle(int x=0, int y=0, int a=0, int b=0) :Shape(){// 좌표값 + 밑변 + 높이 값 정의
    set(x, y);
    this->a = a;
    this->b = b;
    cout<<"Triangle 생성"<<endl;
}

void Triangle::show() {//결과값 출력
    showShape();
    cout << "에 밑변 " << a << ", 높이 " << b << "인 삼각형" << endl;
}
