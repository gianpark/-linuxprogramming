 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<string>
 using namespace std;
 int main() {
    vector<string> v;  // 정수벡터생성
    for (int i = 0; i < 5; i++) {
        string name;
        cout<<"문자열을 입력하세요.: ";
        getline(cin,name);
        v.push_back(name); // 키보드에서읽은정수를벡터에삽입
    }

    sort(v.begin(), v.end());

    vector<string>::iterator it;  // iterator 변수선언

    cout<<"사전에서 나오는 순서"<<endl;

    for (it =v.begin(); it <v.end(); it++) // 벡터v의모든원소출력
        cout<<*it <<endl;
    
 }

