#include<iostream>
#include<string>
using namespace std;

int& func01() {

	int a = 10;
	return a;
}

int& func02() {

	static int a = 20;
	return a;
}

void main() {

	int& b = func01();   //用引用接收函数返回的引用。
	cout << b << endl;    //不要返回局部变量的引用，局部变量放在栈区。
	cout << b << endl;

	int& c = func02();   //若是静态变量，存放在全局区，数据不会在func02结束后立马收回。
	cout << c << endl;
	cout << c << endl;

}             //引用可以作为函数的返回值