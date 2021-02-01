#include<iostream>
#include<string>
using namespace std;

class person {
public:
	int a;
	mutable int b;
	void show(int c) const         //这个const是修饰this指针的
	{                                           //加了这个const后，this的本质是person* const this变为 const person* const this
		int f = 8;                            //故this指向的成员变量是不可以修改的，但函数体内部定义的变量可以修改，因为跟this无关。
		f = f + 3;
		cout << f << endl;
		//a = a + c;
	}
	void fun() {
		int a = 9;
	}


};

void main() {

	person q;
	q.show(4);

	const person a1;   //常对像也是不允许修改成员变量。
	//a1.a = 10;     
	a1.b = 10;           //因为mutable int b是可以修改的。
	//a1.fun();               //常对像只能调常函数。因为普通函数是可以修改成员变量的，如果能调就冲突了。
	a1.show();           //由于show是常函数，所以常对象 a1可以调用。
}         //const修饰的成员函数
