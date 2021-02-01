#include<iostream>
using namespace std;
//方法1：用宏定义方式，本质上是字符串的替换，编译代码之前就进行替换，没有数据类型的概念。
#define day 7

using namespace std;
int main()
{
	//方法2：用const定义一个常量，与宏定义一样，数值是不能修改的，但const是编译过程中实现的，有数据类型概念。
	const int a = 10;
	cout << a << endl;
	cout << day << endl;
	//以上2种方法定义的数值都是不能修改的。
}       //变量与常量