#include <stdio.h>
#include <iostream>
using namespace std;
//立方体类设计
// 1.创建立方体类
// 2.设计属性
// 3.设计行为 获取立方体体积和面积
// 4.分别利用全局函数和成员函数判断两立方体是否相等
class Cube
{
public:
	void Set(int x, int y, int z)
	{
		int xyz[3] = {x, y, z};
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3 - i; j++)
			{
				if (xyz[i] > xyz[i + 1])
				{
					int temp = xyz[i];
					xyz[i] = xyz[i + 1];
					xyz[i + 1] = temp;
				}
			}
		}
		c_x = xyz[0];
		c_y = xyz[1];
		c_z = xyz[2];
	}

	int Get_x()
	{
		return c_x;
	}
	int Get_y()
	{
		return c_y;
	}
	int Get_z()
	{
		return c_z;
	}
	void Get_S()
	{
		int c_s = 2 * (c_x * c_y + c_z * c_y + c_z * c_x); //面积
		cout << "面积为：" << c_s << endl;
	}
	void Get_V()
	{
		int c_v = c_x * c_y * c_z; //体积
		cout << "体积为：" << c_v << endl;
	}

	bool isSameCube(Cube &c2) //成员函数只用传一个与c1对比
	{
		if (c_x == c2.Get_x() && c_y == c2.Get_y() && c_z == c2.Get_z()) //类内可以访问private
			return 1;
		return 0;
	}

private:
	int c_x;
	int c_y;
	int c_z;
};

bool isSameCube(Cube &c1, Cube &c2) //引用（避免数据重复拷贝）
{
	if (c1.Get_x() == c2.Get_x() && c1.Get_y() == c2.Get_y() && c1.Get_z() == c2.Get_z())
		return 1;
	return 0;
}

int main()
{
	Cube c1;
	int c1_a, c1_b, c1_c;
	cout << "请分别输入长宽高:" << endl;
	cin >> c1_a >> c1_b >> c1_c;
	c1.Set(c1_a, c1_b, c1_c);
	c1.Get_V();
	c1.Get_S();

	Cube c2;
	int c2_a, c2_b, c2_c;
	cout << "请分别输入长宽高:" << endl;
	cin >> c2_a >> c2_b >> c2_c;
	c2.Set(c2_a, c2_b, c2_c);
	c2.Get_V();
	c2.Get_S();

	// bool ret = isSameCube(c1, c2);//全局函数
	bool ret = c1.isSameCube(c2);
	if (ret)
	{
		cout << "两立方体相同" << endl;
	}
	else
	{
		cout << "两立方体不相等" << endl;
	}

	system("pause");
	return 0;
}