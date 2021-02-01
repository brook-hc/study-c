#include<iostream>
#include<string>
using namespace std;

//new相当于c里的malloc
int* func() {

    int* p = new int[10];   //创建整型数组，[]里面是数组的个数。注意区别创建一个整型变量。

    for (int i = 0; i < 10; i++) {

        p[i] = i + 10;
    }
    return p;
}

void main() {

    int* q = func();
    //delete[] q;    注意！释放数组要加 [] 符号。

    for (int j = 0; j < 10; j++) {

        cout << q[j] << endl;
    }



}    //new的使用