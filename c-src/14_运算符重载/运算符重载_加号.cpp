#include <iostream>
using namespace std;
#include <string>
//运算符重载就是让类和类也可以运算，本质是定一个函数去实现，但如果用系统的重载符，则用起来更简洁。
//下面是对加号做重载，核心语句：operator+
class person{
    public:
    int a;
    int b;
    // person operator+(person &p){      //成员函数内部重载，但如果全局函数也定义了一样的重载，会冲突。
    //     person temp;
    //     temp.a = this->a+p.a;
    //     temp.b = this->b+p.b;
    //     return temp;
    // }

};
person operator+(person &a,person&b){        //全局函数重载，建议用这个，清晰易懂。
    person temp;
        temp.a = a.a+b.a;
        temp.b = a.b+b.b;
        return temp;
}

void test(){
    person a;
    a.a=10;
    a.b=10;
    person b;
    b.a=10;
    b.b=10;
    person c = a+b;      //用系统的operator+很简洁。
    cout<<"c的a = "<<c.a<<endl;
    cout<<"c的b = "<<c.b<<endl;
}

int main(){
    test();
   getchar();
    return 0;

}