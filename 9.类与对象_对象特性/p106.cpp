#include <stdio.h>
#include <iostream>
using namespace std;
//构造函数和析构函数
// 1.构造函数：进行初始化操作
// 2.析构函数：进行清理的操作
class Person
{
public:
    /*
    1. 构造函数，没有返回值也不写void
    2. 函数名称与类名相同
    3. 构造函数可以有参数，因此可以发生重载
    4. 程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次
    */
    Person()
    {
        cout << "Person的构造函数调用" << endl;
    }
    /*
    1. 析构函数，没有返回值也不写void
    2. 函数名称与类名相同,在名称前加上符号  ~
    3. 析构函数不可以有参数，因此不可以发生重载
    4. 程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
    */
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
};

void test01()
{
    Person p; //在栈上的数据，test01执行完毕后，释放这个对象
}

int main()
{
    // test01();
    Person p; //在堆上的数据，主函数执行完毕后才释放这个对象（眼尖的朋友可以注意康康）
    system("pause");
    return 0;
}