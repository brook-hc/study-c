
#include<iostream>
#include<string>
using namespace std;

int& func() {
	static int a = 18;
	return a;
}


void main() {

	int& b = func();
	cout << b << endl;

	func() = 100;            //返回引用的函数还可以作为左值。
	cout << b << endl;
}//返回引用的函数还可以作为左值。