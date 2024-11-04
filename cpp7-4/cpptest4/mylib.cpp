#include"mylib.hpp" //헤더파일 호출

void Book::show() { //결과값 출력
    cout<<title<<' '<<price<<"원"<<pages<<"페이지"<<endl;
}
Book& Book::operator+=(int op2){ //가격증가 연산함수 정의
    price+=op2;
    return *this; //결과값 리턴
}
Book& Book::operator-=(int op2){ //가격감소 연산함수 정의

    price-=op2;
    return *this; //결과값 리턴
}