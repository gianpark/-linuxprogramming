#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>>score;
    vector<double>avgs;
    int sum,yeol=1;
    double avg,big;
    bool bigger=false;
    for (int i = 0; i < 3; i++)
    {
        vector<int> tmp;
        int a;
        cout << i+1 <<"번째 학생의 국어,영어,수학 성적을 입력:";
    for (int j = 0; j < 3; j++){
        cin >> a;
        tmp.push_back(a);}
        score.push_back(tmp);

    }
    for (int i = 0; i < score.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < score[i].size(); j++)
            sum += score.at(i).at(j);
            avg = sum / 3.0;
            avgs.push_back(avg);
            if(!bigger){big=avgs.at(0);bigger=true;}
            if(bigger){
                if(avgs.at(i)>big){
                    big=avgs.at(i);
                    yeol+=i;
                }
            }
    }
    cout<<"최우수 학생은 "<<yeol<<"번째 학생이고 평균점수는"<<big<<"점이다."<<endl;
    return 0;
}