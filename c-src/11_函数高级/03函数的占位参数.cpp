#include<iostream>
#include<string>
using namespace std;

void fun01(int a, int) {

	cout << "what's a fucking day~!" << endl;
}

void fun02(int a, int = 10) {      //占位参数也可以设默认值

	cout << "what's a fucking day~!" << endl;
}

void main() {

	fun01(19, 77);
	fun02(10);
}           //函数的占位参数