
#include<iostream>
#include<string>
using namespace std;

class person {
public:
	person() {
		cout << "person的默认构造" << endl;
	}
	person(int a, int b) {
		age = a;
		height = new int(b);
		cout << "person的有参构造" << endl;
	}
	~person() {								 //因为上面NEW了一块内存在堆区，所以我们要自己释放这块内存。
		if (height != NULL) {            //释放的语句写在析构函数里就完美了，因为析构函数是默认最后执行的语句。
			delete height;					//但如果不修改拷贝构造函数，那么这样释放就会出错！
			height = NULL;				//因为拷贝是默认的浅拷贝，height=p.height 那么就会导致2次释放同一块内存，导致错误。
		}											//height=null 是用来防止野指针的。
		cout << "person的析构构造" << endl;
	}
	person(const person& p) {             //如果成员需要new出来，第一会产生指针，第二要自己释放这块内存。
		age = p.age;								//当我们释放new出来的内存时，由于系统的拷贝函数是浅拷贝，所以会导致2次释放同一块内存
		height = new int(*p.height);		//所以要在拷贝函数里写深拷贝语句。
		cout << "person的有参构造" << endl;
	}



	int* height;
	int age;
};

void test() {
	person p(18, 178);
	cout << "p的age = " << p.age << "  p的身高=" << *p.height << endl;
	person m(p);
	cout << "m的age = " << m.age << "  m的身高=" << *m.height << endl;
}

void main() {

	test();

}                      //浅拷贝和深拷贝