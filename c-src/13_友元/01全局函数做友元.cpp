#include<iostream>
#include<string>
using namespace std;

class building {
	friend void goodgay(building& build);       //不加这句不能打印"卧室"。
public:
	building() {
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}
public:
	string m_sittingroom;

private:
	string m_bedroom;
};

void goodgay(building& build)
{
	cout << build.m_sittingroom << endl;
	cout << build.m_bedroom << endl;

}

void test1() {
	building build;
	goodgay(build);
}

void main() {

	test1();
}          //全局函数做友元