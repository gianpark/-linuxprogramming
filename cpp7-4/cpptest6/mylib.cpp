#include"mylib.hpp" //헤더파일 호출

void Book::show() {
    cout<<title<<' '<<price<<"원"<<pages<<"페이지"<<endl; //결과값 출력
}
bool Book::operator==(int op1){ //가격 비교연산 함수 정의
    return price == op1;
}
bool Book::operator==(string op1) { //제목 비교연산 함수 정의
    return title == op1;

}
bool Book::operator==(Book op1) { //책 비교연산함수 정의
    return(price==op1.price&&pages==op1.pages&&title==op1.title);
 
}