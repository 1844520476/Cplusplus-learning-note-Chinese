#include <stdio.h>
#include <iostream>
using namespace std;
// 4.2.3 拷贝构造函数调用时机
/*
C++中拷贝构造函数调用时机通常有三种情况
*使用一个已经创建完毕的对象来初始化一个新对象
*值传递的方式给函数参数传值
*以值方式返回局部对象
*/
int main()
{
    cout << "中文测试" << endl;
    system("pause");
    return 0;
}