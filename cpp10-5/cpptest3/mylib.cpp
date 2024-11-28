#include <iostream>
using namespace std;
int main() {
    int x[3][3]={{-5,2,35},{-20,5,100},{-75,5,-25}};
    int big[3]={x[0][0],0,0};
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            if(big[0]<x[i][j]){
                big[0]=x[i][j];
                big[1]=i+1;
                big[2]=j+1;
            }
        }
            
    }
    cout<<"최대값은 "<<big[0]<<endl;
    cout<<"위치는 "<<big[1]<<"행"<<big[2]<<"열"<<endl;

}