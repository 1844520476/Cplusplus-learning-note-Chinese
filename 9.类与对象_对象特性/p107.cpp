#include <stdio.h>
#include <iostream>
using namespace std;
//构造函数的分类及调用：
/*
?	按参数分为： 有参构造  无参构造（默认构造）
?	按类型分为： 普通构造  拷贝构造
三种调用方式：括号法  显示法  隐式转换法
*/
class Person
{
    int age;

public:
    Person() //无参构造函数（默认）
    {
        cout << "Person的无参构造函数"
             << endl;
    }
    Person(int a) //有参构造
    {
        age = a;
        cout << "\nPerson的有参构造函数"
             << "\nage=" << age << endl;
    }
    Person(const Person &p) //拷贝构造函数
    {
        age = p.age;
        cout << "\nPerson的拷贝构造函数"
             << endl;
    }
    ~Person()
    {
        // cout << "Person的析构函数调用" << endl;
    }
    getAge()
    {
        return age;
    }
};

void test01()
{
    // 1.括号法
    Person p1;     //无参（默认）构造函数的调用
    Person p2(18); //有参构造的调用
    // p2.Person(18);//error: invalid use of 'Person::Person'
    Person p3(p2); //拷贝构造函数的调用
    cout << "p3.age=" << p3.getAge() << "\n"
         << endl;
    //注意事项1：调用无参构造函数时，不要加（）
    // Person p1()编译器会认为此为函数声明

    //  2.显式法
    Person p11;
    Person p12 = Person(19);
    Person p13 = Person(p2);
    Person(20); //匿名对象 特点：当前行执行完后，系统会立即回收匿名对象
    //注意事项2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
    // Person(p13)===(等价于)Person p13

    //  3.隐式转化法
    Person p21 = 10; //编译器转化为Person p21=Person(10)
    Person p22 = p21;
}

int main()
{
    test01();
    system("pause");
    return 0;
}