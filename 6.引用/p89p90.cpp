#include <stdio.h>
#include <iostream>
using namespace std;
// 1.引用作用：给变量起别名
//语法：数据类型 &别名 = 原名

// 2.应用的注意事项
// 2.1应用必须初始化
// int &b;//error
// 2.2应用在初始化后，不可改变(成其他变量的别名了)
// int &b=c;//error
int main()
{
    int a = 10;
    int &b = a; //给变量a起别名b
    b = 20;
    int c = 20;
    b = c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    system("pause");
    return 0;
}