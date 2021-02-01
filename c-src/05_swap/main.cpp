#include "swap.h"
#include <iostream>
using namespace std;
#include <string>
int main()
{
    int a=10;
    int b=20;
   cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    swap(a,b);
   cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    return 0;
}     //写一个CMakeLists.txt文件，然后ctrl+shift+p 搜索cmake，点配置，会自动生成build文件。