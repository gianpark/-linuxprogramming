#include"mylib.hpp" //헤더파일 호출

void Book::show() {
    cout<<title<<' '<<price<<"원"<<pages<<"페이지"<<endl;
}
bool Book::operator!(){ // !연산자 정의
    if(price==0)return true;
}