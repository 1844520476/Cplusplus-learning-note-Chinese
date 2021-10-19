#include <stdio.h>
#include <iostream>
using namespace std;
//引用的本质在C++内部的实现是一个指针常量（指针的简易使用版：自动挡）
void func(int &ref)
{
    ref = 1000;
}
int main()
{
    int a = 10;
    int &ref = a;
    //编译器自动转化为int* const ref = &a;
    ref = 20;
    //编译器自动转化为 *ref = 20;
    cout << "ref=" << ref << endl;
    func(a);
    system("pause");
    return 0;
}