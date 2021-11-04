#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
//类中的 属性和行为 统称为 成员
//属性 成员属性 成员变量
//行为 成员函数 成员方法
/*
class Student // 1.class
{
public:
    string name;
    int ID;
    void ShowStudent() // 3.no parameter input
    {
        cout << "Student name：" << name << "\nStudent ID:" << ID << endl;
    }
}; // 2.;
*/

//通过行为给属性赋值
class Student
{
public:
    void SetName(string name)
    {
        m_name = name;
    }
    void SetID(int ID)
    {
        m_ID = ID;
    }
    void ShowStudent()
    {
        cout << "Student name:" << m_name << "\n Student ID:" << m_ID << endl;
    }
    // Don't forget
public:
    string m_name;
    int m_ID;
};

int main()
{
    Student s1;
    // s1.name = "Student1";
    // s1.ID = 1;
    // s1.ShowStudent();
    s1.SetName("JACK");
    s1.SetID(123);
    s1.ShowStudent();
    system("pause");
    return 0;
}