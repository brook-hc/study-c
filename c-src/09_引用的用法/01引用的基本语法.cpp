#include<iostream>
#include<string>
using namespace std;

void main() {
	int a = 10;
	int& b = a;   //引用相当于取别名，本质上是封装了指针

	cout << a << endl;
	cout << b << endl;
	//int c = 20;                 //引用注意事项：1，创建引用必须初始化。2，引用不可更改，重新引用会出错。
	//int& b = c;
	b = 20;

	cout << a << endl;
	cout << b << endl;
}         //引用的基本语法