#include<iostream>
#include<string>
using namespace std;

//class和struct唯一的区别就是默认权限不同，class为私有，struct为公共。
class c1 {
	int a;

};

struct c2 {
	int a;
};

void main() {

	c1 a;
	//a.a = 10;

	c2 b;
	b.a = 20;
}         //class和struct的区别