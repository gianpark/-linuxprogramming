#include <iostream>
using namespace std;
int main() {
    int score[3][3];
    int sum;
    double avg,big=0;
    for (int i = 0; i < 3; i++)
    {
        cout << i+1 <<"번째 학생의 국어,영어,수학 성적을 입력:";
    for (int j = 0; j < 3; j++)
        cin >> score[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += score[i][j];
            avg = sum / 3.0;
            if(avg>big)big=avg;
    }
    cout<<"최우수 학생은 1번째 학생이고 평균점수는"<<big<<"점이다."<<endl;
    return 0;
}
