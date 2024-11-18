#include <iostream>
using namespace std;
template <class T1>
class Container{
    int size;// 배열크기 저장
    T1 *arr;//동적할당 배열
public:
    Container(int a) : size(a), arr(new T1[a]) {} //생성자
    ~Container() { //소멸자
        delete[] arr; //동적할당해제
    }
    void set(int a,T1 b);
    T1 get(int a);

};
template<class T1>
void Container<T1>::set(int a,T1 b){
    arr[a]=b;
}
template<class T1>
T1 Container<T1>::get(int a){
    return arr[a];
}
int main() {
Container<char> c(26);
for (int i = 0; i < 26; i++)
{c.set(i, 'a' + i);}
for (int i = 25; i >= 0; i--)
{cout << c.get(i);}
cout << endl;
}