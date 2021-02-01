
#include<iostream>
#include<string>
using namespace std;

class c1 {

	int age;
	string name;
	string lover;

public:
	void setage(int a) {                   //设置可写的公共接口
		if (a < 0 || a>150) {
			cout << "你是外星人吧！" << endl;
			age = a;
		}
		else {
			age = a;
		}
	}
	void getage() {                        //设置可读的公共接口

		cout << "他的年龄是：" << age << endl;
	}


};

void main() {

	c1 b1;
	b1.setage(190);
	b1.getage();

}              //class的权限设置