#include <iostream>
#include <string>
using namespace std;
class TV {
public:
int size; // 스크린 크기
public:
TV() { size = 20;cout<<"TV생성"<<endl; } //기본생성자
TV(int size) { this->size = size; }
int getSize() { return size; }
void setTV(int size){
    this->size=size;
}
};

class WideTV : public TV { // TV를 상속받는 WideTV
public:
bool videoIn;
public:
WideTV(){cout<<"WideTV생성"<<endl;}
WideTV(int size, bool videoIn) : TV(size) { this->videoIn = videoIn; }
bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
string ipAddr; // 인터넷 주소
public:
SmartTV(){cout<<"SmartTV생성"<<endl;}
SmartTV(int size,bool videoln ,string ipAddr) : WideTV(size, true) {
this->ipAddr = ipAddr;
}

void setSmartTV(int size, bool videoIn, string ipAddr) {//값 저장 함수
        this->size = size;
        this->videoIn = videoIn;
        this->ipAddr = ipAddr;
    }
string getIpAddr() { return ipAddr; } //ip값 저장함수
};

int main() {
SmartTV htv;
htv.setSmartTV(50, false, "192.0.0.2");

cout << "size =" << htv.getSize() << endl;
cout << "videoIn =" << boolalpha << htv.getVideoIn() << endl;
cout << "IP ="<< htv.getIpAddr() << endl;
}