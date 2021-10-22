#include <stdio.h>
#include <iostream>
using namespace std;
//函数默认参数
//函数形参列表中形参可以有默认值
//返回值类型 函数名 （参数=默认值）{}

//注意：1.若某位置起有默认参数，从这个位置往后（从左往右）都必须有默认参数
/*
int func(int a, int b = 20, int c)
{
    return a + b + c;
}
*/

// 2.如果有传入数据，用传入数据；没有传入数据时才用默认值
int func(int a, int b = 20, int c = 100)
{
    return a + b + c;
}

// 3.函数声明和函数实现不能同时有默认参数
// int func2(int a, int b = 20, int c = 100);//error
int func2(int a, int b, int c);
int func2(int a, int b = 20, int c = 100)
{
    return a + b + c;
}
int main()
{
    cout << "a+b+c=" << func(10, 30) << endl;
    cout << "a+b+c=" << func2(10, 30) << endl;
    system("pause");
    return 0;
}