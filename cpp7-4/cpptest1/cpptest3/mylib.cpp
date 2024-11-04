#include"mylib.hpp" //헤더파일 호출

void Power::show() {
cout << "kick=" << kick << ',' << "punch=" << punch << endl; //결과값 출력함수
}
Power operator*(int op1, Power op2) {
Power tmp; //변경되기전 결과값 저장
tmp.kick = op1 * op2.kick; //kick 곱
tmp.punch = op1 * op2.punch;//punch곱
return tmp; //변경되기전 결과값 리턴
}