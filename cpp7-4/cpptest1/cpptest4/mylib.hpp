// **********************************************
// 제 목 : 교재 1-1번 문제
// 날 짜 : 2024년 11월04일
// 작성자 : 2001186 박기안
// **********************************************

#ifndef _MYLIB_HPP_ //중복방지
#define _MYLIB_HPP_

#include <iostream>
using namespace std;
class Book{ //클래스 선언
    string title;
    int price,pages;
    public:
    Book(string title="",int price=0,int pages=0){ //생성자
        this->title=title;this->price=price;this->pages=pages;
    }
    void show(); //결과값 출력 함수 선언
    
    string getTitle(){return title;} // 제목
    Book& operator+=(int op2); //가격증가 연산함수 선언
    Book& operator-=(int op2); //가격감소 연산함수 선언
};



#endif