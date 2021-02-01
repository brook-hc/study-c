
#include<iostream>
#include<string>
using namespace std;

class person {
public:
	//构造函数：用作恢复出厂设置等操作。
	//没有返回值，不用写void
	//函数名与类名相同
	//构造函数可以有参数，可发生重载
	//构造实例化对象时，构造函数会自动调用一次，且只调用一次
	int a;

	person() {
		cout << "鬼屎一样~！" << endl;
		a = 10;
	}
	//person(int b) {
	//	cout << "有参的鬼屎一样~！" << endl;
	//	a = b;
	//}
	//析构函数：进行清理等操作。
	//没有返回值，不用写void
	//函数名与类名相同，前面加~
	//析构函数不可以有参数，不可发生重载
	//对象在销毁前，会自动调用，且只调用一次。
	~person() {
		cout << "hello world~！" << endl;
	}

	person(person& p) {
		cout << "拷贝构造" << endl;
		a = p.a + 10;
		cout << "a的值为：" << a << endl;
	}                                //系统会默认给一个类3个函数：无参构造函数，有参构造函数，拷贝构造函数。
									//如果自己定义了有参构造，则系统不会再生成无参构造，但拷贝构造会自动生成
									//如果我只定义了拷贝构造，则系统对于无参和有参构造都不会生成。
};                                  //但是无参，有参，拷贝只会调用其中一个。比如：调了无参，就不会调用有参和拷贝。
									//不管怎么样析构函数都会调用。

void test() {
	person a1;
	cout << "a的值为：" << a1.a << endl;
	person b1(a1);

}
void main() {

	test();

}                               //构造函数和解析函数