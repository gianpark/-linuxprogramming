 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<string>
 using namespace std;
 class student{
    vector<int> score;
    vector<string> name;
    int w;
    public:
    vector<int>::iterator it;
    void get(){
        string n;
        int a;
        cout<<"이름과 성적을 입력: ";
        cin>>n;
        name.push_back(n);
        cin>>a;
        score.push_back(a);
    }
    int max(){
        
        return score.at(w);
    }
    string maxname(){
        it =max_element(score.begin(), score.end());
        w=distance(score.begin(), it);
        return name.at(w);
    }
 };
 int main() {
    student st;
    for(int i=0;i<3;i++){
        st.get();
    }
    cout<<"최우수 학생은"<<endl;
    cout<<"이름: "<<st.maxname()<<endl;
    cout<<"성적: "<<st.max()<<endl;
 }
