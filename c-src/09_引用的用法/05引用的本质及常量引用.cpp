#include<iostream>
#include<string>
using namespace std;

//引用的本质是指针常量，int& b = a；等价于 int* const b = a；
//也就是说指针的指向不可以改变，但指针指向的值可以改变。

void func(const int& d) {

	//d = 1000； //形参列表加了const，就可以防止形参被修改。
	cout << d << endl;
}


void main() {

	int a = 10;

	int& b = a;  // 相当于 int* const b = &a； b指向的地址是不能修改的。
						//但我们不能把b理解为一个指针，在系统中，b就是a的别名，是一个变量。

	b = 20;  //相当于 *b=20； 也就是说系统会自动解引用。我们只须把b看做一个变量就行了。

	//int &ref = 10  //常量不能直接引用，引用只能给变量取别名。
	const int& ref = 10;  //这里系统默认创建一个变量temp = 10；const int& ref = temp；这个temp到底叫什么我们不知道。

	//ref = 11;   有const所以不能修改。

	func(b);
}       //引用的本质及常量引用