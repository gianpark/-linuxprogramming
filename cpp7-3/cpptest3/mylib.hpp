#ifndef _mylib_HPP_//중복금지
#define _mylib_HPP_

#include <iostream>
using namespace std;
class Power {
int kick;
int punch;
public:
Power(int kick = 0, int punch = 0) {
this->kick = kick; this->punch = punch;
}
void show();
Power operator- (int op2); // + 연산자 함수 선언
};
#endif