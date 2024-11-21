#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
vector<string> sv;
string name;

for (int i = 0; i < 5; i++) {
cout << "문자열을 입력하세요.:";
getline(cin, name);
sv.push_back(name);
}
name = sv.at(0);
for (int i = 1; i < sv.size(); i++) {
if (name < sv.at(i)) name = sv.at(i);
}
cout << "사전에서 제일 뒤에 나오는 이름은 " << name <<"입니다."<< endl;
}