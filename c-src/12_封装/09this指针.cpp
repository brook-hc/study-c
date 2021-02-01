#include<iostream>
#include<string>
using namespace std;

//this指针隐含在每一个非静态成员函数内部，不需要定义，可以直接使用。
//由于非静态成员函数只有一份，this指针指向调用该函数的实例化对象。
//this指针解决：1形参和变量成员名起冲突时。2可以用*this返回实例化的对象。
//this指针是一个指针常量，它的指向是不可以修改的。
class person {
public:
	int age;

	person(int age) {
		this->age = age;    //如果不加this就错了。形参和成员变量名字冲突。
	}

	person& add(person& p) {           //返回值person后面如果不加&，就不会累加。不加&返回的是副本。

		this->age += p.age;
		return *this;
	}
};

void main() {

	person a1(10);
	cout << a1.age << endl;
	person a2(5);                                            //这句代码已经调用过a2一次有参构造了。
	a2.add(a1).add(a1).add(a1).add(a1);       //构造函数只会调用一次，所以后面的所有add都不会调用构造函数。
	cout << a2.age << endl;
}            //this指针