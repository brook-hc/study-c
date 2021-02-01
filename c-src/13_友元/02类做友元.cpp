#include<iostream>
#include<string>
using namespace std;

class building;
class goodgay {
public:
	goodgay();
	void visit();               //虽然外面不能直接访问build指针，但通过visit函数可以间接访问，visit相当于接口。
private:
	building* build;

};

class building {
	friend class goodgay;          //没有这句，下面代码会报错，因为无法访问private下的bedroom。
public:
	building();
	string m_sittingroom;
private:
	string m_bedroom;

};

building::building() {
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

goodgay::goodgay() {
	build = new building;
}

void goodgay::visit() {
	cout << "好基友正在访问：" << build->m_sittingroom << endl;
	cout << "好基友正在访问：" << build->m_bedroom << endl;
}

void test1() {
	goodgay gg;
	gg.visit();
}

void main() {
	test1();
}        //类做友元