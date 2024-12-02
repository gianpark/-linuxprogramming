#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> x={{-5,2,35},{-20,5,100},{-75,5,-25}};
    vector<int> big={x[0][0],0,0};
   for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++){
            if(big.at(0)<x.at(i).at(j)){
                big.at(0)=x.at(i).at(j);
                big.at(1)=i+1;
                big.at(2)=j+1;
            }
        }
    }
    cout<<"최대값은 "<<big.at(0)<<endl;
    cout<<"위치는 "<<big.at(1)<<"행"<<big.at(2)<<"열"<<endl;
}
