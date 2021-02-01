#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[5];      //若不赋值，则输出原有系统中的值。若int arr[5]={3}; 若赋一个值，则自动赋给第一个，其他的自动赋0。
	cout << arr[1] << endl;
	return 0;
}  //一维数组