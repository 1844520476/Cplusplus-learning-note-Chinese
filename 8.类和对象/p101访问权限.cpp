#include <stdio.h>
#include <iostream>
using namespace std;
//访问权限
// 1.公共权限 public     成员 类内可以访问 类外可访问
// 2.保护权限 protected  成员 类内可以访问 类外不可访问 儿子也可以访问父亲中的保护内容
// 3.私有权限 private    成员 类内可以访问 类外不可访问 儿子不可以访问父亲的私有内容

class Person
{
public:
    string m_name;

protected:
    string m_car;

private:
    int m_password;

public:
    void func()
    {
        m_name = "Jack";
        m_car = "tractor";
        m_password = 136970;
    }
    void ShowPerson()
    {
        cout << "Name:" << m_name
             << "\nCar:" << m_car
             << "\nPassword" << m_password << endl;
    }
};
int main()
{
    Person p;
    p.func();
    p.m_name = "Mark";
    // p.m_car = "CAR";//保护权限内容，在类外访问不到
    // p.m_password=1232456;//私有权限内容，在类外访问不到
    p.ShowPerson();
    system("pause");
    return 0;
}