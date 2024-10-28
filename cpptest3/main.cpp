#include"mylib.h"
int main() {
    complex x(5, 5), y(2, 2), sum, sub;
    complexmanager man;
    sum = man.complexadd(x, y);
    cout << "두 복소수의 합은 ";
    sum.show();
    sub = man.complexsub(x, y);
    cout << "두 복소수의 차는 ";
    sub.show();
    return 0;
}
