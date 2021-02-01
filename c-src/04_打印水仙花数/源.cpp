#include<iostream>
#include<string>
using namespace std;
//这里要用do-while循环
int main() {
	int a = 100;
	int b, c, d = 0;

	do {
		b = a % 10;
		c = a / 10 % 10;
		d = a / 100;
		if (b * b * b + c * c * c + d * d * d == a)
		{
			cout << a << endl;
		}
		a++;
	} while (a < 1000);
}