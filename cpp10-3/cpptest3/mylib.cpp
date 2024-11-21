#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
vector<int> x;
int num;
double avg=0.0,sum=0.0;
vector<int>::iterator it;// 벡터x의원소에대한포인터it 선언
cout << "숫자를 입력하시오:";
for (int i = 0; i < 5; i++) {
    cin>>num; //숫자입력
    x.push_back(num); //저장
}
cout << "초기 벡터 원소:";
for (it = x.begin(); it != x.end(); it++){// 인덱스오류방지
    cout << *it << " "; //it가 가리키는 원소 출력
}
    cout << endl;
    cout << "음수 삭제 후 원소:";
    for (it =x.begin(); it !=x.end(); ){
    if (*it < 0) it =x.erase(it); //erase함수 이용
    else it++;
    }
for (it =x.begin(); it !=x.end(); it++){
    cout<<*it <<" ";
    sum+=*it;
    }
cout<<endl;
avg=sum/x.size();
cout<<"평균값: "<<avg<<endl;


}
