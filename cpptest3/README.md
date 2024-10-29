c++ 7-1 실습과제3

 ComplexManager클래스의멤버함수로ComplexAdd, ComplexSub 를선언하고다음코드가실행되도록작성하시오.

#include<iostream>

 Usingnamespacestd;
 
 // 2개의클래스정의추가
 
intmain() {

 Complex x(5, 5), y(2, 2), sum, sub;
 
 ComplexManager man;
 
 sum = man.ComplexAdd(x, y);
 
 cout<< “두복소수의합은”;
 
 sum.show();
 
 sub = man.ComplexSub(x, y);
 
 cout<< “두복소수의차는”;

 두복소수의합은7+7j
 
두복소수의차는3+3j
 
 sum.show();
 
 return0;
 
 }
 

![image](https://github.com/user-attachments/assets/e00636aa-a7b1-4f00-ac4c-1465ad54e867)
