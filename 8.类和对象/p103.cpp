#include <stdio.h>
#include <iostream>
using namespace std;
/*成员属性设置为私有

优点1：将所有成员属性设置为私有，可以自己控制读写权限

优点2：对于写(set)权限，可以检测数据的有效性
*/

class Person
{
public:
    //姓名 可读可写
    void setName(string name)
    {
        m_name = name;
    }
    void getName()
    {
        cout << "name:" << m_name << endl;
    }
    //年龄 只读->可读可写(年龄范围是0到150)
    void getAge()
    {
        // m_age = 18;
        cout << "age:" << m_age << endl;
    }
    void setAge(int *age)
    {
        if (*age < 0 || *age > 150)
        {
            m_age = 0;
            cout << "你这个老妖精" << endl;
            return; //结束函数
        }
        m_age = *age;
        // Person p1;
        // p1.getAge();//warning 总显示age:5134304
        cout << "age(first print):" << m_age << endl;
    }
    //情人 只写
    void setLover(string Lover)
    {
        m_lover = Lover;
    }

private:
    string m_name; //可读可写

    int m_age; //只读

    string m_lover; //只写
};

int main()
{
    Person p1;
    p1.setName("Jack");
    p1.getName();
    // p1.setAge(19);//class Person' has no member named 'setAge'
    int a;
    cin >> a;
    p1.setAge(&a);
    // p1.getAge();
    p1.setLover("Miyoki");
    // cout << "p1.Lover:" << p1.m_lover << endl;//private
    system("pause");
    return 0;
}