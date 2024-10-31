실습과제 1
실수부(real)와 허수부(img)를 멤버변수로 갖는 복소수(Complex) 클래스를 아래 결과가 나오도록 연산자함수를 멤버함수로 구현하시오.

#include <iostream>

using namespace std;

// 클래스 정의 추가

int main() {

Complex x(2, 3), y(-5, 10), sum;

sum = x + y;

cout << “두 복소수의 합은”;

sum.show();

return 0;

}

두 복소수의 합은 -3+13j

![image](https://github.com/user-attachments/assets/7efc0088-695c-4407-8097-5aa33b37f1d8)
