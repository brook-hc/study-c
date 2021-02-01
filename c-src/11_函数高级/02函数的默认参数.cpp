#include<iostream>
#include<string>
using namespace std;

/*
int fun(int a, int b=10, int c) {  //一个形参有默认参数，其后面的形参都要有默认参数。

	return a + b+ c;
}

*/
int fun(int a, int b = 10, int c = 20);


void main() {

	cout << fun(10, 20, 30) << endl;   //优先采用我的赋值，不会带入默认值。
	cout << fun(10) << endl;  //如果想采用默认值，可以简化赋值形式。


}
int fun(int a, int b = 10, int c = 20) {  //函数声明里有默认参数，函数实体就不能有。函数实体有默认参数，声明就不能有。

	return a + b + c;
}        //函数的默认参数