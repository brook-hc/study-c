#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[3][3] = { 5,7,8 };  //二维数组至少给出列数，且赋值，但这样好像不能全赋值为0。
	//如果想先不赋值，就必须行和列都给出。
	//若行列都给出，可全赋值为0
	cout << arr[0][0] << " " << arr[1][2] << endl;

	return 0;


}   //二维数组