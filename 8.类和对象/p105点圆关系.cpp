#include <stdio.h>
#include <iostream>
using namespace std;
//点圆关系

class Point //点类
{
    double m_x;
    double m_y;

public:
    void SetX(double x)
    {
        m_x = x;
    }
    double GetX()
    {
        return m_x;
    }
    void SetY(double y)
    {
        m_y = y;
    }
    double GetY()
    {
        return m_y;
    }
};

class Circle //圆类
{
    int m_R;
    Point m_Center;

public:
    void SetR()
    {
        cout << "Please input radius:" << endl;
        cin >> m_R;
    }
    double GetR()
    {
        return m_R;
    }
    void SetCenter(Point center) //获取圆心
    {
        m_Center = center;
    }
    Point GetCenter() //注意此处返回类型为Point
    {
        return m_Center;
    }
};

void IsInCircle(Circle &c, Point &p) //（引用形式）
{
    double x = c.GetCenter().GetX() - p.GetX(); //好好看看
    double y = c.GetCenter().GetY() - p.GetY();
    double dis = x * x + y * y;
    double Rdis = c.GetR() * c.GetR();
    if (dis > Rdis)
    {
        cout << "point out of circle" << endl;
    }
    else if (dis < Rdis)
    {
        cout << "point in circle" << endl;
    }
    else
    {
        cout << "point on circle" << endl;
    }
}

int main()
{
    Circle c1;
    Point center1; //创建圆
    c1.SetR();
    cout << "Please input circle center" << endl;
    double X, Y;
    cin >> X >> Y;
    center1.SetX(X);
    center1.SetY(Y);

    Point p1;
    cout << "Please input point" << endl;
    double X_p1, Y_p1;
    cin >> X_p1 >> Y_p1;
    p1.SetX(X_p1);
    p1.SetY(Y_p1);

    IsInCircle(c1, p1);
    system("pause");
    return 0;
}