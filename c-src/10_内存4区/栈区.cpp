#include<iostream>
#include<string>
using namespace std;

int* fun(int a) {

	static int b = a;  //若不加static，则返回的值是错的。因为局部变量存放在栈区，函数执行完，其变量由系统自动回收。

	return &b;

}
void main() {

	int* p;
	p = fun(5);
	cout << "p的值为：" << *p << endl;
	cout << "p的值为：" << *p << endl;




}     //栈区