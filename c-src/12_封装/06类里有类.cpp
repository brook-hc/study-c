#include<iostream>
#include<string>
using namespace std;

class phone {
public:
	string model;
	phone(string a) {
		model = a;
	}
};

class person {

public:
	int age;
	string name;
	phone pname;

	person(int a, string b, string c) :age(a), name(b), pname(c)  //pname=c 这种常规赋值不能通过。
	{

	};

};

void test() {
	person p(16, "菊与刀", "苹果");
	cout << p.age << endl;
	cout << p.pname.model << endl;
}

void main() {

	test();

}                               //类里有类