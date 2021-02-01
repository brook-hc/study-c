#include<iostream>
#include<string>
using namespace std;

class person {
	int a;
	static int b;   //静态变量类内声明，类外初始化。静态变量不属于具体某个类。
	void fun1() {
		int c = 3;
	}                    //函数也不属于具体某个类。不占类的大小空间。

	static void fun2() {}    //静态函数同理也不属于某个类，也不占类的大小空间。
};

int person::b = 5;
person p;

void main() {

	cout << "p的大小为：" << sizeof(p) << endl;
}         //成员变量和函数分开存储