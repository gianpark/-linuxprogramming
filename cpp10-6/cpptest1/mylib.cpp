#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>>x={{2,4},{5,-5}};
    vector<vector<int>>y={{-2,3},{0,-5}};
    int sum;
    cout<<"연산 결과"<<endl;
    for (int i = 0; i<x.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < x[i].size(); j++){
            sum =(x[i][j]+y[i][j]);
            cout<<sum<<"    ";
        }
        cout<<endl;
    }
}