#include<iostream>
#include<string>
using namespace std;

class person {
public:
	int age = 87;
	string name;


	static void fun() {
		cout << "静态成员函数" << endl;
		cout << "a的值=  " << a << endl;
		//cout << "age的值=  " << age << endl;  //该代码错误，静态函数只能访问静态变量。因为静态变量是放在全局区，所有类都共享
																			//该静态变量，而普通变量是必须先实例化，才能生成的。而实例可以有多个，就会产生
																			//矛盾。
	}
private:
	static void fun02() {
		cout << "私有权限下的静态函数" << endl;
	}
	static int a;
};

int person::a = 88;          //静态成员变量必须类内声明，类外初始化。

void test1() {
	//person p;
	//p.fun();              //第一种方法是先实例化一个对象，然后再调成员变量函数。
	person::fun();		//第二种方法是直接用作用域名调用。
	person::fun02();  //该代码错误，静态函数也有权限，故访问不到。
}

void main() {
	test1();
}          //静态成员函数