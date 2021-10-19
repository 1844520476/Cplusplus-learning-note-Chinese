#include <stdio.h>
#include <iostream>
using namespace std;
//常量引用：用以修饰形参，防止误操作
// const int &ref=10;   与   int temp = 10;const int &ref=temp;(编译器) 再参考p93第13行
void showme(const int &val) //常量引用
{
    // val = 500;
    cout << "\nval=" << val << endl;
}
int main()
{
    // 1.
    const int &ref = 10; //只读，不可修改
    // int &ref=10;//error code
    cout << "ref=" << ref << endl;
    // 2.
    int a = 10;
    showme(a);
    cout << "a=" << a << endl;
    system("pause");
    return 0;
}