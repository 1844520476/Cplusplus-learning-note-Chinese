#include <stdio.h>
#include <iostream>
using namespace std;
//引用做函数返回值
// 1.不要返回局部变量的引用
// 2.函数引用可以作为左值

int &test_1()
{
    int a = 10; // a此时为局部变量
    return a;
}

int &test_2()
{
    static int a = 10; //全局变量由系统释放。不会因为test_2执行完数据被清除
    cout << "(test_2)a=" << a << endl;
    return a;
}
int main()
{
    /*
    int &ref = test_1();
    cout << "ref=" << ref << endl;
    cout << "ref=" << ref << endl;
    */
    int &ref2 = test_2();
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;

    test_2() = 1000;                 //若函数返回值是引用，此函数可作为左值
    cout << "ref2=" << ref2 << endl; // ref2已经是a的别名
    // cout << "ref2=" << a << endl;//error

    system("pause");
    return 0;
}