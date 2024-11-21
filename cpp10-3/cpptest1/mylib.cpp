#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
vector<int> x;
int num,big,sma;
cout << "정수값 4개를 입력하시오:" << endl;
for (int i = 0; i < 4; i++) {
cout << i+1 << ">>";
cin>>num;
x.push_back(num);
}
big = x.at(0);
sma = x.at(0);
for(int i=0;i<4;i++){
    if(big<x[i]){big=x[i];}
    if(sma>x[i]){sma=x[i];}
}
cout<<"최대값은"<<big<<"최소값은"<<sma<<"입니다."<<endl;
}