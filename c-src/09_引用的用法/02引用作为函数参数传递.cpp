#include<iostream>
#include<string>
using namespace std;

void swap01(int a, int b) {   //值传递

	int temp = a;
	a = b;
	b = temp;
}
void swap02(int* a, int* b) { //地址传递

	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap03(int& p, int& q) { //引用传递，相当于用p和q给实参取别名，建立了真正的联系。

	int temp = p;
	p = q;
	q = temp;
}



void main() {
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;

	swap02(&a, &b);
	cout << "地址传递a=" << a << "," << "地址传递b=" << b << endl;

	swap03(a, b);
	cout << "引用传递a=" << a << "," << "引用传递b=" << b << endl;

}     //引用作为函数参数传递