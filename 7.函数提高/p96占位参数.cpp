#include <stdio.h>
#include <iostream>
using namespace std;
//占位参数
//语法：返回值类型 函数名（数据类型）{}

//占位参数 还可以有默认参数
// void func(int a=10.int =10)
void func(int a, int)
{
    cout << "a=" << a << endl;
}
int main()
{
    func(10, 20);
    system("pause");
    return 0;
}