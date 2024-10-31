#include"mylib.hpp"
void Power::show() {
cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power Power::operator-(int op2) {
Power tmp; // 임시 객체 생성
tmp.kick = this-> kick - op2; // kick에 op2 더하기
tmp.punch = this-> punch - op2; // punch에 op2 더하기
return tmp; // 임시 객체 리턴
}