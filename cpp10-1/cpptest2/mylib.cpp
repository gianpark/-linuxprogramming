#include <iostream>
using namespace std;
class Circle { //서클클래스 선언
int radius;
public:
Circle(int radius = 1) { this->radius = radius;} //생성자
int getRadius() { return radius; } //반지름값
};
template <class T> //탬플릿 매개변수 선언
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
if (a > b) return a; //최대값 구하기
else return b;
}
Circle bigger(Circle a, Circle b) {
    if (a.getRadius() > b.getRadius()) return a; //Circle객체에 대한 연산자 함수 정의
    else return b;
}
int main() {
int a=20, b=50, c;
c = bigger<int>(a, b);
cout << "20과 50중 큰 값은" << c << endl;
Circle donut(10), pizza(20), y ;
y = bigger(donut, pizza);
cout << "donut과 pizza중 큰 반지름은" << y.getRadius()<< endl;
}