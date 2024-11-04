#include"mylib.hpp" //헤더파일 호출

void Book::show() { //결과값 출력
    cout<<title<<' '<<price<<"원"<<pages<<"페이지"<<endl;
}
Book& operator+=(Book& op1,int op2){ //가격증가 연산함수 정의
    op1.price+=op2;
    return op1; //결과값리턴
}
Book& operator-=(Book& op1,int op2){ //가격감소 연산함수 정의
    op1.price-=op2;
    return op1; //결과값리턴
}