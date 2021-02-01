#include<iostream>
#include<string>
using namespace std;

//封装和结构体差不多，只是默认权限不同，结构体默认权限是public。
//封装的访问权限有三种：
//1、public （公共权限 ）              成员   类内和类外都可以访问。
//2、protected （保护权限）         成员   类内可以访问，类外不可以访问，儿子可以访问父亲的保护权限内容
//3、private  （私有权限）			   成员   类内可以访问，类外不可以访问，儿子不可以访问父亲的私有权限内容。

class person {
public:
	string name;
protected:
	string car;
private:
	int password;
public:
	void fun() {
		cout << "what's a fucking day~!" << endl;
	}

};

void main() {

	person a;
	a.name = "张三";
	cout << a.name << endl;
	a.fun();
	//a.car = "benchi";    //该成员类外不可访问。
}              //封装的基本用法