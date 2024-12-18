#include"mylib.hpp" //헤더파일 호출
void complex::show() {
    cout << real << "+" << img << "j" << endl; //결과값 출력
}
complex& complex::operator++() { //++전위 연산자 함수 정의
    ++real; //실수증가
   ++img; //허수증가
   return *this; //변경된 결과값 리턴
}
complex complex::operator--(int x) { //--후위 연산자 함수 정의
    complex tmp=*this; //변경되기 전 결과값 저장
   real--; //실수감소
   img--; //허수감소
   return tmp; //변경되기 전 결과값 리턴
}
