#include<iostream>
#include<string>
using namespace std;

class person {
public:
	void print() {

		cout << "this class is person" << endl;
	}

	void page() {

		if (this == NULL) {                  //首先空指针也能访问成员，但如果访问有this指针的成员就会崩溃。
													   //这个if就是防止空指针崩溃的。 像静态变量，非静态函数和静态函数都是只有一份代码，所有类共享
													   //他们是有this指针的。因为print里面没有歧义所以不影响this指针，但page里涉及age变量可能会有
														//歧义，故有this指针。
			return;
		}

		cout << "age= " << age << endl;    //变量age其实是：this->age，只是this一般隐藏了。
	}

	int age = 10;
};


void test1() {

	person* a1 = NULL;
	//a1->print();                      //首先空指针也是可以访问成员的，只要该成员里没有this指针。

	a1->page();
}

void main() {

	test1();


}              //空指针