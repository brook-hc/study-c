#include<iostream>
#include<string>
using namespace std;


int g_a = 3;
int g_b = 4;
const int f = 4;

int main() {
	int a = 10;
	int b = 12;
	cout << "a的地址为： " << int(&a) << endl;
	cout << "b的地址为： " << int(&b) << endl;
	cout << "g_a的地址为： " << int(&g_a) << endl;
	cout << "g_b的地址为： " << int(&g_b) << endl;
	static int c = 3;
	cout << "静态变量c的地址为： " << int(&c) << endl;
	cout << "字符串常量的地址为： " << int("hello world~!") << endl;
	const int d = 9;
	cout << "const修饰的局部变量的地址为： " << int(&d) << endl;
	cout << "const修饰的全局变量的地址为： " << int(&f) << endl;
}
//只要是全局的，静态的，字符串都放全局区。局部变量存放在栈区。