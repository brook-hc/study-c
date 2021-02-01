#include<iostream>
#include<string>
using namespace std;


int* func() {

	int* p = new int(15);  //自己开辟一块内存，存放int变量，在堆区保存，堆区的变量由程序员自己释放。
	return p;                    //若程序员不释放，程序结束时由操作系统回收（这里指整个main函数结束时回收）。

}


void main() {

	int* q = func();
	//delete q;    释放内存的语句
	cout << *q << endl;


}    //堆区和new的使用