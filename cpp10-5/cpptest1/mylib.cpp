#include <iostream>
using namespace std;
int main() {
    int x[2][2]={{2,4},{5,-5}};
    int y[2][2]={{-2,3},{0,-5}};
    int sum;
    cout<<"연산 결과"<<endl;
    for (int i = 0; i < 2; i++)
    {
        sum = 0;
        for (int j = 0; j < 2; j++){
            sum =(x[i][j]+y[i][j]);
            cout<<sum<<"    ";
        }
        cout<<endl;
    }
}