#include "mylib.hpp" // 헤더 파일 호출


void Book::show() { //결과값 출력
    cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
}


bool operator==(const Book& book, int op1) { //가격비교 함수정의
    return book.price == op1;
}


bool operator==(const Book& book, const string& op1) { //제목비교 함수 정의
    return book.title == op1;
}


bool operator==(const Book& book1, const Book& book2) { //책 비교 함수 정의
    return (book1.price == book2.price &&
        book1.pages == book2.pages &&
        book1.title == book2.title);
}
