#include <iostream>
using namespace std;
int main() {
    int x[3][3]={{-5,2,35},{-20,5,100},{-75,5,-25}};
    cout<<"수정행렬"<<endl;
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            if(x[i][j]>0){
                x[i][j]=255;
            }
            else x[i][j]=0;
            cout<<x[i][j]<<"    ";
        }
        cout<<endl;
    }


}