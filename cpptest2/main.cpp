#include"mylib.h"
int main() {
    complex x(2, 3), y(-5, 10), sum;
    ComplexManager manager; 
    sum = manager.ComplexAdd(x, y); 
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}
