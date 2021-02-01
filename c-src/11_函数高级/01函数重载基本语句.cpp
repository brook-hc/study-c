
#include<iostream>
#include<string>
using namespace std;

//函数重载满足条件：
//1、同一个作用域下。
//2、函数名相同。
//3、函数参数类型不同，或个数不同，或顺序不同。
//3、返回值不可以作为函数重载的条件。

void fun(double a) {

	cout << "double" << endl;
}
void fun(int a) {

	cout << "int" << endl;
}
void fun(int a, double b) {

	cout << "int,double" << endl;
}
void fun(double b, int a) {

	cout << "double,int" << endl;
}


void main() {

	fun(10);
	fun(18.3);
	fun(8, 19.3);
	fun(12.5, 4);
}          //函数重载的基本语句