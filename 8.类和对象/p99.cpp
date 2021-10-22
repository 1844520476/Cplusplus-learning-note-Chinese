// C++面向对象的三大特性：封装，继承，多态
// C++万事万物皆对象。有其属性和行为
//具有相同性质的对象，可抽象为类
#include <stdio.h>
#include <iostream>
#define N 10
using namespace std;
const double PI = 3.14;
//封装的意义：
// 1.1将属性和行为作为一个整体，表现生活中的事物

//语法：class 类名{   访问权限： 属性  / 行为  };
class Circle
{
public:                  //访问权限
    int m_r;             //属性
    double calculateZC() //行为(通常是函数)：获取周长
    {
        return 2 * PI * m_r;
    }
}; //记得;
// 1.2将属性和行为加以权限控制(之后再说)
int main()
{
    //实例化
    Circle c1;  //通过类创建具体对象
    c1.m_r = N; //给具体对象赋值
    cout << "圆周长为：" << c1.calculateZC() << endl;
    system("pause");
    return 0;
}