// 05_sizeof.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    short a;
    int b;
    cout << "short占内存空间大小为:" << sizeof(a) << endl;
    cout << "int占内存空间大小为:" << sizeof(int) << endl;
    //sizeof里面可以放数据类型，也可以放变量名称。
    return 0;
}
