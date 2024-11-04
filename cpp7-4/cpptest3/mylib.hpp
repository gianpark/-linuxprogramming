// **********************************************
// 제 목 : b=2*a 결과값이 나오는 power클래스 문제
// 날 짜 : 2024년 11월04일
// 작성자 : 2001186 박기안
// **********************************************

#ifndef _MYLIB_HPP_ //중복방지
#define _MYLIB_HPP_

#include <iostream>
using namespace std;
class Power { //클래스선언
int kick;
int punch;
public:
Power(int kick = 0, int punch = 0) { //생성자
this->kick = kick; this->punch = punch;
}
void show();
friend Power operator*(int op1, Power op2); // 프렌드 선언
};

#endif