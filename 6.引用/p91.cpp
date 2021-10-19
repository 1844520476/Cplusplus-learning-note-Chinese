#include <stdio.h>
#include <iostream>
using namespace std;
//交换函数（引用做函数1参数）
// 1.值传递与2.地址传递
// 3.引用传递
void Swap(int &a, int &b) //引用做函数参数，形参改变实参
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a = 10;
    int b = 20;
    Swap(a, b);
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    system("pause");
    return 0;
}