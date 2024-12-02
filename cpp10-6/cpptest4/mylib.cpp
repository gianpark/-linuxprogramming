#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> x={{-5,2,35},{-20,5,100},{-75,5,-25}};
    cout<<"수정행렬"<<endl;
   for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++){
            if(x.at(i).at(j)>0){
                x.at(i).at(j)=255;
            }
            else x.at(i).at(j)=0;
            cout<<x.at(i).at(j)<<"    ";
        }
        cout<<endl;
    }
}
