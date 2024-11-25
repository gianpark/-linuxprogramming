 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main() {
    vector<int> v;  // 정수벡터생성
    vector<int>::iterator it;
    cout<<"정수 4개를 입력하세요.: ";
    for (int i = 0; i < 4; i++) {
        int n;
        cin>>n;
        v.push_back(n); // 키보드에서읽은정수를벡터에삽입
    }
    it =max_element(v.begin(), v.end());
    cout<<"최대값은 "<<distance(v.begin(), it)+1<<"번째 값 " <<*it<<endl;
    it =min_element(v.begin(), v.end());
    cout<<"최소값은 "<<distance(v.begin(), it)+1<<"번째 값"<< *it <<endl;
    sort(v.begin(), v.end());
    cout<<"오름차순 결과는"; 
    for (it =v.begin(); it <v.end(); it++) // 벡터v의모든원소출력
    cout<<*it <<' ';
    cout<<endl;
    cout<<"내림차순 결과는 ";
    sort(v.begin(), v.end(), std::greater<int>());
    for (it =v.begin(); it <v.end(); it++) // 벡터v의모든원소출력
    cout<<*it <<' ';
    cout<<endl;
 }
