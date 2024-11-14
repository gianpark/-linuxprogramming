#include <iostream>
using namespace std;
template <class T> //탬플릿 매개변수 선언
T getmax(T data[], int n) { //최대값 구하기
    T max=data[0];
for (int i = 0; i < n; i++){   
    if(max<data[i])max=data[i];
}
return max;
}
int main() {
int a[5]={-5, 10, 30, 20, 6};
double b[4]= {3.14, 1.5, -6.0, 0.5};
char c[3] = {'a', 'x', 'p'};
cout << "정수배열의 최대값은" << getmax<int>(a,5)<<endl;
cout << "실수배열의 최대값은" << getmax<double>(b,4)<<endl;
cout << "문자배열의 최대값은" << getmax<char>(c,3)<<endl;
}
