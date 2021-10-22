#include <stdio.h>
#include <iostream>
using namespace std;
//函数重载：函数名可相同，提高重复性
//函数重载满足条件
// 1.同一作用域下
// 2.函数名相同
// 3.函数参数类型不同，个数不同或者顺序不同(仅返回值不同不可以)

//注意事项
// 1.引用作为重载条件
void func(int &a) // int &a=10;不合法（a必须指向堆区或者栈区，而10在常量区）
{
    cout << "func1" << endl;
}
void func(const int &a) // const int &a=10;合法(int temp = 10;const int &ref=temp;)
{
    cout << "func2" << endl;
}

// 2.函数重载遇到默认参数
void func2(int a, int b = 10) //有二义性（把=10去掉就没有了）
{
    cout << "fun2_1" << endl;
}

void func2(int a)
{
    cout << "fun2_2" << endl;
}

void func() // 1
{
    cout << "1" << endl;
}

// void func( a) // 2
//{
//     cout << "2" << endl;
// }

void func(double a) // 3
{
    cout << "3" << endl;
}

void func(double a, int b) // 4
{
    cout << "4" << endl;
}

int main()
{
    // func();
    //  func(10);
    func(3.14);
    // func(3.14, 10);
    func(10);

    func2(20);
    system("pause");
    return 0;
}