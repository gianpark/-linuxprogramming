#include<iostream>
#include<string>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int x,int y){this->x=x;this->y=y;}//생성자
    int getX(){return x;}//x값 저장함수
    int getY(){return y;}//y값 저장함수
    protected:
    void move(int x,int y){this->x=x;this->y=y;}//x,y값 저장함수

};
class ColorPoint : public Point{//pont클래스 상속
    string color;
    public:
    ColorPoint(int x,int y,string color):Point(x,y){
        this->color=color;
    }
    void setPoint(int x,int y){
        move(x,y);//x,y값 함수 호출
    }
    void setColor(string color){ //색 설정함수
        this->color=color;
    }
    void show(){cout<<color<<"색으로 ("<<getX()<<","<<getY()<<")에 위치한 점입니다."<<endl;} //결과값 출력함수
};
int main(){
    ColorPoint cp(5,5,"RED");
    cp.setPoint(10,20);
    cp.setColor("BLUE");
    cp.show();
}