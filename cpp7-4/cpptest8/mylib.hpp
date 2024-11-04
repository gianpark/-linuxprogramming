// **********************************************
// 제 목 : 교재 3번 문제
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
    void show(); // 결과값 출력 함수 선언
    
    bool operator!(); // !연산자 선언
};



#endif