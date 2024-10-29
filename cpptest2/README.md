c++ 7-1 실습과제2

과제1번의전역함수ComplexAdd를ComplexManager클래스의멤
버함수로선언하고다음코드가실행되도록작성하시오.

#include<iostream>

 Usingnamespacestd;
 
 // 2개의클래스정의추가
 
Intmain() {

 Complex x(2, 3), y(-5, 10), sum;
 
 ComplexManager man;
 
 sum = man.ComplexAdd(x, y);
 
 cout<< “두복소수의합은”;
 
 sum.show();
 
 return0;
 
 }

복소수2+ 3j생성

복소수-5+10j생성

복소수0+0j생성

두복소수의합은-3+13j
