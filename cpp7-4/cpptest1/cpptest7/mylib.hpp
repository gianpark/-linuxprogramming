// **********************************************
// 제 목 : 교재 2-2-번 문제
// 날 짜 : 2024년 11월04일
// 작성자 : 2001186 박기안
// **********************************************

#ifndef _MYLIB_HPP_ // 중복 방지
#define _MYLIB_HPP_

#include <iostream>
using namespace std;

class Book { //클래스 선언
    string title;
    int price, pages;

public:

    Book(string title = "", int price = 0, int pages = 0) { //생성자
        this->title = title;
        this->price = price;
        this->pages = pages;
    }


    void show();
    string getTitle() { return title; }

 
    friend bool operator==(const Book& book, int op1);      //가격비교 프렌드 연산함수 선언
    friend bool operator==(const Book& book, const string& op1); //제목 비교 프렌드 연산함수 선언
    friend bool operator==(const Book& book1, const Book& book2); //책 비교 프렌드 연산함수 선언
};

#endif
